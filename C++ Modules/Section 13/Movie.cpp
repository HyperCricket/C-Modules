#include <iostream>
#include "Movie.h"

Movie(){
	name{"None"};
	rating = "G";
	watched = 0;
}
Movie(std::string name, std::string rating, int watched)
	: name{name}, rating{rating}, watched{watched} {

}

:~Movie(){

}

void display() const {
	std::cout << name << ", " << rating << ", " << watched << std::endl;
}
