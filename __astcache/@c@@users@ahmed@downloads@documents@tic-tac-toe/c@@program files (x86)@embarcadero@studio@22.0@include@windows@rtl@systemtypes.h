// -----------------------------------------------------------------------------------
// SystemTypes.h C++ Declarations of various types from the System.Types unit
//
// $Rev: 111713 $
//
// Copyright(c) 2012 Embarcadero Technologies, Inc.
// -----------------------------------------------------------------------------------
#ifndef SystemTypes_H
#define SystemTypes_H

#if !defined(System_TypesHPP)
#error Do not include this file directly.  Include 'System.Types.hpp'.
#endif

#include <math.h>
#include <float.h>

#ifdef _WIN32
 #include <ocidl.h>
#endif

#ifdef _WIN64
namespace System {
  double __fastcall hypotWA(double x, double y);
}
#endif

namespace System {
 namespace Types  {

  static inline float _roundf(float val) {
    return floor(val + 0.5f);
  }

  struct TSmallPoint {
    short x;
    short y;

    static TSmallPoint Create(const short x, const short y) _ALWAYS_INLINE {
      TSmallPoint sp;
      sp.x = x;
      sp.y = y;
      return sp;
    }

    TSmallPoint& init(short ix, short iy) _ALWAYS_INLINE {
      x = ix;
      y = iy;
      return *this;
    }

    bool operator ==(const TSmallPoint& sp) const _ALWAYS_INLINE {
      return x == sp.x && y == sp.y;
    }

    bool operator !=(const TSmallPoint& sp) const _ALWAYS_INLINE {
      return !(*this == sp );
    }

    TSmallPoint operator +(const TSmallPoint& sp) const _ALWAYS_INLINE {
      TSmallPoint res;
      return res.init((short)(this->x + sp.x), (short)(this->y + sp.y));
    }

    TSmallPoint operator -(const TSmallPoint& sp) const _ALWAYS_INLINE {
      TSmallPoint res;
      return res.init((short)(this->x - sp.x), (short)(this->y - sp.y));
    }

    TSmallPoint& operator +=(const TSmallPoint& rhs) _ALWAYS_INLINE {
      this->x += rhs.x;
      this->y += rhs.y;
      return *this;
    }

    TSmallPoint& operator -=(const TSmallPoint& rhs) _ALWAYS_INLINE {
      this->x -= rhs.x;
      this->y -= rhs.y;
      return *this;
    }

    bool IsZero() const _ALWAYS_INLINE {
      return !x && !y;
    }

    double Distance(const TSmallPoint& p2) const _ALWAYS_INLINE {
      return hypot(static_cast<double>(p2.x - this->x), static_cast<double>(p2.y - this->y));
    }
  };

  struct TSize: public tagSIZE {
    TSize() _ALWAYS_INLINE {
      this->cx = this->cy = 0;
    }

    TSize(const tagSIZE& ts) _ALWAYS_INLINE {
      this->cx = ts.cx;
      this->cy = ts.cy;
    }

    TSize(int32_t x, int32_t y) _ALWAYS_INLINE {
      this->cx = x;
      this->cy = y;
    }

    bool operator ==(const TSize& ts) const _ALWAYS_INLINE {
      return this->cx == ts.cx && this->cy == ts.cy;
    }

    bool operator !=(const TSize& ts) const _ALWAYS_INLINE {
      return !(*this == ts);
    }

    TSize operator +(const TSize& rhs) const _ALWAYS_INLINE {
      return TSize(this->cx + rhs.cx, this->cy + rhs.cy);
    }

    TSize operator -(const TSize& rhs) const _ALWAYS_INLINE {
      return TSize(this->cx - rhs.cx, this->cy - rhs.cy);
    }

    TSize& operator+= (const TSize& rhs) _ALWAYS_INLINE {
        this->cx += rhs.cx;
        this->cy += rhs.cy;
        return *this;
    }

    TSize& operator-= (const TSize& rhs) _ALWAYS_INLINE {
      this->cx -= rhs.cx;
      this->cy -= rhs.cy;
      return *this;
    }

    bool IsZero() const _ALWAYS_INLINE {
      return !cx && !cy;
    }

    __property LONG Width =  { read=cx,   write=cx  };
    __property LONG Height = { read=cy,   write=cy  };
  };

  typedef TSize* PSize;

  struct TPoint: public POINT  {
    TPoint() _ALWAYS_INLINE
    { x = y = 0; }

    TPoint(int _x, int _y) _ALWAYS_INLINE
    { x=_x; y=_y; }

    bool operator ==(const TPoint& pt) const _ALWAYS_INLINE {
      return (x == pt.x) && (y == pt.y);
    }

    bool operator !=(const TPoint& pt) const _ALWAYS_INLINE {
      return !(pt == *this);
    }

    TPoint operator +(const TPoint& rhs) const _ALWAYS_INLINE {
      return TPoint(rhs.x + this->x, rhs.y + this->y);
    }

    TPoint operator -(const TPoint& rhs) const _ALWAYS_INLINE {
      return TPoint(this->x - rhs.x, this->y - rhs.y );
    }

    TPoint& operator +=(const TPoint& rhs) _ALWAYS_INLINE {
      this->x += rhs.x;
      this->y += rhs.y;
      return *this;
    }

