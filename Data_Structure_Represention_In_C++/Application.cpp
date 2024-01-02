#include"Linked_List_testing.h"
#include"Double_Linked_List.h"

int main()
{

	//Singular_Linked_List_testing();
	Double_Linked_List<int> Mahmoud;
	Mahmoud.Insert_at_begining(10);
	Mahmoud.Insert_at_begining(13);
	Mahmoud.Insert_at_begining(23);
	Mahmoud.Insert_at_begining(-6);
	Mahmoud.Insert_at_begining(-7);
	Mahmoud.Insert_at_begining(-9);
	Mahmoud.Display_Elements();
	Mahmoud.clear();
	Mahmoud.Insert_in_End(-100);
	std::cout << "\n";
	Mahmoud.Display_Elements();
}