#pragma once
#include<iostream>
using namespace std;

template<class T1, class T2>
class Pair {
	T1 a;
	T2 b;
public:
	Pair(T1 _a, T2 _b);
	void init(T1 _a, T2 _b);
	void show();

	void copyFrom(const Pair<T1, T2>& other);
	void clear();

	T1 getFirst()const;
	T2 getSecond()const;
};

template<class T1, class T2>
Pair<T1, T2>::Pair(T1 _a, T2 _b)
{
	a = _a;
	b = _b;
}

template<class T1, class T2>
void Pair<T1, T2>::init(T1 _a, T2 _b)
{
	a = _a;
	b = _b;
}

template<class T1, class T2>
void Pair<T1, T2>::show()
{
	cout << "First: " << a << "\tSecond: " << b << endl;
}

template<class T1, class T2>
void Pair<T1, T2>::copyFrom(const Pair<T1, T2>& other)
{
	a = other.getFirst();
	b = other.getSecond();
}

template<class T1, class T2>
void Pair<T1, T2>::clear()
{
	a = 0;
	b = 0;
}

template<class T1, class T2>
T1 Pair<T1, T2>::getFirst()const
{
	return a;
}

template<class T1, class T2>
T2 Pair<T1, T2>::getSecond()const
{
	return b;
}