    TPoint& operator -=(const TPoint& rhs) _ALWAYS_INLINE {
      this->x -= rhs.x;
      this->y -= rhs.y;
      return *this;
    }

    bool IsZero() const _ALWAYS_INLINE {
      return !x && !y;
    }

    /// Left for compatibility
    bool IsEmpty() const _ALWAYS_INLINE {
      return IsZero();
    }

    void Offset(int DX, int DY) _ALWAYS_INLINE {
      x += DX;
      y += DY;
    }

    void SetLocation(int nX, int nY) _ALWAYS_INLINE {
      x = nX;
      y = nY;
    }

    void SetLocation(const TPoint& p) _ALWAYS_INLINE {
      x = p.x;
      y = p.y;
    }

    double Distance(const TPoint& p2) const _ALWAYS_INLINE {
      return hypot(static_cast<double>(p2.x - this->x), static_cast<double>(p2.y - this->y));
    }

    static int __fastcall _sqr(int i) _ALWAYS_INLINE { // Helper - private?
       return i*i;
    }

    bool PtInCircle(const TPoint& CircleCenter, int Radius) const _ALWAYS_INLINE {
      return (Radius > 0) && ((_sqr(CircleCenter.x-x)+_sqr(CircleCenter.y-y)) < _sqr(Radius));
    }

    float Angle(const TPoint& P) const _ALWAYS_INLINE {
      return atan2((float)y - P.y,(float)x - P.x);
    }

    __property LONG X = { read=x,   write=x  };
    __property LONG Y = { read=y,   write=y  };
  };

  typedef TPoint tagPoint;

  enum DECLSPEC_DENUM TSplitRectType : unsigned char;
  enum class DECLSPEC_DENUM THorzRectAlign : unsigned char;
  enum class DECLSPEC_DENUM TVertRectAlign : unsigned char;

  struct TRect: public RECT  {
    TRect() _ALWAYS_INLINE
    { init(0,0,0,0); }

    TRect(const TPoint& TL) _ALWAYS_INLINE {
      init(TL.x, TL.y, TL.x, TL.y);
    }

    TRect(const TPoint& TL, int width, int height) _ALWAYS_INLINE {
      init (TL.x, TL.y, TL.x + width, TL.y + height);
    }
    TRect(int l, int t, int r, int b) _ALWAYS_INLINE {
      init(l, t, r, b);
    }
    TRect(const TPoint& TL, const TPoint& BR) _ALWAYS_INLINE {
      init(TL.x, TL.y, BR.x, BR.y);
      Normalize();
    }

    TRect(const RECT& r) _ALWAYS_INLINE {
      init(r.left, r.top, r.right, r.bottom);
    }

    void init(int l, int t, int r, int b) _ALWAYS_INLINE {
      left = l; top = t;
      right = r; bottom = b;
    }

    TPoint& TopLeft() _ALWAYS_INLINE
    { return *((TPoint* )this); }
    TPoint& BottomRight() _ALWAYS_INLINE
    { return *((TPoint* )this+1); }
    const TPoint& TopLeft() const _ALWAYS_INLINE
    { return *((TPoint* )this); }
    const TPoint& BottomRight() const _ALWAYS_INLINE
    { return *((TPoint* )this+1); }

    int Width() const _ALWAYS_INLINE
    { return right  - left; }
    int Height() const _ALWAYS_INLINE
    { return bottom - top ; }

    static TRect Empty() _ALWAYS_INLINE
    { return TRect(); }

    void Normalize() _ALWAYS_INLINE {
      if (top > bottom) {
        top = top ^ bottom;
        bottom = top ^ bottom;
        top = top ^ bottom;
      }
      if (left > right) {
        left = left ^ right;
        right = left ^ right;
        left = left ^ right;
      }
    }

    bool operator ==(const TRect& rc) const  {
       return left ==  rc.left  && top==rc.top &&
              right == rc.right && bottom==rc.bottom;
    }

    bool operator !=(const TRect& rc) const {
      return !(rc==*this);
    }

    TRect operator+(const TRect& rc) const _ALWAYS_INLINE {
      return TRect::Union(*this, rc);
    }

    TRect operator*(const TRect& rc) const _ALWAYS_INLINE {
      return TRect::Intersect(*this, rc);
    }

    TRect& operator+=(const TRect& rhs) _ALWAYS_INLINE {
      Union(rhs);
      return *this;
    }

    TRect& operator*=(const TRect& rhs) _ALWAYS_INLINE {
      Intersect(rhs);
      return *this;
    }

    bool IsEmpty() const _ALWAYS_INLINE {
      return (right == left) || (bottom == top);
    }

    bool Contains(const TPoint& p) const _ALWAYS_INLINE {
      return ((p.x >= left) && (p.y >= top) && (p.x < right) && (p.y < bottom));
    }

    bool PtInRect(const TPoint& p) const _ALWAYS_INLINE {
      return Contains(p);
    }

    bool Contains(const TRect& r) const _ALWAYS_INLINE {
      return Contains(r.TopLeft()) && Contains(r.BottomRight());
    }

    bool Overlaps(const TRect &r) const _ALWAYS_INLINE {
      return IntersectsWith(r);
    }

