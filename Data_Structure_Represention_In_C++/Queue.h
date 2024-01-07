#pragma once


#include"Linked_List.h"

int Place_Taken = 1;

template<typename T>
class Queue {
	private:
		using New_Node = Node<T>;
		New_Node* head;
		New_Node* tail;
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



template<typename T>
void Queue<T>::EnQueue(T value)
{	
	if (SIZE > 0  ) {
		New_Node* turn = new New_Node(value);
		New_Node* Current = head;

		if (Place_Taken <= SIZE) {
			++Place_Taken;
			if (head)
			{
				turn->next = head;
				head = turn;
			}
			else
			{
				head = turn;
			}
			
			std::cout << "\nI am in 65 and Places is " << Place_Taken;
		}
		else
		{
			
			while (Current->next->next)
			{	
				
				Current = Current->next;
				
			}
			
			tail = Current;
			turn->next = head;
			head = turn;
			Current = Current->next;
			delete Current;
			tail->next = nullptr;

		}
		
		Current = nullptr;
		delete Current;

	}
	else{
		std::cout << "\nError: The Size of the Queue Must be bigger than 0\n";
	}
}

template<typename T>
void Queue<T>::Display_Elements() {
	
	New_Node* Current = head;
	std::cout << "\nThe Current Elments in Queue:\n";
	while (Current)
	{
		std::cout << Current->data <<"\t";
		Current = Current->next;
	}
	Current = nullptr;
	delete Current;
}
