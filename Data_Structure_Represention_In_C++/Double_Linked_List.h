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


		void Insert_at_begining(T) override;
		void Insert_in_End(T) override;
		void Insert_at_node(T ,T ) override;
		void Delete_at_begining() override;
		void Delete_in_End() override;
		void Delete_at_node(int) ;
		bool Search_for_the_element(T) override;
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
void Double_Linked_List<T> ::Insert_at_node(T value,T atnode)
{
	Double_Node* New_Node = new Double_Node(value);
	T number_of_nodes = 0;
	T position = 1;

	Double_Node* Current = head;
	Double_Node* Current_minus_1 = head;
	Double_Node* Current_Plus_1 = static_cast<Double_Node*>(head->next);

	while (Current)
	{
		number_of_nodes++;
		Current = static_cast<Double_Node*> (Current->next);
	}
	
	if (atnode < 1 || atnode  > number_of_nodes+1)
	{
		std::cout << "Please Node MUst be a valid Number between "<<1<<" and "<<number_of_nodes;
	}
	else{
		if (position == atnode)
		{
			New_Node->next = head;
			head = New_Node;
		}
		else if(atnode == number_of_nodes + 1){
			Current = head;
			while (position != atnode-1)
			{
				Current = static_cast<Double_Node*>(Current->next);
				position++;

				if (position != 2)
				{
					Current_minus_1 = static_cast<Double_Node*>(Current_minus_1->next);
				}
			}
			Current->next = New_Node;
			New_Node->next = nullptr;
			New_Node->prev = Current;
		}
		else if (atnode == number_of_nodes)
		{
			Current = head;
			while (position != atnode)
			{
				Current = static_cast<Double_Node*>(Current->next);
				position++;

				if (position != 2)
				{
					Current_minus_1 = static_cast<Double_Node*>(Current_minus_1->next);
				}
			}
			New_Node->next = Current;
			New_Node->prev = Current_minus_1;
			Current->prev = New_Node;
			Current_minus_1->next = New_Node;
		}
		else
		{
			Current = head;

			while (position != atnode)
			{
				Current = static_cast<Double_Node*>(Current->next);
				Current_Plus_1 = static_cast<Double_Node*>(Current_Plus_1->next);
				position++;

				if (position != 2)
				{
					Current_minus_1 = static_cast<Double_Node*>(Current_minus_1->next);
				}
			}

			if (Current)
			{
				New_Node->next = Current;
				New_Node->prev = Current_minus_1;
				Current_minus_1->next = New_Node;
				Current_Plus_1->prev = New_Node;
			}
			else {
				std::cout << "\nCkeck you List Nodes!" << std::endl;
			}
		}
	}
	Current = nullptr;
	Current_minus_1 = nullptr;
	Current_Plus_1 = nullptr;
	delete Current;
	delete Current_minus_1;
	delete Current_Plus_1;
}

template<typename T>
void Double_Linked_List<T>::Insert_in_End(T value)
{
	Double_Node* New_Node = new Double_Node(value);
	Double_Node* current = head;
	
	if (!head)
	{
		New_Node->prev = nullptr;
		head = New_Node;
		return;
	}
	
	while (current->next)
	{
		current =static_cast<Double_Node*> (current->next);
	}
	
	current->next = New_Node;
	New_Node->next = nullptr;
	New_Node->prev = current;
}



template<typename T>
void Double_Linked_List<T>::Delete_at_begining() {
	
	if (!head) { return; }
		
		Double_Node* Current = head;
		head = static_cast<Double_Node*>(head->next);
		delete Current;
		
}


template<typename T>
void Double_Linked_List<T>::Delete_in_End() {
	
	if (!head) { return; }

	if (!head->next) {
		delete head;
		head = nullptr;
	}
	else {
		Double_Node* Current = head;
		while (Current->next->next)
		{
			Current = static_cast<Double_Node*>(Current->next);
		}
		delete Current->next;
		Current->next = nullptr;
	}
}

/*This Code need to be modified again to be Debuged*/
template<typename T>
void Double_Linked_List<T>::Delete_at_node(int node_number)
{
	Double_Node* Current = head;
	int local_node_num = 0;
	if (head)
	{
		while (Current->next)
		{
			local_node_num++;
			Current = static_cast<Double_Node*> (Current->next);
			std::cout <<"\n" << local_node_num << "\t";
			std::cout << Current->data;
		}
		
		if (node_number == 1)
		{
			Current = head;
			head = static_cast<Double_Node*>(head->next);
			delete Current;
		}
		else if(node_number == local_node_num )
		{
			Current = head;
			while (Current->next)
			{
				Current = static_cast<Double_Node*>(Current->next);
			}
			delete Current->next;
			Current->next = nullptr;
		}
		else{
			local_node_num = 1;
			Current = head;
			while (local_node_num != node_number)
			{
				Current = static_cast<Double_Node*>(Current->next);
				local_node_num++;
			}
			/*There is still code here to be Completed*/
		}
	}
	else
	{
		std::cout << "\nThe Current List is Empty.";
	}

	Current = nullptr;
	delete Current;
}





template<typename T>
bool Double_Linked_List<T>::Search_for_the_element(T value)
{
	if (!head) { return false; }

	Double_Node* Current = head;
	while (Current)
	{
		if (Current->data == value)
			return true;
		Current = static_cast<Double_Node*> (Current->next);

	}
	return false;
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
}



