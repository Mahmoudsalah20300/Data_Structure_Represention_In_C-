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
class Double_Node:public Node<T>
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


