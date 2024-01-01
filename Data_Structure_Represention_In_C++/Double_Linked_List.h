#pragma once

#include"Linked_List.h"

/**************** Double Linked List Declaration *********************/

template<typename T>
class Double_Node :public Node<T>
{
public:
	Double_Node* prev;
	Double_Node(T value) : Node<T>(value), prev(nullptr) {}
};




template<typename T>
class Double_Linked_List :public Linked_List<T> {
	
	private:
		using Double_Node = Double_Node<T>;
		Double_Node* head;

	public:
		Double_Linked_List();
		~Double_Linked_List();


		void Insert_at_begining(T);
		void Insert_in_End(T);
		void Insert_at_node(T value,T atnode);
		void Delete_at_begin();
		void Delete_in_End();
		void Delete_at_node(int);
		void Display_Elements() override;
		void clear() override;
};


/****************************** Implementation of Classes **********************************/




template<typename T>
Double_Linked_List<T>::Double_Linked_List(): Linked_List<T>() {}

template<typename T>
Double_Linked_List<T>::~Double_Linked_List() {}


template<typename T>
void Double_Linked_List<T>::Insert_at_begining(T value) {
	
	Double_Node* New_Node = new Double_Node(value);
	New_Node->next = head;
	New_Node->prev = nullptr;

	if (this->head) {
		this->head->prev = New_Node;
	}
	this->head = New_Node;
	
}


template<typename T>
void Double_Linked_List<T>::Display_Elements(){

	Double_Node* Current = head;

	while (Current)
	{
		std::cout << Current->data << "\t";
		Current = static_cast<Double_Node*>(Current->next);
	}
}


template<typename T>
void Double_Linked_List<T>:: clear() {
	
	Double_Node* Current = head;

	while (head)
	{
		head = static_cast<Double_Node*>(head->next);
		delete Current;
		Current = head;
	}
	delete Current;
	std::cout << "\nDouble_Linked_List was deleted\n";
}