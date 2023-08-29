// xparallel internal header
#ifndef _XPARALLEL_
#define _XPARALLEL_
#include <xthreadpool.h>

 #if _HAS_CPP17
#include <atomic>
#include <exception>
#include <xiter>
#include <execution>

 #define _CATCH_PAR_END \
	} \
	catch(...) \
		{ \
		_XSTD terminate(); \
		}

_STD_BEGIN
		/* TEMPLATE CLASS _Dyn_array */
template<class _Ty>
class _Dyn_array
	{	// array with runtime size
public:
	typedef _Ty *iterator;

	_Dyn_array(size_t _Sz, const _Ty& _Val)
		: _First(new unsigned char[_Sz  *sizeof(_Ty)]),
			_Last(_First + _Sz  *sizeof(_Ty))
		{	// allocate data and initialize values
		for (iterator _Iter = begin(); _Iter != end(); ++_Iter)
			new((void*)_Iter) _Ty(_Val);
		}

	~_Dyn_array() _NOEXCEPT
		{	// clean up
		for (iterator _Iter = begin(); _Iter != end(); ++_Iter)
			_Iter->~_Ty();
		delete[] _First;
		}

	iterator begin()
		{	// return iterator pointing at first elemen
		return ((iterator)_First);
		}

	iterator end()
		{	// return past-the-end iterator
		return ((iterator)_Last);
		}

	_Ty& operator[](size_t _Idx)
		{	// return reference to element at _Idx
		return (((iterator)_First)[_Idx]);
		}

	_Ty operator[](size_t _Idx) const
		{	// return copy of element at _Idx
		return (((iterator)_First)[_Idx]);
		}

private:
	_Dyn_array(const _Dyn_array&);				// not implemented
	_Dyn_array& operator=(const _Dyn_array&);	// not implemented
	unsigned char *_First;
	unsigned char *_Last;
	};

		// TEMPLATE CLASS _Single_range
template<class _FwdIt>
	struct _Single_range
	{	// container for tile index and iterator pair
	bool _Empty() const
		{	// test whether range is empty
		return (_First == _Last);
		}

	_FwdIt _First;
	_FwdIt _Last;
	unsigned int _Index;
	};

template<class _FwdIt>
	_Single_range<_FwdIt> _Make_single_range(_FwdIt _First, _FwdIt _Last,
		unsigned int _Idx)
	{	// create range object
	_Single_range<_FwdIt> _Res = {_First, _Last, _Idx};
	return (_Res);
	}

		// TEMPLATE CLASS _Dual_range
template<class _FwdIt1,
	class _FwdIt2>
	struct _Dual_range
	{	// container for tile index and two iterator pairs
	bool _Empty() const
		{	// test whether input range is empty
		return (_First1 == _Last1);
		}

	_FwdIt1 _First1;
	_FwdIt1 _Last1;
	_FwdIt2 _First2;
	_FwdIt2 _Last2;
	unsigned int _Index;
	};

template<class _FwdIt1,
	class _FwdIt2>
	_Dual_range<_FwdIt1, _FwdIt2> _Make_dual_range(
		_Single_range<_FwdIt1> _R1,
		_Single_range<_FwdIt2> _R2,
		unsigned int _Idx)
	{	// create range object
	_Dual_range<_FwdIt1, _FwdIt2> _Res =
		{_R1._First, _R1._Last, _R2._First, _R2._Last, _Idx};
	return (_Res);
	}

template<class _FwdIt1,
	class _FwdIt2>
	_Dual_range<_FwdIt1, _FwdIt2> _Make_dual_range(
		_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2,
		unsigned int _Idx)
	{	// create range object
	_Dual_range<_FwdIt1, _FwdIt2> _Res =
		{_First1, _Last1, _First2, _Last2, _Idx};
	return (_Res);
	}

		// TEMPLATE CLASS _Triple_range
template<class _FwdIt1,
	class _FwdIt2,
	class _FwdIt3>
struct _Triple_range
	{	// container object for tile index and three iterator pairs
	bool _Empty() const
		{	// test whether input ranges are both empty
		return (_First1 == _Last1 && _First2 == _Last2);
		}

	_FwdIt1 _First1;
	_FwdIt1 _Last1;
	_FwdIt2 _First2;
	_FwdIt2 _Last2;
	_FwdIt3 _First3;
	_FwdIt3 _Last3;
	unsigned int _Index;
	};

