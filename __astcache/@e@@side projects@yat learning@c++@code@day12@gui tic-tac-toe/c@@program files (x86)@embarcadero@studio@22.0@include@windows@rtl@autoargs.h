//------------------------------------------------------------------------------
// AOTOARGS.H - Wrapper of VARIANT array used in Automation
//
// $Rev: 110690 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
//------------------------------------------------------------------------------
#ifndef __AUTOARGS_H
#define __AUTOARGS_H

  // We default to TVariant for disp wrappers if it's been seen
#if defined(__UTILCLS_H)
  typedef TVariantT<VARIANT, true> VARIANTOBJ;
#elif defined(__OLEVARIANT_DEFINED)
  // Here OleVariant has been defined; we will use it for
  // dispatch/automation support.
  typedef System::OleVariant VARIANTOBJ;
#else
  #pragma error No Variant support provided for AutoArgs! Include <utilcls.h> or <System.hpp>
#endif

#ifndef _ASSERTE
  #include <assert.h>
  #define _ASSERTE(x) assert(x)
#endif

#ifndef _ASSERTE_
  #include <assert.h>
  #define _ASSERTE_(x) assert(x)
#endif


class TAutoArgsBase
{
protected:
  TAutoArgsBase(VARIANTOBJ *pVariant, int count) : m_Variant(pVariant), m_Count(count)
  {}

public:
  VARIANTOBJ& operator[](int index) const
  {
    // NOTE: It's OK to use Count - there's an extra Variant for return result
    //       Zero'th entry's reserved for return value.
    //
    _ASSERTE_(index <= m_Count);
    _ASSERTE_(index >= 0);

    // Make up for C++ vs. Basic reverse indexing
    //
    return m_Variant[index ? (m_Count+1-index) : 0];
  }

  VARIANTOBJ* GetRetVal() const
  {
    return &m_Variant[0];
  }

  VARIANTOBJ& GetRetVariant()
  {
    return *m_Variant;
  }

  VARIANTOBJ* GetArgs() const
  {
    return (VARIANTOBJ*)(m_Variant+1);
  }

  int GetCount() const
  {
    return m_Count;
  }

private:
  TAutoArgsBase(const TAutoArgsBase&);
  TAutoArgsBase& operator=(const TAutoArgsBase&);

  VARIANTOBJ *m_Variant;
  int         m_Count;
};


// TAutoArgs - Encapsulates array of Variants used for Invoke calls
//
template <int COUNT>
class TAutoArgs : public TAutoArgsBase
{
public:
  TAutoArgs() : TAutoArgsBase(m_Array, COUNT) {};
 ~TAutoArgs() {};
  TAutoArgs(TAutoArgs& src);

private:
  // Allocate an extra Variant. It's the first entry  and
  // it is reserved for return result. The rest are for parameters
  //
  VARIANTOBJ m_Array[COUNT+1];
};

#endif // __AUTOARGS_H