    bool Intersects(const TRect &r) const _ALWAYS_INLINE {
      return IntersectsWith(r);
    }

    bool IntersectsWith(const TRect &r) const _ALWAYS_INLINE {
      return !( (BottomRight().x < r.TopLeft().x) ||
                (BottomRight().y < r.TopLeft().y) ||
                (r.BottomRight().x < TopLeft().x) ||
                (r.BottomRight().y < TopLeft().y) );
    }

    static TRect Intersect(const TRect &r1, const TRect &r2);
    void Intersect(const TRect &r);

    void Union(const TRect &r);
    static TRect Union(const TRect &r1, const TRect& r2);

    static TRect Union(const TPoint* points, int npoints) _ALWAYS_INLINE {
      TPoint tl, br;

      if (npoints > 0) {
        tl.SetLocation(points[0]);
        br.SetLocation(points[0]);

        for (int i = npoints; --i > 0;) {
          if (points[i].x < tl.x)     tl.x = points[i].x;
          if (points[i].x > br.x)     br.x = points[i].x;

          if (points[i].y < tl.y)     tl.y = points[i].y;
          if (points[i].y > br.y)     br.y = points[i].y;
        }
      }

      return TRect(tl, br);
    }

    bool  IntersectRect(const TRect &R1, const TRect &R2);
    bool  UnionRect(const TRect &R1, const TRect &R2);

    void Offset(int DX, int DY) _ALWAYS_INLINE {
      left   += DX;
      right  += DX;
      top    += DY;
      bottom += DY;
    }

    void Offset(const TPoint& p) _ALWAYS_INLINE { Offset(p.x, p.y); }

    void SetLocation(int X, int Y) _ALWAYS_INLINE {
        Offset(X - left, Y - top);
    }

    void SetLocation(const TPoint& p) _ALWAYS_INLINE {
        Offset(p.x - left, p.y - top);
    }

    void Inflate(int DX, int DY) _ALWAYS_INLINE {
      left   -= DX;
      right  += DX;
      top    -= DY;
      bottom += DY;
    }

    void Inflate(int l, int t, int r, int b) _ALWAYS_INLINE {
      left   -= l;
      right  += r;
      top    -= t;
      bottom += b;
    }

    // NOTE: Several methods (Height, Width, IsEmpty, PtInRect, etc) assume normalized TRects
    //       So use this method first if you have a TRect with (top > bottom) or (left > right).
    void NormalizeRect() _ALWAYS_INLINE {
      int i;
      if (left > right)
      {
        i = left;
        left = right;
        right = i;
      }
      if (top > bottom)
      {
        i = top;
        top = bottom;
        bottom = i;
      }
    }

    TPoint CenterPoint() const _ALWAYS_INLINE {
      return TPoint((left+right)/2, (top+bottom)/2);
    }

    TRect CenteredRect(const TRect &CenteredRect) const _ALWAYS_INLINE {
      int w = CenteredRect.Width();
      int h = CenteredRect.Height();
      int x = (right + left)/2;
      int y = (top + bottom)/2;
      return TRect(x-w/2, y-h/2, x+(w+1)/2, y+(h+1)/2);
    }

    TRect SplitRect(TSplitRectType SplitType, int Size) const;
    TRect SplitRect(TSplitRectType SplitType, double Percent) const;

#if defined(_WIN32)
    bool SubtractRect(const TRect &R1, const TRect &R2) _ALWAYS_INLINE {
      return ::SubtractRect(this, &R1, &R2) != 0;
    }
#endif

    LONG GetWidth() const _ALWAYS_INLINE {
      return right - left;
    }

    void SetWidth(LONG width) _ALWAYS_INLINE {
      right = left + width;
    }

    LONG GetHeight() const _ALWAYS_INLINE {
      return bottom - top;
    }

    void SetHeight(LONG height) _ALWAYS_INLINE {
      bottom = top + height;
    }

    TSize GetSize() const _ALWAYS_INLINE {
      TSize r;
      r.cx = GetWidth();
      r.cy = GetHeight();
      return r;
    }

    void SetSize(const TSize& newSize) _ALWAYS_INLINE {
      SetWidth(newSize.cx);
      SetHeight(newSize.cy);
    }

    TPoint GetLocation() const _ALWAYS_INLINE {
      return TPoint(left, top);
    }

    __property LONG Left    = { read=left,   write=left   };
    __property LONG Top     = { read=top,    write=top    };
    __property LONG Right   = { read=right,  write=right  };
    __property LONG Bottom  = { read=bottom, write=bottom };
    __property TSize Size   = { read=GetSize, write=SetSize };
    __property TPoint Location = { read=GetLocation, write=SetLocation };
  };

  // Floating-point based types: TSizeF, TPointF, TRectF

  struct TSizeF
  {
    float cx;
    float cy;
  public:
    TSizeF() _ALWAYS_INLINE {
      cx = cy = 0;
    }

    TSizeF(float w, float h) _ALWAYS_INLINE {
      cx = w;
      cy = h;
    }

    TSizeF(const TSize& s) _ALWAYS_INLINE {
      cx = s.cx;
      cy = s.cy;
    }

    bool operator ==(const TSizeF& sf) const {
      return _sameValue(cx, sf.cx) && _sameValue(cy, sf.cy);
    }

