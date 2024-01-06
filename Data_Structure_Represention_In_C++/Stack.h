#pragma once


#include"Linked_List.h"


template <typename T>
class Stack{

	private:
		using New_Node = Node<T>;
		New_Node* Base;
		
	public:
		Stack();
		~Stack();
		
		void Push(T value);
		void Pop();
		bool IsEmpty();
		bool IsFull();
		void ClearStack();
		void Display_Contents();
};


		/*************************************** Implementation *********************************************/

template <typename T>
Stack<T>::Stack(): Base(nullptr)
{
	
}

template<typename T>
Stack<T>::~Stack()
{

}



template <typename T>
void Stack<T>::Push(T value)
{
	New_Node* Strip = new New_Node(value);

	if (Base)
	{	
		Strip->next = Base;
		Base = Strip;
	}
	else {
		Base = Strip;
	}
}


template<typename T>
void Stack<T>::Display_Contents()
{
	New_Node* Current = Base;

	while (Current)
	{
		std::cout << Current->data << "\n";
		Current = Current->next;
	}
}



template<typename T>
void Stack<T>::Pop()
{
	New_Node* Current = Base;
	if (Base)
	{
		Base = Base->next;
		delete Current;
	}
	else
	{
		std::cout << "Nothing there to pop\n";
	}

}



template<typename T>
void Stack<T>::ClearStack()
{
	New_Node* Current = Base;
	while (Current->next)
	{
		Base = Base->next;
		delete Current;
		Current = Base;
	}
}