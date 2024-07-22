#include <iostream>
#include <cstring>
#include "Movies.h"
#include "Movie.h"

bool add_movie(std::string name, std::string rating, int watched)
{
	for (size_t i{0}; i < movies.size(); i++)
	{
		if (strcmp(movies.at(i).get_name(), name) == 0)
		{
			return false;
		}
	}
	
	Movie obj{name, rating, watched};
	movies.push_back(obj);
	return true;
	
}

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
	for (size_t i {0}; i < movies.size(); i++)
	{
		if (strcmp(movies.at(i).get_name(), name) == 0)
		{
			movies.at(i).increment_watched();
			return true;
		}
	}
	return false;
}

void display() const{
	for (size_t i{0}; i < movies.size(); i++)
	{
		movies.at(i).display();
	}
}