    bool operator !=(const TSizeF& sf) const {
      return !(sf == *this);
    }

    TSizeF operator +(const TSizeF& rhs) const {
      return TSizeF(rhs.cx + this->cx, rhs.cy + this->cy);
    }

    TSizeF operator -(const TSizeF& rhs) const {
      return TSizeF(this->cx - rhs.cx, this->cy - rhs.cy);
    }

    TSizeF& operator +=(const TSizeF& rhs) {
      this->cx += rhs.cx;
      this->cy += rhs.cy;
      return *this;
    }

    TSizeF& operator -=(const TSizeF& rhs) {
      this->cx -= rhs.cx;
      this->cy -= rhs.cy;
      return *this;
    }

    bool IsZero() const _ALWAYS_INLINE {
      return _sameValue(cx, 0.0F) && _sameValue(cy, 0.0F);
    }

    double Distance(const TSizeF& s2) const _ALWAYS_INLINE {
    #ifdef _WIN64 // RS-53817
      return System::hypotWA(s2.cx - this->cx, s2.cy - this->cy);
    #else
      return hypot(s2.cx - this->cx, s2.cy - this->cy);
    #endif
    }

    TSize Ceiling() const _ALWAYS_INLINE {
      return TSize((int32_t)ceil(this->cx), (int32_t)ceil(this->cy));
    }

    TSize Truncate() const _ALWAYS_INLINE {
      return TSize((int32_t)floor(this->cx), (int32_t)floor(this->cy));
    }

    TSize Round() const _ALWAYS_INLINE {
      return TSize((int32_t)floor(this->cx + 0.5), (int32_t)floor(this->cy + 0.5));
    }

    static bool __fastcall _sameValue(float a, float b) {
      const float SINGLE_RESOLUTION = 1.25E-6f;
      const float SINGLE_ZERO =6.25E-37f;
      float _epsilon = (float) ((fabs(a) > fabs(b)) ? fabs(a): fabs(b)) * SINGLE_RESOLUTION;
      if (_epsilon == 0)
        _epsilon = SINGLE_ZERO; // both a and b are very little, _epsilon was 0 because of normalization
      return (a > b) ? ((a - b) <= _epsilon): ((b - a) <= _epsilon);
    }

    __property float Width =  { read=cx,   write=cx  };
    __property float Height = { read=cy,   write=cy  };
  };

#if !defined(_PLAT_IOS64) && !defined(_PLAT_LINUX64) && !defined(_PLAT_MACOS64)
  struct TPointF : public POINTF
  {
#else
  struct TPointF
  {
    // Ensure compiler 'sees' TPointF as an "Homogeneous Aggregate"
    float x;
    float y;
#endif

    TPointF() _ALWAYS_INLINE
    { x = y = 0; }

    TPointF(float _x, float _y) _ALWAYS_INLINE
    { x=_x; y=_y; }

    TPointF(const POINT& pt) _ALWAYS_INLINE {
      x = pt.x;
      y = pt.y;
    }

    bool operator ==(const TPointF& pt) const {
      return _sameValue(x, pt.x) && _sameValue(y, pt.y);
    }

    bool operator !=(const TPointF& pt) const {
      return !(pt == *this);
    }

    TPointF operator +(const TPointF& rhs) const {
      return TPointF(rhs.x + this->x, rhs.y + this->y);
    }

    TPointF operator -(const TPointF& rhs) const {
      return TPointF(this->x - rhs.x, this->y - rhs.y);
    }

    TPointF operator-() const { return TPointF(-this->x, -this->y); }

    TPointF operator *(float f) const {
      return TPointF(this->x * f, this->y * f);
    }

    TPointF operator *(const TPointF &P) const {
      return TPointF(this->x * P.x, this->y * P.y);
    }

    friend TPointF operator*(float, const TPointF &);

    TPointF operator /(float f) const {
      return TPointF(this->x / f, this->y / f);
    }

    TPointF& operator +=(const TPointF& rhs) {
      this->x += rhs.x;
      this->y += rhs.y;
      return *this;
    }

    TPointF& operator -=(const TPointF& rhs) {
      this->x -= rhs.x;
      this->y -= rhs.y;
      return *this;
    }

    TPointF& operator *=(float f) {
      this->x *= f;
      this->y *= f;
      return *this;
    }

    TPointF& operator *=(const TPointF &P) {
      this->x *= P.x;
      this->y *= P.y;
      return *this;
    }

    TPointF& operator /=(float f) {
      this->x /= f;
      this->y /= f;
      return *this;
    }

    bool IsZero() const _ALWAYS_INLINE {
      return _sameValue(x, 0.0F) && _sameValue(y, 0.0F);
    }

    /// Left for compatibility
    bool IsEmpty() const _ALWAYS_INLINE {
      return IsZero();
    }

    void Offset(float DX, float DY) _ALWAYS_INLINE {
      x += DX;
      y += DY;
    }

    void SetLocation(float nX, float nY) _ALWAYS_INLINE {
      x = nX;
      y = nY;
    }

    void SetLocation(const TPointF& p) _ALWAYS_INLINE {
      x = p.x;
      y = p.y;
    }

    double Distance(const TPointF& p2) const _ALWAYS_INLINE {
    #ifdef _WIN64 // RS-53817
      return System::hypotWA(p2.x - this->x, p2.y - this->y);
    #else
      return hypot(p2.x - this->x, p2.y - this->y);
    #endif
    }