template<class _FwdIt1,
	class _FwdIt2,
	class _FwdIt3>
	_Triple_range<_FwdIt1, _FwdIt2, _FwdIt3> _Make_triple_range(
		_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _FwdIt2 _Last2,
		_FwdIt3 _First3, _FwdIt3 _Last3,
		unsigned int _Idx)
	{	// create range object
	_Triple_range<_FwdIt1, _FwdIt2, _FwdIt3> _Res =
		{_First1, _Last1,
		_First2, _Last2,
		_First3, _Last3,
		_Idx
		};
	return (_Res);
	}

template<class _FwdIt1,
	class _FwdIt2,
	class _FwdIt3>
	_Triple_range<_FwdIt1, _FwdIt2, _FwdIt3> _Make_triple_range(
		_Single_range<_FwdIt1> _R1,
		_Single_range<_FwdIt2> _R2,
		_Single_range<_FwdIt3> _R3,
		unsigned int _Idx)
	{	// create range object
	_Triple_range<_FwdIt1, _FwdIt2, _FwdIt3> _Res =
		{_R1._First, _R1._Last,
		_R2._First, _R2._Last,
		_R3._First, _R3._Last,
		_Idx
		};
	return (_Res);
	}

		// TEMPLATE CLASS _Quadruple_range
template<class _FwdIt1,
	class _FwdIt2,
	class _FwdIt3,
	class _FwdIt4>
struct _Quadruple_range
	{	// container object for tile index and four iterator pairs
	bool _Empty() const
		{	// test whether input ranges are both empty
		return (_First1 == _Last1 && _First2 == _Last2);
		}

	_FwdIt1 _First1;
	_FwdIt1 _Last1;
	_FwdIt2 _First2;
	_FwdIt2 _Last2;
	_FwdIt3 _First3;
	_FwdIt3 _Last3;
	_FwdIt4 _First4;
	_FwdIt4 _Last4;
	unsigned int _Index;
	};

template<class _FwdIt1,
	class _FwdIt2,
	class _FwdIt3,
	class _FwdIt4>
	_Quadruple_range<_FwdIt1, _FwdIt2, _FwdIt3, _FwdIt4>
		_Make_quadruple_range(
			_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _FwdIt2 _Last2,
			_FwdIt3 _First3, _FwdIt3 _Last3,
			_FwdIt4 _First4, _FwdIt4 _Last4,
			unsigned int _Idx)
	{	// create range object
	_Quadruple_range<_FwdIt1, _FwdIt2, _FwdIt3, _FwdIt4> _Res =
		{	// constructed range object
		_First1, _Last1,
		_First2, _Last2,
		_First3, _Last3,
		_First4, _Last4,
		_Idx
		};
	return (_Res);
	}

		/* TEMPLATE CLASS _Untiled_range */
template<class _FwdIt>
class _Untiled_range
	{	// range that is never subdivided
public:
	typedef _FwdIt _Iter;

	template<class _Diff>
		_Untiled_range(_FwdIt _Next, _Diff _Count, size_t /* _Blocks */)
		: _First(_Next), _Last(_STD next(_Next, _Count))
		{	// construct with iterator and size
		}

	_Untiled_range(_FwdIt _Iter1, _FwdIt _Iter2, size_t /* _Blocks */)
		: _First(_Iter1), _Last(_Iter2)
		{	// construct with iterator pair
		}

	_Single_range<_FwdIt> _Get_tile(size_t _Which) const
		{	// return the range
		return (_Make_single_range(_First, _Last, _Which));
		}

private:
	const _FwdIt _First;
	const _FwdIt _Last;
	};

		/* TEMPLATE CLASS _Tiled_range */
template<class _FwdIt,
	class _Iter_category>
	class _Tiled_range_base
	{	// range with contiguous non-overlapping subranges
public:
	typedef _FwdIt _Iter;

	template<class _Diff>
		_Tiled_range_base(_FwdIt _Next, _Diff _Count, size_t _Blocks_arg)
			: _Blocks(_Blocks_arg),
				_Tiles(_Blocks_arg + 1, _FwdIt())
		{	// construct from iterator, size, and tile count
		_Make_tiles(_Next, _Count);
		}

	_Single_range<_FwdIt> _Get_tile(size_t _Which) const
		{	// return the desired subrange
		if (_Which < _Blocks)
			return (_Make_single_range(
				_Tiles[_Which],
				_Tiles[_Which + 1],
				_Which));
		else
			return (_Make_single_range(
				_Tiles[0],
				_Tiles[0],
				_Blocks));
		}

	_FwdIt _End() const
		{	// return end of range iterator
		return (_Tiles[_Blocks]);
		}

private:
	template<class _Diff>
		void _Make_tiles(_FwdIt _Next, _Diff _Count)
		{	// create subranges
		_Diff _Sz = _Count / _Blocks;
		_Tiles[0] = _Next;
		for (int _Idx = 1; _Idx < _Blocks; ++_Idx)
			_Tiles[_Idx] = _STD next(_Tiles[_Idx - 1], _Sz);
		_Tiles[_Blocks] =
			_STD next(_Tiles[_Blocks - 1], _Count - (_Blocks - 1) * _Sz);
		}

	const size_t _Blocks;
	_Dyn_array<_FwdIt> _Tiles;

	// not implemented:
	_Tiled_range_base(const _Tiled_range_base&);
	_Tiled_range_base& operator=(const _Tiled_range_base&);
	};

