CXX = g++

OUT = PhoneBook

SRC = phone_book.cpp \
	  main.cpp \
	#   contact.cpp

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT) *.o

fclean: clean

re: fclean all
