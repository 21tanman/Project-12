#include "CQueue.h"
#include <iostream>

using namespace std;

int main()
	{
		CQueue C(5);

		if(C.IsEmpty())
			cout << "empty\n";
		else
			cout << "not empty\n";

		for(int i = 0; i < 6; i++)
		C.Enqueue(i);

		if(C.IsFull())
			cout << "full\n";
		cout << "Peek" << C.Peek() << endl;

		C.Dequeue();
		
		cout << "peek2: " << C.Peek() << endl;

	return 0;
	}
