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
		void Search_for_the_element(T);
		void Display_Elements();
		void clear();
		~Linked_List();

};







