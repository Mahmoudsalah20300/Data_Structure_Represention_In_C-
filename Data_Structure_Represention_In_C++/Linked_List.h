#pragma once

/*
   Conclusions: 
   1- In this template Class Both Declaration and Definition Must be in the Same file.
   2- Seperating defination (in .cpp file) away form Declaration will Cause a linking Error
	  This Because that it is user defined class so at the compilation the defintion size is
	  Located and theofor Both Definetion and Declatration must be in the same File.
*/



#include <iostream>
		/*************************************** Declaration of templates ****************************************/




/*This is the template for Node*/
template<typename T>
class Node {
	
	public:
		T data;
		Node* next;
		Node(T);
};


/*This is the template for Linked List with the avaliable function of Linke List*/
template<typename T>
class Linked_List {

	private:
		Node<T>* head;
	public:
		Linked_List();
		void Insert_at_begining(T);
		void Insert_in_End(T);
		void Insert_at_node(T,T);
		void Delete_at_begining();
		void Delete_in_End();
		void Delete_at_node(int);
		bool Search_for_the_element(T);
		void Display_Elements();
		void clear();
		~Linked_List();

};

		/****************************************   Deginetion of the Class   *******************************************/

/*Constructor of the Node template Class*/
template<typename T>
Node<T>::Node(T value) : data(value), next(nullptr)
{

}

/*This is the Constructor of Linked List Initialization*/

template <typename T>
Linked_List<T> ::Linked_List() :head(nullptr)
{

}


/*************************************************************************************
	This Class is used to add an element at the Beginning of the list
**************************************************************************************/

template <typename T>
void Linked_List<T> ::Insert_at_begining(T value)
{
	Node<T>* New_Node = new Node<T>(value);
	New_Node->next = head;
	head = New_Node;
	
}

/*************************************************************************************
	This Class is used to add an element at the End of the list
**************************************************************************************/

template <typename T>
void Linked_List<T> ::Insert_in_End(T value)
{
	Node<T>* New_Node = new Node<T>(value);

	if (!head)
	{
		head = New_Node;
	}
	else {
		Node<T>* current = head;
		while (current->next) {
			current = current->next;
		}
		current->next = New_Node;
	}
}

/*************************************************************************************
	This Class is used to add an element at the Certain node in the list
**************************************************************************************/

template <typename T>
void Linked_List<T> ::Insert_at_node(T value, T atnode)
{
	Node<T>* New_Node = new Node<T>(value);
	New_Node->data = value;

	T position = 1;
	if (position == atnode)
	{
		New_Node->next = head;
		head = New_Node;
	}
	else {
		
		
		Node<T>* current = head;
		while (position != atnode - 1) {
			position++;
			current = current->next;
		}

		if (current)
		{
			New_Node->next = current->next;
			current->next = New_Node;
		}
		else {
			std::cout << "\nCheck your List Nodes!" << std::endl;
		}
	}
}

/*************************************************************************************
	This Class is used to delete an element at the beginning of the list
**************************************************************************************/
template <typename T>
void Linked_List<T> ::Delete_at_begining()
{
	if (head)
	{
		Node<T>* temp = head;
		head = head->next;
		delete temp;
	}
}



/*************************************************************************************
	This Class is used to delete an element at the End of the list
**************************************************************************************/


template <typename T>
void Linked_List<T> ::Delete_in_End()
{
	if (!head)
	{
		return;
	}

	if (!head->next)
	{
		delete head;
		head = nullptr;
	}
	else {
		Node<T>* current = head;
		while (current->next->next)
		{
			current = current->next;
		}

		delete current->next;
		current->next = nullptr;
	}
}

/*************************************************************************************
	This Class is used to delete an element at certain node of the list
**************************************************************************************/

template<typename T>
void Linked_List<T>::Delete_at_node(int position)
{
	int counter = 1;

	if (!head)
		return;


	Node<T>* current = head;
	Node<T>* temp    = nullptr;

	if(position == counter)
	{
		temp = head;
		head = head->next;
	}
	else {
		while (current) {
			counter++;
			current = current->next;
		}

		if (counter < position)
			return;

		counter = 1;
		current = head;

		while (counter != position - 1)
		{
			counter++;
			current = current->next;
		}


		temp = current->next;
		current->next = temp->next;
	}
	delete temp;

}


/*************************************************************************************
	This Class is used to Search an element In the list
**************************************************************************************/


template<typename T>
bool Linked_List<T>::Search_for_the_element(T value)
{
	bool value_founded = false;
	Node<T>* current = head;

	while (current)
	{
		if (current->data == value)
		{
			return true;
		}
		current = current -> next;
	}
	return false;
}

/*************************************************************************************
	This Class is used to Display  elements  of the list
**************************************************************************************/

template<typename T>
void Linked_List<T>::Display_Elements()
{
	Node<T>* current = head;

	while (current) {
		std::cout << current->data << "\t";
		current = current->next;
	}
}

/*************************************************************************************
	This Class is used to delete an element at the End of the list
**************************************************************************************/

template<typename T>
void Linked_List<T>::clear()
{
	Node<T>* current = head;
	while (head)
	{
		head = head->next;
		delete current;
		current = head;
	}
	delete current;
}

/*************************************************************************************
	This Class is used to Destruct the list
**************************************************************************************/

template <typename T>
Linked_List<T>::~Linked_List()
{
	delete head;
}

   
