
#include"Linked_List.h"





int main()
{
	std::cout << "Start add at the begining function."<<"\n--------------------------------------------\n";
	Linked_List<int> Mahmoud;
	Mahmoud.Insert_at_begining(15);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_at_begining(17);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_at_begining(10);
	Mahmoud.Display_Elements();
	std::cout << "\n"; 
	Mahmoud.Insert_at_begining(133);
	Mahmoud.Display_Elements();
	std::cout << "\n";


	std::cout << "Start Delete at the Begining function." << "\n--------------------------------------------\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n";

	std::cout << "Start Delete at End  function." << "\n--------------------------------------------\n";
	Mahmoud.Insert_in_End(15);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_in_End(17);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_in_End(10);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_in_End(133);
	Mahmoud.Display_Elements();
	std::cout << "\n";

	std::cout << "Start Delete at the Begining function." << "\n--------------------------------------------\n";
	Mahmoud.Delete_in_End();
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Delete_in_End();
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Delete_in_End();
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Delete_in_End();
	Mahmoud.Display_Elements();
	std::cout << "\n";

	std::cout << "Creat a new List\n--------------------------------------------------------------------------\n";
	Mahmoud.Insert_in_End(15);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_in_End(17);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_in_End(10);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_in_End(133);
	Mahmoud.Display_Elements();
	std::cout << "\n";

	std::cout << "|-> Clear the whole List\n";
	Mahmoud.clear();
	std::cout << "|-> The Whole list is cleared\n";

}