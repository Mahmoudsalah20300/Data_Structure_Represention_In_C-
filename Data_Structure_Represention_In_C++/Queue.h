#pragma once


#include"Linked_List.h"

static int Place_Taken = 0;

template<typename T>
class Queue {
	private:
		using New_Node = Node<T>;
		Node* head;
		T* tail;
		int SIZE = 0;
	public:
		Queue();
		~Queue();
		
		void EnQueue(T);
		void Get_Queue_Size(int);
		void DeQueue(T);
		bool IsEmpty();
		bool IsFull();
		void Display_Elements();
		T Peek();
};


template<typename T>
Queue<T>::Queue() :head(nullptr), tail(nullptr) {}


template<typename T>
Queue<T>::~Queue() {
	delete head;
	delete tail;
}

template<typename T>
void Queue<T>::Get_Queue_Size(int value)
{
	SIZE = value;
}

/* Need Modification*/
template<typename T>
void Queue<T>::EnQueue(T value)
{	
	New_Node* turn = new New_Node(value);
	New_Node* Current = head;

	if (Place_Taken != SIZE) {
		if (head)
		{
			turn->next = head;
			head = turn;
		}
		else
		{
			head = turn;
		}
		++Place_Taken;
	}
	else
	{
		while (Current)
		{
			Current = Current->next;
		}
	}
}