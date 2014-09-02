template<typename T>
class SharedPtr
{
private:
	T *ptr;
	int *_count;

public:
	SharedPtr(T* t)
	{			
		_count = new int(1);
		ptr = t;
	}

	SharedPtr(const SharedPtr& pointer)
	{
		ptr = pointer.ptr;
		_count = pointer._count;
		(*_count)++;
	}

	SharedPtr& operator=(const SharedPtr& pointer)
	{
		if(this != &pointer)
		{
			(*_count)--;
			if((*_count) == 0)
			{
				delete ptr;
				delete _count;
			}

			ptr = pointer.ptr;
			_count = pointer._count;
			(*_count)++;
		}
		return *this;
	}

	template<typename T, typename U>
	SharedPtr<T>& operator==(const SharedPtr<U>& ptr)
	{
		if (this.(*ptr) == ptr.(*ptr))
		{
			return true;
		} 
		else
		{
			return false;
		}
	}

	SharedPtr& operator!=(const SharedPtr& ptr)
	{

	}

	SharedPtr& operator<(const SharedPtr& ptr)
	{

	}

	~SharedPtr()
	{
		(*_count)--;
		if((*_count) == 0)
		{
			delete ptr;
			delete _count;
		}
	}

	T& operator*()
	{
		return *ptr;
	}

	T* operator->()
	{
		return ptr;
	}

	int count()
	{
		return *_count;
	}
};
