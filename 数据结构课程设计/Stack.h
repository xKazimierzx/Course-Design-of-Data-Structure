#pragma once
#include <string>
#define N 105
using namespace std;

template<class T>
class __Stack
{
public:
	T data[N];
	int top=0;
	void push(T x);
	void pop();
	int size();
	T Top();
};

template<class T>
inline void __Stack<T>::push(T x)
{
	data[top++] = x;
}

template<class T>
inline void __Stack<T>::pop()
{
	top--;
}

template<class T>
inline int __Stack<T>::size()
{
	return top;
}

template<class T>
inline T __Stack<T>::Top()
{
	return data[top - 1];
}