    TPoint Ceiling() const _ALWAYS_INLINE {
      return TPoint((int32_t)ceil(this->x), (int32_t)ceil(this->y));
    }

    TPoint Truncate() const _ALWAYS_INLINE {
      return TPoint((int32_t)floor(this->x), (int32_t)floor(this->y));
    }

    TPoint Round() const _ALWAYS_INLINE {
      return TPoint((int32_t)floor(this->x + 0.5), (int32_t)floor(this->y + 0.5));
    }

    bool PtInCircle(const TPointF& CircleCenter, float Radius) const _ALWAYS_INLINE {
      return (Radius > 0.0F) && ((_sqrf(CircleCenter.x-x)+_sqrf(CircleCenter.y-y)) < _sqrf(Radius));
    }

    float CrossProduct(const TPointF& rhs) const _ALWAYS_INLINE {
      return x * rhs.y - y * rhs.x;
    }

    float DotProduct(const TPointF &rhs) const _ALWAYS_INLINE {
      return (x*rhs.x)+(y*rhs.y);
    }

    TPointF SnapToPixel(float Scale,
                        bool PlaceBetweenPixels = true) const _ALWAYS_INLINE {
      TPointF result;
      if (Scale <= 0.0f) Scale = 1.0f;

      result.x = _roundf(x * Scale) / Scale;
      result.y = _roundf(y * Scale) / Scale;
      if (PlaceBetweenPixels) {
        Scale /= 2.0f;
        result.Offset(Scale, Scale);
      }

      return result;
    }

    float Length() const _ALWAYS_INLINE { return hypot(x, y); }

    TPointF Normalize() const _ALWAYS_INLINE {
      TPointF result = *this;
      float dist = Length();
      if (dist != 0.0f) {
        result.x /= dist;
        result.y /= dist;
      }
      return result;
    }

    TPointF Rotate(float Angle) const _ALWAYS_INLINE {
      float s = sin(Angle);
      float c = cos(Angle);
      return TPointF((x * c) - (y * s), (x * s) + (y * c));
    }

    TPointF Reflect(const TPointF& P) const _ALWAYS_INLINE {
      return (*this) + P * (-2.0f * DotProduct(P));
    }

    TPointF MidPoint(const TPointF &P) const _ALWAYS_INLINE {
      return TPointF( (x+P.x)/2.0f,(y+P.y)/2.0f);
    }

    float AngleCosine(const TPointF& P) const _ALWAYS_INLINE {
      float result = Length() * P.Length();
      if (result > FLT_EPSILON) {
        result = DotProduct(P) / result;
      } else {
        result = DotProduct(P) / FLT_EPSILON;
      }

      return (result > 1.0f) ? 1.0f : ((result < -1.0f) ? -1.0f : result);
    }

    float Angle(const TPointF &P) const _ALWAYS_INLINE {
      return atan2(y-P.y,x-P.x);
    }

    static float __fastcall _sqrf(float i) _ALWAYS_INLINE {
      return i*i;
    }

    static bool __fastcall _sameValue(float a, float b) {
      const float SINGLE_RESOLUTION = 1.25E-6f;
      const float SINGLE_ZERO =6.25E-37f;
      float _epsilon = (float) ((fabs(a) > fabs(b)) ? fabs(a): fabs(b)) * SINGLE_RESOLUTION;
      if (_epsilon == 0)
        _epsilon = SINGLE_ZERO; // both a and b are very little, _epsilon was 0 because of normalization
      return (a > b) ? ((a - b) <= _epsilon): ((b - a) <= _epsilon);
    }

    __property float X = { read=x,   write=x  };
    __property float Y = { read=y,   write=y  };
  };

  typedef TPointF tagPointF;

  struct TRectF {
    float left;
    float top;
    float right;
    float bottom;

    TRectF() _ALWAYS_INLINE
    { init(0,0,0,0); }

    TRectF(const TPointF& TL) _ALWAYS_INLINE {
      init(TL.x, TL.y, TL.x, TL.y);
    }

    TRectF(const TPointF& TL, float width, float height) _ALWAYS_INLINE {
      init (TL.x, TL.y, TL.x + width, TL.y + height);
    }

    TRectF(float l, float t, float r, float b) _ALWAYS_INLINE {
      init(l, t, r, b);
    }

    TRectF(const TPointF& TL, const TPointF& BR) _ALWAYS_INLINE {
      init(TL.x, TL.y, BR.x, BR.y);
      Normalize();
    }

    TRectF(const RECT& r) _ALWAYS_INLINE {
      init(r.left, r.top, r.right, r.bottom);
    }

    void init(float l, float t, float r, float b) {
      left = l; top = t;
      right = r; bottom = b;
    }

    TPointF& TopLeft() _ALWAYS_INLINE
    { return *((TPointF* )this); }
    TPointF& BottomRight() _ALWAYS_INLINE
    { return *((TPointF* )this+1); }
    const TPointF& TopLeft() const _ALWAYS_INLINE
    { return *((TPointF* )this); }
    const TPointF& BottomRight() const _ALWAYS_INLINE
    { return *((TPointF* )this+1); }

