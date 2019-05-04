#include "Proj12.h"
#include <iostream>

using namespace std;

int main()
	{
		PQueue* P = new PQueue;
cout << "declrared" << endl;
		for(int i = 5 ; i < 10; i++)
			P->EnqueuePty(i);

//	cout << "Peek: " <<	P->peek() << endl;

//	P->Dequeue();

cout << "Peek2:" << P->peek();

P->EnqueuePty(7);
for(int i = 5; i <11; i++)
	{
		cout << "Peek" << i << ": " << P->peek();
		P->Dequeue();
	}

return 0;
}
