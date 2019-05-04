#include <iostream>
#include <cstdlib>
#include "Proj12.h"

using namespace std;


PQueue::PQueue() : Queue2()
		{}

void PQueue::EnqueuePty(itemType item)
	{//node* plug = new node;
		int cur;
		node* plug = new node;
		if	(peek()=='\0')
			{
				EnQueue(item);
				return;
			}
		itemType first = peek();
			cout << "Enqueue" << endl;
		
		while(peek() < item)
			{ 
				cur = peek();
				DeQueue();
				EnQueue(cur);
			}
			EnQueue(item);
		while(peek()!=first)
			{ 
				cur = peek();
				DeQueue();
				EnQueue(cur);
			}

		/*cur->next = head;
		while(cur!=tail)
			if(item > cur->next->item)
				cur = cur->next;
			else
				{
					
					plug -> item = item;
					plug->next = cur->next;
					cur->next = plug;
					length++;
				}
*/

		return;
		}

itemType PQueue:: peek()
	{
		Peek();
	}

void PQueue:: DeQueue()
	{
		Dequeue();
	}

void PQueue::EnQueue(itemType item)
	{
		Enqueue(item);
	}
			
			
			

