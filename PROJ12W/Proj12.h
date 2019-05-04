#ifndef PROJ12_H
#define PROJ12_H


#include "queue2.h"

class PQueue : public Queue2
{
 public:
  PQueue();
	~PQueue();

	void EnqueuePty(itemType item);
	void DeQueue();
	void EnQueue(itemType item);
	itemType peek ();
			
	private:
		node* head;
		node* tail;
		int length;
};
#endif