template<class _RanIt>
	class _Tiled_range_base<_RanIt, random_access_iterator_tag>
	{	// range with contiguous non-overlapping subranges
public:
	typedef _RanIt _Iter;

	template<class _Diff>
		_Tiled_range_base(_RanIt _Next, _Diff _Count, size_t _Blocks_arg)
			: _First(_Next), _Last(_Next + _Count), _Blocks(_Blocks_arg),
				_Block_size(_Count / _Blocks)
		{	// construct from iterator, size, and tile count
		}

	_Single_range<_RanIt> _Get_tile(size_t _Which) const
		{	// return the desired subrange
		if (_First == _Last || _Blocks <= _Which)
			return (_Make_single_range(_First, _First, _Blocks));
		_RanIt _First1 = _First + _Which * _Block_size;
		_RanIt _Last1 = _Which < _Blocks - 1 ? _First1 + _Block_size : _Last;
		return (_Make_single_range(_First1, _Last1, _Which));
		}

	_RanIt _End() const
		{	// return end of range iterator
		return (_Last);
		}

private:
	const _RanIt _First;
	const _RanIt _Last;
	const size_t _Blocks;
	const size_t _Block_size;
	};

template<class _Iter>
	class _Tiled_range
		: public _Tiled_range_base<_Iter,
			typename iterator_traits<_Iter>::iterator_category>
	{	// range with non-overlapping subranges
public:
	typedef _Tiled_range_base<_Iter,
		typename iterator_traits<_Iter>::iterator_category> _Mybase;

	template<class _Diff>
		_Tiled_range(_Iter _Next, _Diff _Count, size_t _Blocks)
		: _Mybase(_Next, _Count, _Blocks)
		{	// construct from iterator, size, and tile count
		}

	_Tiled_range(_Iter _Next, _Iter _Last, size_t _Blocks)
		: _Mybase(_Next, _STD distance(_Next, _Last), _Blocks)
		{
		}
	};

		/* TEMPLATE CLASS _Overlapping_tiled_range */
template<class _FwdIt,
	class _Iter_category>
	class _Overlapping_tiled_range_base
	{	// range with overlapping subranges
public:
	typedef _FwdIt _Iter;

	template<class _Diff>
		_Overlapping_tiled_range_base(_FwdIt _Next, _Diff _Count,
			size_t _Blocks_arg, int _Ov)
		: _Blocks(_Blocks_arg), _Ovl(_Ov),
			_Tiles(_Blocks_arg + 1, *new _FwdIt[_Blocks_arg + 1])
		{	// construct from iterator, size, tile count, and overlap
		_Make_tiles(_Next, _Count);
		}

	_Single_range<_FwdIt> _Get_tile(size_t _Which) const
		{	// return the desired subrange
		if (_Which < _Blocks)
			return (_Make_single_range(
				_Tiles[_Which],
				_STD next(_Tiles[_Which + 1], _Ovl),
				_Which));
		else
			return (_Make_single_range(
				_Tiles[0],
				_Tiles[0],
				_Blocks));
		}

	_FwdIt _End() const
		{	// return end of range itaretor
		return (_STD next(_Tiles[_Blocks], _Ovl));
		}

private:
	template<class _Diff>
		void _Make_tiles(_FwdIt _Next, _Diff _Count)
		{	// create subranges
		_Diff _Sz = _Count / _Blocks;
		_Tiles[0] = _Next;
		_Tiles[1] = _STD next(_Tiles[0], _Sz - _Ovl);
		_Count -= _Sz - _Ovl;
		for (int _Idx = 2; _Idx < _Blocks; ++_Idx)
			{	// get next iterator
			_Tiles[_Idx] = _STD next(_Tiles[_Idx - 1], _Sz);
			_Count -= _Sz;
			}
		_Tiles[_Blocks] = _STD next(_Tiles[_Blocks - 1], _Count - _Ovl);
		}

	const size_t _Blocks;
	const int _Ovl;
	_Dyn_array<_FwdIt> _Tiles;
	};

