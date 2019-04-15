#pragma once
#include<iostream>
using namespace std;
class Vector_
{
	int size;
	int *arr;
public:
	Vector_();
	Vector_(int size, int vall);
	
	void push_back(int n);
	void print();
	void pop_back();
	void erase(int pos);
	void clear();
	int get_Size();
	bool empty();
	int get_Element(int pos);
	Vector_(const Vector_ &obj);
	Vector_ operator=(const Vector_& obj);
	~Vector_();
};

