#include <iostream>
#include "CQueue.h"

using namespace std;

CQueue::CQueue(int size)
	{
		
		q = new itemType[size];
		rear = 0;
		front = 0;
		length = 0;   //this is how many spaces in the array are filled up
		aSize = size; //this is the size of the array. This number doesn't change
		return;
	}

CQueue::~CQueue()
	{
		for(int i  = 0; i < length; i++)
			{
				Dequeue();
				length--;
//				q[i] = nullptr;
//				delete q[i];
			}
	}
void CQueue::Enqueue(itemType item)//reformat to correct depalma format later
	{cout << "Putting " << item;
		if(length == 0) //for totally empty list (keeps rear at pos 0)
			{
				q[rear] = item;
				//rear++; don't progress rear because it hasn't 
				//moved, only the spot it was on was filled
				length++;
			}
		else if(IsFull())//if list is full
				cout << "Error: Queue Full" << endl;
		else //everything else
			{
				if(rear == aSize)
					rear = 0;//circles to front
				else
					rear++;
				
				q[rear] = item;
				length++;
			}
	}

void CQueue::Dequeue()
	{
		if(IsEmpty())
			cout << "Error: Queue Empty" << endl;
		else if(rear == front)//condition doesn't change front
			{
				q[front] = '\0';
				length--;
			}
		else
			{
				q[front] = '\0';
				if(front == aSize)
					front = 0;
				else
					front++;
				length--;	
			}			 
	}

bool CQueue::IsEmpty() const
	{
		if(length == 0)
			return true;
		else 
			return false;
	
/*		if(q[0] == nullptr)
			return true;
		else
			return false;
*/
	}

bool CQueue::IsFull()
	{
	if(length == aSize)
		return true;
	else 
		return false;
	}
	/*
		if(this[rear] == nullptr)
			return false;
		else
			return true;
	*/
	

itemType CQueue::Peek()
	{
		return q[front];
	}






