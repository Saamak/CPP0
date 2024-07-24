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

void	is_command(std::string cmd, PhoneBook& p)
{
	if (cmd == "EXIT")
	{
		printf(B_R"\n  |  EXITING...\n");
		exit(1);
	}
	else if (cmd == "ADD")
	{
		std::cout << B_G"Welcome to " << cmd << " section" << std::endl;
		p.add_contact();
		return ;
	}
	else if (cmd == "SEARCH")
	{
		std::cout << B_G"Welcome to " << cmd << " section" << std::endl << std::endl;
		p.display_contacts();
		return ;
	}
	else
		printf(B_R"\n  |  Wrong command\n\n");
}

int main(void)
{
	std::string cmd;
	PhoneBook p;

	while (1)
	{
		print_menu();
		std::cout << "\nType a cmd: ";
		std::getline(std::cin, cmd);
		system("clear"); //end of file EOF; if eof exit
		is_command(cmd, p);
	}
	// std::cin >> C.m_first_name;
	// std::cout << "first name : " << C.m_first_name << std::endl;
	return 0;
}