template<class _RanIt>
	class _Overlapping_tiled_range_base<_RanIt,
		random_access_iterator_tag>
	{	// range with overlapping subranges
public:
	typedef _RanIt _Iter;

	template<class _Diff>
		_Overlapping_tiled_range_base(_RanIt _Next,
			_Diff _Count, size_t _Blocks_arg, int _Ov)
			: _First(_Next), _Last(_Next + _Count),
				_Ovl(_Ov), _Blocks(_Blocks_arg),
				_Block_size(_Count / _Blocks)
		{	// construct from iterator, size, tile count, and overlap
		}

	_Single_range<_RanIt> _Get_tile(size_t _Which) const
		{	// return the desired subrange
		if (_First == _Last || _Blocks <= _Which)
			return (_Make_single_range(_First, _First, _Blocks));
		_RanIt _First1 = _First + _Which * _Block_size;
		_RanIt _Last1 = _Which < _Blocks - 1 ? _First1 + _Block_size : _Last;
		if (_First1 != _First)
			_First1 -= _Ovl;  // bottom of range overlaps top of previous
		return (_Make_single_range(_First1, _Last1, _Which));
		}

	_RanIt _End() const
		{	// return end of range iterator
		return (_Last);
		}

private:
	const _RanIt _First;
	const _RanIt _Last;
	const int _Ovl;
	const size_t _Blocks;
	const size_t _Block_size;
	};

template<class _Iter>
	class _Overlapping_tiled_range
		: public _Overlapping_tiled_range_base<_Iter,
			typename iterator_traits<_Iter>::iterator_category>
	{	// range with overlapping subranges
public:
	typedef _Overlapping_tiled_range_base<_Iter,
		typename iterator_traits<_Iter>::iterator_category> _Mybase;

	template<class _Diff>
		_Overlapping_tiled_range(_Iter _First,
			_Diff _Count, size_t _Blocks, int _Ov)
			: _Mybase(_First, _Count, _Blocks, _Ov)
		{	// construct from iterator, size, tile count, and overlap
		}

	_Overlapping_tiled_range(_Iter _First, _Iter _Last,
		size_t _Blocks, int _Ov)
		: _Mybase(_First, _STD distance(_First, _Last), _Blocks, _Ov)
		{	// construct from two iterators, tile count, and overlap
		}
	};

		/* TEMPLATE CLASS _Tile_result */
template<class _Ty>
	struct _Tile_result
	{	// holder for result of an algorithm applied to a tile
	_Tile_result(_Ty _Value_arg, unsigned int _Idx)
		: _Value(_Value_arg), _Index(_Idx)
		{	// construct with value and tile index
		}

	_Ty _Value;
	unsigned int _Index;
	};

template<class _Ty>
	struct _Tile_result2
	{	// holder for result of an algorithm applied to two tiles
	_Tile_result2(_Ty _Value_arg, unsigned int _Idx1, unsigned int _Idx2)
		: _Value(_Value_arg), _Index_first(_Idx1), _Index_second(_Idx2)
		{	// construct with value and two tile indices
		}

	_Ty _Value;
	unsigned int _Index_first;
	unsigned int _Index_second;
	};

		// CLASS _Payload_base
template<class _Diff>
	class _Payload_base
	{	// functions for tile management
public:
	_Payload_base(execution::_Parallel_policy& _Exec_arg,
		_Diff _Count_arg)
		: _Exec(_Exec_arg),
			_Ntiles(_Exec._Tile_count() * 100 < _Count_arg
				? _Exec._Tile_count() : 1),
			_Count(_Count_arg),
			_Range_index(0)
		{	// construct with policy and tile count
		}

	template<class _Tile_result_type,
		class _Result_type>
		_Tile_result_type _Maybe_short_circuit(_Tile_result_type _Res,
			_Result_type _No_short, _Tile_result_type _Replacement)
		{	// short circuit evaluation if result has been found
		if (_Res._Value == _No_short)
			_Res = _Replacement;
		else
			_Set_short_circuit();
		return (_Res);
		}

	template<class _Result_type>
		_Result_type _Maybe_short_circuit(_Result_type _Res,
			_Result_type _No_short, _Result_type _Replacement)
		{	// short circuit evaluation if result has been found
		if (_Res == _No_short)
			_Res = _Replacement;
		else
			_Set_short_circuit();
		return (_Res);
		}

	void _Set_short_circuit()
		{	// short circuit evaluation
		_Range_index = _Ntiles;
		}

	void _Got_exception()
		{	// handle exception
		_XSTD terminate();
		}

	int _Next_index() const
		{	// synchronously return index of next tile
		return (_Range_index++);
		}

	bool _Prepare_next_pass()
		{	// return true if there is another pass to be run
		return (false);
		}

	void _Reset_ranges()
		{	// reset range index for next pass
		_Range_index = 0;
		}

	execution::_Parallel_policy _Exec;

protected:
	const int _Ntiles;
	const _Diff _Count;

private:
	mutable atomic<int> _Range_index;
	};

		// TEMPLATE CLASS _Init_value_helper
