#ifndef CQUEUE_H
#define CQUEUE_H
#include <iostream>
#include <cstring>

using namespace std;

typedef int itemType;

 struct node
	{
		itemType item;
		node* next;
	};

class CQueue
{
 public:
	CQueue(int size);

	~CQueue();

bool IsEmpty() const;

bool IsFull();

itemType Peek();

void Enqueue (itemType item);

void Dequeue();

private:
	itemType* q; 	//the queue implemented as an array
	int front;// index of the next item to be dequed
	int rear;	//index of last item enqueued
	int length;
}
#endif
	


