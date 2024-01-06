#include"Linked_List_testing.h"
#include"Double_Linked_List.h"
#include"Stack.h"

int main()
{
	Stack<int> Mahmoud;
	Mahmoud.Push(15);
	Mahmoud.Push(16);
	Mahmoud.Push(32);
	Mahmoud.Push(15);
	Mahmoud.Push(20);
	Mahmoud.Display_Contents();
	printf("\n");
	Mahmoud.ClearStack();
	printf("\nContents Cleared");
	Mahmoud.Display_Contents();
}