template<class _Ty>
	struct _Init_value_helper
	{	// initialization helper for most common case
	_Init_value_helper(const _Ty& _Val)
		: _Init_value(_Val)
		{	// initialize with value
		}

	template<class _Range_type>
		_Ty _Initialize_thread(_Range_type&)
		{	// return value, leave range unchaged
		return (_Init_value);
		}
	const _Ty _Init_value;
	};

		// TEMPLATE CLASS _Payload_base_single_range
template<class _Tile>
	class _Payload_base_single_range
		: public _Payload_base<typename iterator_traits<
			typename _Tile::_Iter>::difference_type>
	{	// functions for managing payload with one range
public:
	typedef _Payload_base<typename iterator_traits<
		typename _Tile::_Iter>::difference_type> _Mybase;
	typedef typename _Tile::_Iter _Iter;
	typedef _Single_range<_Iter> _Range_type;

	_Payload_base_single_range(_Iter _First, _Iter _Last, int _Ovl,
		execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _STD distance(_First, _Last)),
			_Range(_First, _Mybase::_Count, _Mybase::_Ntiles, _Ovl)
		{	// construct with two iterators, overlap, and policy
		}

	template<class _Diff>
		_Payload_base_single_range(_Iter _First, _Diff _Count_arg,
			execution::_Parallel_policy& _Exec)
				: _Mybase(_Exec, _Count_arg),
					_Range(_First, _Mybase::_Count, _Mybase::_Ntiles)
		{	// construct with iterator, size, and policy
		}

	_Payload_base_single_range(_Iter _First, _Iter _Last,
		execution::_Parallel_policy& _Exec)
			: _Mybase(_Exec, _STD distance(_First, _Last)),
				_Range(_First, _Mybase::_Count, _Mybase::_Ntiles)
		{	// construct with two iterators and policy
		}

	_Range_type _Get_next_tile() const
		{	// return next tile
		int _Index = _Mybase::_Next_index();
		return (_Range._Get_tile(_Index));
		}

	_Iter _End() const
		{	// return end of output range iterator
		return (_Range._End());
		}

private:
	const _Tile _Range;
	};

		// TEMPLATE CLASS _Payload_base_dual_range
template<class _Tile1,
	class _Tile2>
	class _Payload_base_dual_range
		: public _Payload_base<typename iterator_traits<
			typename _Tile1::_Iter>::difference_type>
	{	// functions for managing payload with two ranges
public:
	typedef _Payload_base<typename iterator_traits<
		typename _Tile1::_Iter>::difference_type> _Mybase;
	typedef typename _Tile1::_Iter _Iter1;
	typedef typename _Tile2::_Iter _Iter2;
	typedef _Dual_range<_Iter1, _Iter2> _Range_type;

	_Payload_base_dual_range(_Iter1 _First1, _Iter1 _Last1,
		_Iter2 _First2, _Iter2 _Last2, int _Ovl,
			execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _STD distance(_First1, _Last1)),
			_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles, _Ovl),
			_Range2(_First2, _Last2, _Mybase::_Ntiles)
		{	// construct with two iterator pairs, overlap, and policy
		}

	_Payload_base_dual_range(_Iter1 _First1, _Iter1 _Last1,
		_Iter2 _First2, int _Ovl,
			execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _STD distance(_First1, _Last1)),
			_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles, _Ovl),
			_Range2(_First2, _Mybase::_Count, _Mybase::_Ntiles, _Ovl)
		{	// construct with iterator pair, iterator, overlap, and policy
		}

	_Payload_base_dual_range(_Iter1 _First1, _Iter1 _Last1,
		_Iter2 _First2, _Iter2 _Last2,
			execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _STD distance(_First1, _Last1)),
			_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles),
			_Range2(_First2, _Last2, _Mybase::_Ntiles)
		{	// construct with two iterator pairs and policy
		}

	template<class _Diff>
		_Payload_base_dual_range(_Iter1 _First1, _Diff _Count_arg,
			_Iter2 _First2,
			execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _Count_arg),
				_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles),
				_Range2(_First2, _Mybase::_Count, _Mybase::_Ntiles)
		{	// construct with iterator, size, iterator, and policy
		}

	_Payload_base_dual_range(_Iter1 _First1, _Iter1 _Last1, _Iter2 _First2,
		execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _STD distance(_First1, _Last1)),
			_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles),
			_Range2(_First2, _Mybase::_Count, _Mybase::_Ntiles)
		{	// construct with iterator pair, iterator, and policy
		}

	_Range_type _Get_next_tile() const
		{	// return next tile
		int _Index = _Mybase::_Next_index();
		_Single_range<_Iter1> _R1 = _Range1._Get_tile(_Index);
		_Single_range<_Iter2> _R2 = _Range2._Get_tile(_Index);
		return (_Make_dual_range(_R1, _R2, _Index));
		}

	_Iter2 _End() const
		{	// return end of output range iterator
		return (_Range2._End());
		}

