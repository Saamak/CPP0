#include "phone_book.hpp"
#include "contact.hpp"
#include <stdlib.h>

void	print_menu()
{
	printf(RESET"-------------------------|MENU|------------------- \nYou can use these commands :\n\n");
	printf("-> ADD (to add a new contact)\n");
	printf("-> SEARCH (to search a contact)\n");
	printf("-> EXIT (to exit the app)\n");

}

void	is_command(std::string cmd)
{
	if (cmd == "EXIT")
	{
		printf(B_R"\n  |  EXITING...\n");
		exit(1);
	}
	else if (cmd == "ADD")
	{
		std::cout << B_G"welcome to " << cmd << " section" << std::endl;
	}
	else if (cmd == "SEARCH")
	{
		std::cout << B_G"welcome to " << cmd << " sectio" << std::endl;
	}
	else
		printf(B_R"\n  |  Wrong command\n\n");
}

int main(void)
{
	std::string cmd;
	PhoneBook a;

	a.addcont
	while (1)
	{
		print_menu();
		std::cout << "\nType a cmd: ";
		std::cin >> cmd;
		system("clear");
		is_command(cmd);
	}
	// std::cin >> C.m_first_name;
	// std::cout << "first name : " << C.m_first_name << std::endl;



	return 0;
}
