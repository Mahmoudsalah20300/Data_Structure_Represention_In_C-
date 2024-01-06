#pragma once


#include"Linked_List.h"

static int Places_Taken = 0;

template <typename T>
class Stack{

	protected:
		using New_Node = Node<T>;
		New_Node* Base;
		int SIZE=0;
	public:
		Stack();
		~Stack();
		
		void Push(T value);
		void Pop();
		void Set_Stack_Size(int);
		void Number_of_empty_Places();
		bool IsEmpty();
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
	delete Base;
}



template<typename T>
void Stack<T>::Set_Stack_Size(int size)
{
	SIZE = size;
}


template <typename T>
void Stack<T>::Push(T value)
{
	if (SIZE == 0)
	{
		std::cout << "The Stack Size can not be 0 \n Consider the following:\n\t1-You Must Set the stack Size\n\t2-You can not set size = 0\n";
		return;
	}
	
	New_Node* Strip = new New_Node(value);
	if (Base)
	{	
		Strip->next = Base;
		Base = Strip;
	}
	else {
		Base = Strip;
	}
	++Places_Taken;
}


template<typename T>
void Stack<T>::Number_of_empty_Places(){
	
	std::cout << "\nNumebre of empty Places in Stack: " << SIZE - Places_Taken <<"\n";
}


template<typename T>
void Stack<T>::Display_Contents()
{
	if (SIZE == 0)
	{
		std::cout << "There Is no elements in Current Stack\n";
		return;
	}

	New_Node* Current = Base;
	while (Current)
	{
		std::cout << Current->data << "\n";
		Current = Current->next;
	}
	Current = nullptr;
	delete Current;
}



template<typename T>
void Stack<T>::Pop()
{
	if (SIZE == 0)
	{
		std::cout << "\nYou Can not Pop any thing from empty Stack";
		return;
	}
	
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

	--Places_Taken;
	Current = nullptr;
	delete Current;
}



template<typename T>
void Stack<T>::ClearStack()
{
	if (SIZE == 0)
	{
		std::cout << "\nThe Stack is Already Empty\n";
		return;
	}

	New_Node* Current = Base;
	while (Current)
	{
		Base = Base->next;
		delete Current;
		Current = Base;
	}
	Current = nullptr;
	delete Current;
}


template<typename T>
bool Stack<T>::IsEmpty()
{
	std::cout << "\nEmpty = 1, Not Empty = 0 \n";
	if (!Base)
	{
		return true;
	}
	else
	{
		return false;
	}

}