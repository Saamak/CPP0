#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <string>
#include <iostream>
#include "contact.hpp"

# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"


class PhoneBook{

	Contact array[8];

	void add_contact();

};



#endif
