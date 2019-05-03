#include <iostream>
#include "proj12.h"

using namespace std;

void CQueue::CQueue(int size)
	{
		
		q = new itemType[size];
		rear = size - 1;
		front = 0;
		length = size;
		return;
	}

void CQueue::~CQueue
	{
		for(int i  = 0 i < length; < endl;)
			{
				q[i] = nullptr;
				delete q[i];
			}

bool IsEmpty() const
	{
		if(q[0] == nullptr)
			return true;
		else
			return false;
	}

bool IsFull()
	{
		if(this[rear] == nullptr)
			return false;
		else
			return true;
	}






