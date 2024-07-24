#include "phone_book.hpp"

void	PhoneBook::display_contacts()
{
	int j = 0;

	std::string cmd;
	while (j < 8)
	{
		std::cout << j << " - " << this->array[j].m_first_name << " | " << this->array[j].m_last_name << " | " << this->array[j].m_nick_name << " | " << this->array[j].phone_number << " | " << this->array[j].darkest_secret << std::endl;
		j++;
	}
	while (1)
	{
		std::cout << "\nChoose contact (EXIT to return): ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			break;
	}
}
void PhoneBook::add_contact()
{
    if(i > 8)
        i = 7;
    std::cout << "Add contact" << std::endl;
    std::cout << "\nfirst name :  ";
    std::getline(std::cin, this->array[i].m_first_name);
    std::cout << "\nlast name :  ";
    std::getline(std::cin, this->array[i].m_last_name);
    std::cout << "\nnickname :  ";
    std::getline(std::cin, this->array[i].m_nick_name);
    std::cout << "\nnumber :  ";
    std::cin >> this->array[i].phone_number;
    std::cin.ignore();
    std::cout << "\ndarkest_secret :  ";
    std::getline(std::cin, this->array[i].darkest_secret);
    // std::cout << "first name : " << this->array[i].m_first_name << std::endl;
    // std::cout << "last name : " << this->array[i].m_last_name << std::endl;
    // std::cout << "nickname : " << this->array[i].m_nick_name << std::endl;
    // std::cout << "phone number : " << this->array[i].phone_number << std::endl;
	system("clear");
	std::cout << std::endl << "Contact Successfuly added !" << std::endl;
    i++;
}
// void	search()
// {



// }
