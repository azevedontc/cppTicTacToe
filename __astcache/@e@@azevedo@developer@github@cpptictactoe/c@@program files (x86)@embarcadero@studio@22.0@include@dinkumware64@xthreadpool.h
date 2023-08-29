// xthreadpool internal header
#ifndef _XTHREADPOOL_
#define _XTHREADPOOL_
#include <yvals.h>

 #if _HAS_CPP17
#define _INCLUDE_POOL_STATISTICS	1

_STD_BEGIN
class _Pool_master;
class _Pool_worker;

		// CLASS _Pool_task
class _Pool_task
	{	// manages a pool
	friend class _Pool_worker;
	friend class _Pool_master;
public:
	_Pool_task();
	virtual ~_Pool_task() _NOEXCEPT;
	void _Run();

private:
	// Interface for derived classes
	virtual void _Run_task() = 0;
	virtual void _Handle_exception() _NOEXCEPT = 0;
	_Pool_worker *_Wrkr;

protected:
	_Pool_master *_Parent;
	};

		// ABSTRACT CLASS _Pool_master_lock
class _Pool_master_lock
	{	// manages a master lock
public:
	virtual ~_Pool_master_lock() _NOEXCEPT {}
	virtual void _Lock() = 0;
	virtual void _Unlock() = 0;
	virtual void _Wait() = 0;
	virtual void _Notify() = 0;
	};

_Pool_master_lock *_Get_master_lock();

		// CLASS _Pool_master
class _Pool_master
	{	// manages tasks for a pool
public:
	void _Finish(_Pool_task *_Tsk);

protected:
	void _Launch_child_task(_Pool_task *_Tsk);

private:
	/* Interface for derived classes */
	virtual void _Finish_task(_Pool_task *_Tsk) = 0;
	};

int _Get_thread_pool_size();

 #if _INCLUDE_POOL_STATISTICS
void _Show_and_clear_counters();
int _Get_task_count_and_clear_counters();
 #endif  /* _INCLUDE_POOL_STATISTICS */
_STD_END
 #endif /* _HAS_CPP17 */

#endif /* _XTHREADPOOL_ */

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
 * V8.05/17:1422 */
