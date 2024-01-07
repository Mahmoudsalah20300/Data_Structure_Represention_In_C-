#include"Linked_List_testing.h"
#include"Double_Linked_List.h"
#include"Stack_Testing.h"
#include"Queue.h"


int main()
{
	Queue<int> Mahmoud;
	Mahmoud.Get_Queue_Size(5);
	Mahmoud.EnQueue(10);
	//Mahmoud.Display_Elements();
	Mahmoud.EnQueue(15);
	//Mahmoud.Display_Elements();
	Mahmoud.EnQueue(16);
	//Mahmoud.Display_Elements();
	Mahmoud.EnQueue(17);
	//Mahmoud.Display_Elements();
	Mahmoud.EnQueue(18);
	//Mahmoud.Display_Elements();
	Mahmoud.EnQueue(19);
	//Mahmoud.Display_Elements();
	Mahmoud.EnQueue(-19);
	Mahmoud.Display_Elements();
	//std::cout << Place_Taken << "\t";
	std::cout << "\n";
	std::cout << Mahmoud.IsEmpty();
	std::cout << "\n";
	std::cout << Mahmoud.IsFull();


}