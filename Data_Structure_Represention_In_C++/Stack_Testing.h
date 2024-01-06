#pragma once

#include"Stack.h"


void Stack_testing()
{
	std::cout << "\n===================== Creating Stack ===================== \n";
	Stack<int> Mahmoud;
	std::cout << "\n===================== Tesing Push() ===================== \n";
	Mahmoud.Push(15);
	Mahmoud.Push(16);
	Mahmoud.Push(32);
	Mahmoud.Push(15);
	Mahmoud.Push(20);
	std::cout << "\n===================== Tesing Dispaly_Contents ===================== \n";
	Mahmoud.Display_Contents();
	std::cout << "\n===================== Adding Elemeents again ===================== \n";
	Mahmoud.Push(15);
	Mahmoud.Push(16);
	Mahmoud.Push(32);
	Mahmoud.Push(15);
	std::cout << "\n===================== Testing ClearStack() ===================== \n";
	Mahmoud.ClearStack();
	printf("\nContents Cleared\n");
	Mahmoud.Display_Contents();
	std::cout << "\n===================== Testing IsEmpty ===================== \n";
	std::cout << Mahmoud.IsEmpty();
	std::cout << "\n===================== Adding Elemeents again ===================== \n";
	Mahmoud.Push(15);
	Mahmoud.Push(16);
	std::cout << "\n===================== Testing IsEmpty ===================== \n";
	std::cout << Mahmoud.IsEmpty();
}