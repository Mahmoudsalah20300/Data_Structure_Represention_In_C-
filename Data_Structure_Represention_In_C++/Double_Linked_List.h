#pragma once

#include"Linked_List.h"

/**************************************** Double Linked List Declaration *********************************************/

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


