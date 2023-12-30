
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
	std::cout << "\n133 id deleated\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n10 id deleated\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n17 id deleated\n";
	Mahmoud.Delete_at_begining();
	Mahmoud.Display_Elements();
	std::cout << "\n15 id deleated\n";



}