    float Width() const _ALWAYS_INLINE
    { return right  - left; }
    float Height() const _ALWAYS_INLINE
    { return bottom - top ; }

    static TRectF Empty() _ALWAYS_INLINE
    { return TRectF(); }

    void Normalize() _ALWAYS_INLINE {
      if (top > bottom) {
        float temp  = top;
        top = bottom;
        bottom = temp;
      }
      if (left > right) {
        float temp = left;
        left = right;
        right = temp;
      }
    }

    bool operator ==(const TRectF& rc) const
    {
      return _sameValue(left, rc.left) && _sameValue(top, rc.top) &&
             _sameValue(right, rc.right) && _sameValue(bottom, rc.bottom);
    }

    bool operator !=(const TRectF& rc) const
    {  return !(rc == *this); }

    bool IsEmpty() const _ALWAYS_INLINE {
      return _sameValue(right, left) || _sameValue(bottom, top); // differs from Delphi version
    }

    bool Contains(const TPointF& p) const _ALWAYS_INLINE {
      return ((p.x > left || _sameValue(p.x, left)) && (p.y > top || _sameValue(p.y, top)) && (p.x < right) && (p.y < bottom));
    }

    bool PtInRect(const TPointF& p) const _ALWAYS_INLINE {
      return Contains(p);
    }

    bool Contains(const TRectF& r) const _ALWAYS_INLINE {
      return Contains(r.TopLeft()) && Contains(r.BottomRight());
    }

    bool Overlaps(const TRectF &r) const _ALWAYS_INLINE {
      return IntersectsWith(r);
    }

    bool Intersects(const TRectF &r) const _ALWAYS_INLINE {
      return IntersectsWith(r);
    }

    bool IntersectsWith(const TRectF &r) const _ALWAYS_INLINE {
      return !( (BottomRight().x < r.TopLeft().x) ||
                (BottomRight().y < r.TopLeft().y) ||
                (r.BottomRight().x < TopLeft().x) ||
                (r.BottomRight().y < TopLeft().y) );
    }

    static TRectF Intersect(const TRectF &r1, const TRectF &r2);
    void Intersect(const TRectF &r);

    void Union(const TRectF &r);
    static TRectF Union(const TRectF &r1, const TRectF &r2);

    static TRectF Union(const TPointF* points, int npoints) _ALWAYS_INLINE {
      TPointF tl, br;

      if (npoints > 0) {
        tl.SetLocation(points[0]);
        br.SetLocation(points[0]);

        for (int i = npoints; --i > 0;) {
          if (points[i].x < tl.x)
            tl.x = points[i].x;
          if (points[i].x > br.x)
            br.x = points[i].x;

          if (points[i].y < tl.y)
            tl.y = points[i].y;
          if (points[i].y > br.y)
            br.y = points[i].y;
        }
      }

      return TRectF(tl, br);
    }

    void Offset(float DX, float DY) _ALWAYS_INLINE {
      left   += DX;
      right  += DX;
      top    += DY;
      bottom += DY;
    }

    void SetLocation(float X, float Y) _ALWAYS_INLINE {
        Offset(X - left, Y - top);
    }

    void SetLocation(const TPointF& p) _ALWAYS_INLINE {
        Offset(p.x - left, p.y - top);
    }

    void Inflate(float DX, float DY) _ALWAYS_INLINE {
      left   -= DX;
      right  += DX;
      top    -= DY;
      bottom += DY;
    }

    void Inflate(float l, float t, float r, float b) _ALWAYS_INLINE {
      left   -= l;
      right  += r;
      top    -= t;
      bottom += b;
    }

    // NOTE: Several methods (Height, Width, IsEmpty, PtInRect, etc) assume normalized TRects
    //       So use this method first if you have a TRect with (top > bottom) or (left > right).
    void NormalizeRect() _ALWAYS_INLINE {
      float temp;
      if (left > right)
      {
        temp = left;
        left = right;
        right = temp;
      }
      if (top > bottom)
      {
        temp = top;
        top = bottom;
        bottom = temp;
      }
    }

    TPointF CenterPoint() const _ALWAYS_INLINE {
      return TPointF((left+right)/2.0F, (top+bottom)/2.0F);
    }

    TRect Ceiling() const _ALWAYS_INLINE {
      return TRect(TopLeft().Ceiling(), BottomRight().Ceiling());
    }

    TRect Truncate() const _ALWAYS_INLINE {
      return TRect(TopLeft().Truncate(), BottomRight().Truncate());
    }

    TRect Round() const _ALWAYS_INLINE {
      return TRect(TopLeft().Round(), BottomRight().Round());
    }

    TRectF CenteredRect(const TRectF &CenteredRect) const _ALWAYS_INLINE {
      float w = CenteredRect.Width();
      float h = CenteredRect.Height();
      float x = (right + left)/2.0F;
      float y = (top + bottom)/2.0F;
      return TRectF(x-w/2.0F, y-h/2.0F, x+w/2.0F, y+h/2.0F);
    }

    TRectF CenterAt(const TRectF& Bounds) const _ALWAYS_INLINE {
      TRectF result = *this;
      result.Offset(-result.left, -result.top);
      result.Offset(_roundf((Bounds.Width() - result.Width()) / 2.0f),
                    _roundf((Bounds.Height() - result.Height()) / 2.0f));
      result.Offset(Bounds.left, Bounds.top);
      return result;
    }

