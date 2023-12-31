
#include"Linked_List_testing.h"



void Singular_Linked_List_testing() {

	std::cout << "Start add at the begining function." << "\n--------------------------------------------\n";
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

	std::cout << "Start Insert at End  function." << "\n--------------------------------------------\n";
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

	std::cout << "Start Delete at the End function." << "\n--------------------------------------------\n";
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

	std::cout << "Clear the whole List\n" << "\n--------------------------------------------\n";
	Mahmoud.clear();
	std::cout << "The Whole list is cleared\n";

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

	std::cout << "\nSearch Function for the element\n-------------------------------------------\n";
	bool x = Mahmoud.Search_for_the_element(16);
	(x == true) ? std::cout << "\nThe Element is Founded\n" : std::cout << "OPPS Not Founded\n";
	x = Mahmoud.Search_for_the_element(17);
	(x == true) ? std::cout << "\nThe Element is Founded\n" : std::cout << "OPPS Not Founded\n";


	std::cout << "\nAdd At Certain Node\n------------------------------------------\n";
	Mahmoud.Insert_at_node(-5,3);
	Mahmoud.Display_Elements();
	std::cout << "\n";
	Mahmoud.Insert_at_node(-9, 1);
	Mahmoud.Display_Elements();
	
	std::cout << "\nDelete at Certain Node\n---------------------------------------\n";
	Mahmoud.Delete_at_node(1);
	Mahmoud.Display_Elements();
	std::cout << "\n\n================================== All features of Single Linked List Work =============================\n\n";
}