private:
	const _Tile1 _Range1;
	const _Tile2 _Range2;
	};

		// TEMPLATE CLASS _Payload_base_triple_range
template<class _Tile1,
	class _Tile2,
	class _Tile3>
	class _Payload_base_triple_range
		: public _Payload_base<typename iterator_traits<
			typename _Tile1::_Iter>::difference_type>
	{	// functions for managing payload with three ranges
public:
	typedef _Payload_base<typename iterator_traits<
		typename _Tile1::_Iter>::difference_type> _Mybase;
	typedef typename _Tile1::_Iter _Iter1;
	typedef typename _Tile2::_Iter _Iter2;
	typedef typename _Tile3::_Iter _Iter3;
	typedef _Triple_range<_Iter1, _Iter2, _Iter3> _Range_type;

	template<class _Diff>
		_Payload_base_triple_range(_Iter1 _First1, _Diff _Count_arg,
			_Iter2 _First2, _Iter3 _First3,
				execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _Count_arg),
			_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles),
			_Range2(_First2, _Mybase::_Count, _Mybase::_Ntiles),
			_Range3(_First3, _Mybase::_Count, _Mybase::_Ntiles)
		{	// construct with iterator and size, two iterators, and policy
		}

	_Payload_base_triple_range(_Iter1 _First1, _Iter1 _Last1,
		_Iter2 _First2, _Iter3 _First3,
		execution::_Parallel_policy& _Exec)
		: _Mybase(_Exec, _STD distance(_First1, _Last1)),
			_Range1(_First1, _Mybase::_Count, _Mybase::_Ntiles),
			_Range2(_First2, _Mybase::_Count, _Mybase::_Ntiles),
			_Range3(_First3, _Mybase::_Count, _Mybase::_Ntiles)
		{	// construct with iterator pair, two iterators, and policy
		}

	_Range_type _Get_next_tile() const
		{	// return next tile
		int _Index = _Mybase::_Next_index();
		return (_Make_triple_range(
			_Range1._Get_tile(_Index),
			_Range2._Get_tile(_Index),
			_Range3._Get_tile(_Index),
			_Index));
		}

	_Iter3 _End() const
		{	// return end of output range iterator
		return (_Range3._End());
		}

private:
	const _Tile1 _Range1;
	const _Tile2 _Range2;
	const _Tile3 _Range3;
	};

		// TEMPLATE CLASS _Worker_task_base
template<class _Payl>
	class _Worker_task_base
		: public _Pool_task
	{	// base class for worker tasks
public:
	_Worker_task_base(_Payl& _Py)
		: _Payload(_Py)
		{	// construct with payload object
		}

protected:
	_Payl& _Payload;

private:
	void _Handle_exception() _NOEXCEPT
		{	// handle exception
		_Payload._Got_exception();
		}
	};

		// TEMPLATE CLASS _Worker_task
template<class _Payl>
	class _Worker_task
		: public _Worker_task_base<_Payl>
	{	// worker task
	typedef typename _Payl::_Range_type _Range_type;

public:
	_Worker_task(_Payl& _Py)
		: _Worker_task_base<_Payl>(_Py)
		{	// construct with payload object
		}

	bool _Did_some_work() const
		{	// default always returns true; derived classes can override
		return (true);
		}

private:
	void _Run_task()
		{	// apply algorithm to tiles until done
		_Range_type _Range = this->_Payload._Get_next_tile();
		while (!_Range._Empty())
			{	// do another tile
			this->_Payload._Apply(_Range);
			_Range = this->_Payload._Get_next_tile();
			}
		}
	};

		// TEMPLATE CLASS _Worker_task_with_result