    float GetWidth() const _ALWAYS_INLINE {
      return right - left;
    }

    void SetWidth(float width) _ALWAYS_INLINE {
      right = left + width;
    }

    float GetHeight() const _ALWAYS_INLINE {
      return bottom - top;
    }

    void SetHeight(float height) _ALWAYS_INLINE {
      bottom = top + height;
    }

    TSizeF GetSize() const _ALWAYS_INLINE {
      return TSizeF(GetWidth(), GetHeight());
    }

    void SetSize(const TSizeF& newSize) _ALWAYS_INLINE {
      SetWidth(newSize.cx);
      SetHeight(newSize.cy);
    }

    TPointF GetLocation() const _ALWAYS_INLINE {
      return TPointF(left, top);
    }

    static float __fastcall _sqrf(float i) _ALWAYS_INLINE {
      return i*i;
    }

    static bool __fastcall _sameValue(float a, float b) _ALWAYS_INLINE {
      const float SINGLE_RESOLUTION = 1.25E-6f;
      const float SINGLE_ZERO =6.25E-37f;
      float _epsilon = (float) ((fabs(a) > fabs(b)) ? fabs(a): fabs(b)) * SINGLE_RESOLUTION;
      if (_epsilon == 0)
        _epsilon = SINGLE_ZERO; // both a and b are very little, _epsilon was 0 because of normalization
      return (a > b) ? ((a - b) <= _epsilon): ((b - a) <= _epsilon);
    }

    TRectF FitInto(const TRectF& DesignatedArea,
                   float& Ratio) const;

    TRectF FitInto(const TRectF &DesignatedArea) const _ALWAYS_INLINE {
      float Ratio;
      return FitInto(DesignatedArea,Ratio);
    }

    TRectF SnapToPixel(float Scale,
                       bool PlaceBetweenPixels = true) const _ALWAYS_INLINE {
      if (Scale <= 0.0f)
        Scale = 1.0f;

      TRectF result;
      result.left = _roundf(left * Scale) / Scale;
      result.top = _roundf(top * Scale) / Scale;
      result.SetWidth(_roundf( Width() * Scale) / Scale);
      result.SetHeight(_roundf( Height() * Scale) / Scale);

      if (PlaceBetweenPixels) {
        Scale /= 2.0f;
        result.Offset(Scale, Scale);
      }

      return result;
    }

    TRectF PlaceInto(const TRectF &DesignatedArea, THorzRectAlign HorzAlign, TVertRectAlign VertAlign) const;

    __property float Left    = { read=left,   write=left   };
    __property float Top     = { read=top,    write=top    };
    __property float Right   = { read=right,  write=right  };
    __property float Bottom  = { read=bottom, write=bottom };
    __property TSizeF Size   = { read=GetSize, write=SetSize };
    __property TPointF Location = { read=GetLocation, write=SetLocation };
  };
} /* namespace Types */
} /* namespace System */

#endif // SystemTypes_H

// ---------------------------------------------------------------------------
// Yep, a badly guarded header, but since it comes in via a properly
// guarded one, System.Types.hpp, that bad behaviour is of limited impact
// ---------------------------------------------------------------------------
#if defined(SYSTEM_TYPES_AT_END) && !defined(SystemTypes_End_H)
#define SystemTypes_End_H

namespace System { namespace Types {

  inline TPointF operator*(float f, const TPointF& P) {
    return TPointF(f * P.x, f * P.y);
  }

  inline TRect TRect::SplitRect(TSplitRectType SplitType, int Size) const {
    TRect result = *this;
    switch (SplitType) {
      case srLeft:
        result.right = left + Size;
        break;
      case srRight:
        result.left = right - Size;
        break;
      case srTop:
        result.bottom = top + Size;
        break;
      case srBottom:
        result.top = bottom - Size;
        break;
    }
    return result;
  }

  inline TRect TRect::SplitRect(TSplitRectType SplitType, double Percent) const {
    TRect result = *this;
    switch (SplitType) {
      case srLeft:
        result.right = left + (int)floor(Percent * GetWidth());
        break;
      case srRight:
        result.left = right - (int)floor(Percent * GetWidth());
        break;
      case srTop:
        result.bottom = top + (int)floor(Percent * GetHeight());
        break;
      case srBottom:
        result.top = bottom - (int)floor(Percent * GetHeight());
        break;
    }
    return result;
  }

  inline bool TRect::IntersectRect(const TRect &R1, const TRect &R2) {
    return Types::IntersectRect(*this, R1, R2) != 0;
  }

  inline TRect TRect::Intersect(const TRect &r1, const TRect &r2) {
    TRect result;
    Types::IntersectRect(result, r1, r2);
    return result;
  }

  inline void TRect::Intersect(const TRect &r) {
    Types::IntersectRect(*this, *this, r);
  }

  inline bool TRect::UnionRect(const TRect &R1, const TRect &R2) {
    return Types::UnionRect(*this, R1, R2) != 0;
  }

  inline TRect TRect::Union(const TRect &r1, const TRect& r2) {
    TRect result;
    Types::UnionRect(result, r1, r2);
    return result;
  }

