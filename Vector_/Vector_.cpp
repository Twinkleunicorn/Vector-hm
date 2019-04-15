#include "Vector_.h"



Vector_::Vector_()
{
	size = 0;
	arr = nullptr;
}

Vector_::Vector_(int size, int vall)
{
	this->size = size;
	this->arr = new int[this->size];

	for (int i = 0; i < size; i++)
		this->arr[i] = vall;
}

void Vector_::push_back(int n)
{
	if (this->size == 0)
	{
		this->size = 1;
		this->arr = new int[1];
		this->arr[0] = n;
		return;
	}
	int *tmp = new int[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		tmp[i] = this->arr[i];
	}
	tmp[this->size] = n;
	delete[]this->arr;
	this->arr = tmp;
	this->size++;
}

void Vector_::print()
{
	for (size_t i = 0; i < this->size; i++)
	{
		cout << this->arr[i] << " ";
	}
}

void Vector_::pop_back()
{
	if (this->size == 0) {
		cout << "\n";
		return;
	}
	int *tmp = new int[this->size - 1];
	for (size_t i = 0; i < this->size - 1; i++)
	{
		tmp[i] = this->arr[i];
	}
	delete[]this->arr;
	this->arr = tmp;
	this->size--;
}

void Vector_::erase(int pos)
{
	if (this->size == 0) {
		cout << "\n";
		return;
	}
	else {
		int *tmp = new int[this->size - 1];
		int k = 0;
		for (size_t i = 0; i < this->size; i++)
		{
			if (i != pos) {
				tmp[k] = this->arr[i];
				k++;
			}
		}
		delete[]this->arr;
		this->arr = tmp;
		this->size--;
	}
}

void Vector_::clear()
{
	if (this->arr!= 0)
	{
		delete[]this->arr;
		this->size = 0;
	}
}

int Vector_::get_Size()
{
	return size;
}

bool Vector_::empty()
{
	if (this->arr!= nullptr)
	{
		return false;
	}
}

int Vector_::get_Element(int pos)
{
	if (this->size == 0)
	{
		cout << "\n";
		return];
	}
	return arr[pos];
}

Vector_::Vector_(const Vector_ & obj)
{
	this->size = obj.size;
	if (size == 0)
		arr = nullptr;
	else
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
			this->arr[i] = obj.arr[i];
	}
}

Vector_ Vector_::operator=(const Vector_ & obj)
{
	if (this == &obj)
	{
		return *this;
	}
	this->clear();
	if (obj.arr != nullptr)
	{
		this->arr = new int[this->size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}

	}
	return *this;
}


Vector_::~Vector_()
{
	if(arr != nullptr)
	{
		delete[]this->arr;
		this->size = 0;
	}
}