template<class _Payl>
	class _Worker_task_with_result
		: public _Worker_task_base<_Payl>
		{	// worker task that computes result
		typedef typename _Payl::_Tile_result_type _Tile_result_type;
		typedef typename _Payl::_Range_type _Range_type;

	public:
		_Worker_task_with_result(_Payl& _Py)
			: _Worker_task_base<_Payl>(_Py), _Res(_Py._Init_value),
				_First_tile(true)
		{	// construct with payload object
		}

	_Tile_result_type _Get() const
		{	// return computed result
		return (_Res);
		}

	bool _Did_some_work() const
		{	// note work done
		return (!_First_tile);
		}

	void _Reset()
		{	// start over
		_First_tile = true;
		_Res = this->_Payload._Init_value;
		}

private:
	void _Run_task()
		{	// apply algorithm to tiles until done
		_Range_type _Range = this->_Payload._Get_next_tile();
		if (_First_tile && !_Range._Empty())
			{	// do first tile
			_Res = this->_Payload._Initialize_thread(_Range);
			_First_tile = false;
			}
		while (!_Range._Empty())
			{	// do another tile
			_Res = this->_Payload._Apply(_Range, _Res);
			_Range = this->_Payload._Get_next_tile();
			}
		}

	_Tile_result_type _Res;
	bool _First_tile;
	};

		// TEMPLATE CLASS _Master_task
template<class _Payl,
	class _MyWrkr>
	class _Master_task_base
		: public _Pool_master
	{	// base task that manages worker tasks
public:
	_Master_task_base(_Payl& _Py)
		: _Payload(_Py), _Lock(_Get_master_lock()),
			_Ntasks(_Py._Exec._Thread_count()), _Active_tasks(0), _Tasks(0)
		{	// construct with payload object
		_Tasks = reinterpret_cast<_MyWrkr *>(
			new char[_Ntasks * sizeof (_MyWrkr)]);
		for (int _Idx = 0; _Idx < _Ntasks; ++_Idx)
			new (static_cast<void *>(_Tasks + _Idx)) _MyWrkr(_Payload);
		}

	~_Master_task_base() _NOEXCEPT
		{	// destroy allocated resources
		delete _Lock;
		for (int _Idx = 0; _Idx < _Ntasks; ++_Idx)
			(_Tasks + _Idx)->~_MyWrkr();
		delete[] reinterpret_cast<char *>(_Tasks);
		}

	void _Launch()
		{	// start worker tasks for each pass
		do {	// run worker tasks and block until done
			_Payload._Reset_ranges();
			_Lock->_Lock();
			_Active_tasks = _Ntasks;
			for (int _Idx = 0; _Idx < _Ntasks; ++_Idx)
				_Launch_child_task(_Tasks + _Idx);
			while (_Active_tasks != 0)
				_Lock->_Wait();
			_Lock->_Unlock();
			} while (_Payload._Prepare_next_pass());
		}

protected:
	_Payl& _Payload;

private:
	void _Finish_task(_Pool_task *_Tsk)
		{	// handle bookkeeping when a task finishes
		_MyWrkr *_Worker = static_cast<_MyWrkr*>(_Tsk);
		_Lock->_Lock();
		if (_Worker->_Did_some_work())
			_Update_result(_Worker);
		if (--_Active_tasks == 0)
			_Lock->_Notify();
		_Lock->_Unlock();
		}

	virtual void _Update_result(_MyWrkr *)
		{	// nothing to do; overridden in derived class
		}

	_Pool_master_lock *_Lock;
	const int _Ntasks;
	volatile int _Active_tasks;
	_MyWrkr *_Tasks;
	};

template<class _Payl>
	class _Master_task
	: public _Master_task_base<_Payl, _Worker_task<_Payl> >
	{	// master task that does not compute result
	typedef _Worker_task<_Payl> _MyWrkr;
public:
	_Master_task(_Payl& _Py)
		: _Master_task_base<_Payl, _MyWrkr>(_Py)
		{	// construct with payload object
		}

	typename _Payl::_Result_type _Get() const
		{	// return end of output range iterator
		return (this->_Payload._End());
		}
	};

		// TEMPLATE CLASS _Master_task_with_result
template<class _Payl>
	class _Master_task_with_result
		: public _Master_task_base<_Payl, _Worker_task_with_result<_Payl> >
	{	// master task that computes result
	typedef _Worker_task_with_result<_Payl> _MyWrkr;

public:
	_Master_task_with_result(_Payl& _Py)
		: _Master_task_base<_Payl, _MyWrkr>(_Py), _Res(_Py._Init_value)
		{	// construct with payload object
		}

	typename _Payl::_Result_type _Get() const
		{	// return computed result, stripped of internal bookkeeping data
		return (this->_Payload._Get(_Res));
		}

private:
	virtual void _Update_result(_MyWrkr *_Ptr)
		{	// combine result of latest task with previous result
		_Res = this->_Payload._Reduce(_Res, _Ptr->_Get());
		  _Ptr->_Reset();
		}

	typename _Payl::_Tile_result_type _Res;
	};

		// POLICY TEMPLATE FUNCTIONS