  inline void TRect::Union(const TRect &r) {
    Types::UnionRect(*this, *this, r);
  }

  inline TRectF TRectF::FitInto(const TRectF& DesignatedArea,
                                float& Ratio) const _ALWAYS_INLINE {
    if (DesignatedArea.Width() <= 0 || DesignatedArea.Height() <= 0) {
      Ratio = 1;
      return *this;
    }

    float rw = Width() / DesignatedArea.Width();
    float rh = Height() / DesignatedArea.Height();

    if (rw > rh)
      Ratio = rw;
    else
      Ratio = rh;

    if (Ratio == 0)
      return *this;
    TRectF result(0, 0, Width() / Ratio, Height() / Ratio);
    RectCenter(result, DesignatedArea);
    return result;
  }

  inline TRectF TRectF::Intersect(const TRectF &r1, const TRectF &r2) {
    TRectF result;
    Types::IntersectRectF(result, r1, r2);
    return result;
  }

  inline void TRectF::Intersect(const TRectF &r) {
    Types::IntersectRectF(*this, *this, r);
  }

  inline TRectF TRectF::Union(const TRectF &r1, const TRectF &r2) {
    TRectF result;
    Types::UnionRectF(result, r1, r2);
    return result;
  }

  inline void TRectF::Union(const TRectF &r) {
    Types::UnionRectF(*this, *this, r);
  }

  inline TRectF TRectF::PlaceInto(const TRectF& DesignatedArea,
                                  THorzRectAlign HorzAlign,
                                  TVertRectAlign VertAlign) const {
    TRectF result = *this;
    TPointF Location;

    if ((GetWidth() > DesignatedArea.GetWidth()) ||
        (GetHeight() > DesignatedArea.GetHeight()))
      return result.FitInto(DesignatedArea);

    switch (HorzAlign) {
      case THorzRectAlign::Center:
        Location.x = (DesignatedArea.Left + DesignatedArea.Right + result.GetWidth()) / 2;
        break;
      case THorzRectAlign::Left:
        Location.x = DesignatedArea.Left;
        break;
      case THorzRectAlign::Right:
        Location.x = DesignatedArea.Right - result.GetWidth();
        break;
    }

    switch (VertAlign) {
      case TVertRectAlign::Center:
        Location.y = (DesignatedArea.Top + DesignatedArea.Bottom - result.GetHeight()) / 2;
        break;
      case TVertRectAlign::Top:
        Location.y = DesignatedArea.Top;
        break;
      case TVertRectAlign::Bottom:
        Location.y = DesignatedArea.Bottom - result.GetHeight();
        break;
    }

    result.SetLocation(Location);
    return result;
  }

#ifndef __clang__
  template<typename T>
  void __fastcall TBitConverter::UnsafeFrom(const T Value, System::DynamicArray<System::Byte> &B, int Offset)
  {
    typedef T* PT;
    System::DynamicArray<System::Byte> A = B;
    Byte* P = &A[Offset];
    *(reinterpret_cast<PT>(P)) = Value;
  }

  template<typename T>
  void __fastcall TBitConverter::From(const T Value, System::DynamicArray<System::Byte> &B, int Offset)
  {
    if ((Offset < 0) || (Offset+sizeof(T) > B.Length))
      RangeCheckError();
    return UnsafeFrom<T>(Value, B, Offset);
  }

  template<typename T>
  T __fastcall TBitConverter::UnsafeInTo(const System::DynamicArray<System::Byte> B, int Offset)
  {
    typedef T* PT;
    System::DynamicArray<System::Byte> A = B;
    Byte* P = &A[Offset];
    return *(reinterpret_cast<PT>(P));
  }

  template<typename T> T
  __fastcall TBitConverter::InTo(const System::DynamicArray<System::Byte> B, int Offset)
  {
    if ((Offset < 0) || (Offset+sizeof(T) > B.Length))
      RangeCheckError();
    return UnsafeInTo<T>(B, Offset);
  }
#else
  template<typename T>
  void __fastcall TBitConverter::UnsafeFrom(const T Value, System::TArray__1<System::Byte> &B, int Offset)
  {
    typedef T* PT;
    System::TArray__1<System::Byte> A = B;
    Byte* P = &A[Offset];
    *(reinterpret_cast<PT>(P)) = Value;
  }

  template<typename T>
  void __fastcall TBitConverter::From(const T Value, System::TArray__1<System::Byte> &B, int Offset)
  {
    if ((Offset < 0) || (Offset+sizeof(T) > B.Length))
      RangeCheckError();
    return UnsafeFrom<T>(Value, B, Offset);
  }

  template<typename T>
  T __fastcall TBitConverter::UnsafeInTo(const System::TArray__1<System::Byte> B, int Offset)
  {
    typedef T* PT;
    System::TArray__1<System::Byte> A = B;
    Byte* P = &A[Offset];
    return *(reinterpret_cast<PT>(P));
  }

  template<typename T>
  T __fastcall TBitConverter::InTo(const System::TArray__1<System::Byte> B, int Offset)
  {
    if ((Offset < 0) || (Offset+sizeof(T) > B.Length))
      RangeCheckError();
    return UnsafeInTo<T>(B, Offset);
  }
#endif
 }
} // System::Types
#endif // SystemTypes_End_H
