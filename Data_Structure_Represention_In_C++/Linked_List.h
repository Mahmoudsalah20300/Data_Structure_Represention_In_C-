#pragma once

#include <iostream>

template<typename T>
class Node {
	
	public:
		T data;
		Node* next;
		Node(T);
};


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



template<typename T>
class Double_Node :public Node<T>
{

public:
	Double_Node* prev;
	Double_Node(T);
};




template<typename T>
class Double_Linked_List {

private:
	Double_Node<T>* Tail;
public:
	Double_Linked_List();
	~Double_Linked_List();
};





template<typename T>
Node<T>::Node(T value) : data(value), next(nullptr)
{

}



template <typename T>
Linked_List<T> ::Linked_List() :head(nullptr)
{

}


template <typename T>
void Linked_List<T> ::Insert_at_begining(T value)
{
	Node<T>* New_Node = new Node<T>(value);
	New_Node->next = head;
	head = New_Node;
}


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


template <typename T>
void Linked_List<T> ::Insert_at_node(T value, T atnode)
{
	Node<T>* New_Node = new Node<T>(value);
	Node<T>* current = head;

	while (current && current->data != atnode)
		current = current->next;

	if (current)
	{
		New_Node->next = current->next;
		current->next = New_Node;
	}
}


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


template<typename T>
void Linked_List<T>::Delete_at_node(int position)
{
	int counter = 1;

	if (!head)
		return;


	Node<T>* current = head;
	Node<T>* temp = head;

	while (!current->next->next)
		counter++;

	if (counter < position)
		return;

	counter = 1;

	while (counter != position - 1)
	{
		counter++;
		current->next = current->next->next;
	}

	temp = current;
	temp = current->next->next->next;

	current->next = current->next->next;
	delete current;
	delete temp;
}


template<typename T>
bool Linked_List<T>::Search_for_the_element(T value)
{
	bool value_founded = false;
	Node<T>* current = head;

	while (!current->next)
	{
		if (current->data == value)
		{
			value_founded = true;
			break;
		}
	}

	return value_founded;
}


template<typename T>
void Linked_List<T>::Display_Elements()
{
	Node<T>* current = head;

	while (!current->next)
		std::cout << current->data << "\t";

}

template<typename T>
void Linked_List<T>::clear()
{
	Node<T> current = head;
	while (!head)
	{
		head = head->next;
		delete current;
		current = head;
	}
	delete current;
}

template <typename T>
Linked_List<T>::~Linked_List()
{
	delete head;
}