template<class _Policy,
	bool>
	struct _Policy_base
	{	// using _Policy is safe
	typedef _Policy _Mypolicy;
	};

template<class _Policy>
	struct _Policy_base<_Policy, true>
	{	// using _Policy is not safe
	typedef execution::sequenced_policy _Mypolicy;
	};

template <class _Iter_cat>
	struct _Is_single_pass
		: _Cat_base<is_same<_Iter_cat, input_iterator_tag>::value
			|| is_same<_Iter_cat, output_iterator_tag>::value>
	{	// truetype if _Iter_cat is single pass iterator
	};

		// TEMPLATE FUNCTION _Get_policy
template<class _Cat,
	class _Policy>
	_Policy _Get_policy(_Cat, _Policy _Exec)
	{	// select policy based on iterator category
	return (typename _Policy_base<_Policy,
		_Is_single_pass<_Cat>::value>::_Mypolicy());
	}

#define _GET_POLICY(_Iter, _Exec) _Get_policy(_Iter_cat(_Iter), _Exec)

		// TEMPLATE FUNCTION _Get_policy2
template<class _Cat1,
	class _Cat2,
	class _Policy>
	_Policy _Get_policy2(_Cat1, _Cat2, _Policy _Exec)
	{	// select policy based on two iterator categories
	return (typename _Policy_base<_Policy,
		_Is_single_pass<_Cat1>::value
		|| _Is_single_pass<_Cat2>::value>::_Mypolicy());
	}

#define _GET_POLICY2(_Iter1, _Iter2, _Exec) \
	_Get_policy2(_Iter_cat(_Iter1), _Iter_cat(_Iter2), _Exec)

		// TEMPLATE FUNCTION _Get_policy3
template<class _Cat1,
	class _Cat2,
	class _Cat3,
	class _Policy>
	_Policy _Get_policy3(_Cat1, _Cat2, _Cat3, _Policy _Exec)
	{	// select policy based on three iterator categories
	return (typename _Policy_base<_Policy,
		_Is_single_pass<_Cat1>::value
		|| _Is_single_pass<_Cat2>::value
		|| _Is_single_pass<_Cat3>::value>::_Mypolicy());
	}

#define _GET_POLICY3(_Iter1, _Iter2, _Iter3, _Exec) \
	_Get_policy3(_Iter_cat(_Iter1), _Iter_cat(_Iter2), _Iter_cat(_Iter3), \
		_Exec)

		// TEMPLATE FUNCTION _Get_policy_bidir
template<class _Cat,
	class _Policy>
	_Policy _Get_policy_bidir(_Cat, _Policy _Exec)
	{	// select policy based on iterator category
	return (typename _Policy_base<_Policy,
		is_same<_Cat, input_iterator_tag>::value
			|| is_same<_Cat, forward_iterator_tag>::value>::_Mypolicy());
	}

#define _GET_POLICY_BIDIR(_Iter, _Exec) \
	_Get_policy_bidir(_Iter_cat(_Iter), _Exec)

		// TEMPLATE FUNCTION _Get_policy_bidir2
template<class _Cat1,
	class _Cat2,
	class _Policy>
	_Policy _Get_policy_bidir2(_Cat1, _Cat2, _Policy _Exec)
	{	// select policy based on iterator categories
	return (typename _Policy_base<_Policy,
		is_same<_Cat1, input_iterator_tag>::value
			|| is_same<_Cat1, forward_iterator_tag>::value
			|| is_same<_Cat2, input_iterator_tag>::value
			|| is_same<_Cat2, forward_iterator_tag>::value>::_Mypolicy());
	}

#define _GET_POLICY_BIDIR2(_Iter1, _Iter2, _Exec) \
	_Get_policy_bidir2(_Iter_cat(_Iter1), _Iter_cat(_Iter2), _Exec)

template<class _Ty>
	_Ty _Lesser(_Ty _Lhs, _Ty _Rhs)
	{	// return min(_Lhs, _Rhs)
	return (_Lhs < _Rhs ? _Lhs : _Rhs);
	}
_STD_END
 #endif /* _HAS_CPP17 */

#endif /* _XPARALLEL_ */

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
 * V8.05/17:1422 */
