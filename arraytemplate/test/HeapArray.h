#ifndef _HEAPARRAY_H_
#define _HEAPARRAY_H_
template
<typename T>
class HeapArray
{
private:
	int m_length;
	T* m_pointer;
	HeapArray(int len);
	HeapArray(const HeapArray<T>& obj);
	bool construct();
public:
	static HeapArray<T>* NewInstance(int length);
	int length();
	bool get(int index,T& value);
	bool set(int index,T value);
	T& operator[](int index);
	T operator[](int index)const;
	HeapArray<T>& self();
	~HeapArray();
};
template
<typename T>
HeapArray<T>::HeapArray(int len)
{
	m_length = len;
}
template
<typename T>
bool HeapArray<T>::construct()
{
	m_pointer = new T[m_length];
	return m_pointer != NULL;
}
#endif
