#include <iostream>
#include "Movie.h"
#include "Movies.h"
using namespace std;

/*
For this challenge you are to deveop the foundation for a program
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

The program must support the following:
class Movie - models a movie which includes:
-movie name
-movie rating (G, PG, PG-13, R)
-watched (# of times movie has been watched)

class Movies - models a collection of movie objects

Obviously, Movies needs to know about Movie since it is a collection of Movie object
However, our main driver should only interact with the Movies class.

For example, a simple main should be able to 
-create a Movies object
-ask the Movies object to add a movie by providing the movie name, rating and watched count
-ask the Movies object to increment the watched count by 1 for a movie given its name
-ask the Movies object to display all of its movies

Additionally,
- if we try to add a movie whose name is already in the movies collection
we should display this error to the user
- if we try to increment the watched count for a movie whose name is not in the movies
collection we should display this error to the user

The basic shell for one possible solution has been fully implemented in:
- Movie and Main
*/

// void incrementWatched(Movies &movies, std::string name);
// void addMovie(Movies &movies, std::string name);

int main()
{
	std::cout << "Hello World!" << std::endl;
	Movie Thor;
	Thor.display();

	return 0;
}