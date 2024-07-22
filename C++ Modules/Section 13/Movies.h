#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
	private:
		std::vector<Movie> movies;
	public:
		Movies();
		~Movies();
        /*
        add_movie expects the name of the movie, rating and watched count

        It will search the movies vector to see if a movie obj already exists
        with the same name.

       	If it does then return false since the movie already exists
       	Otherwise, create a movie object from the provided info
       	and add that movie obj to the movies vector and return true
       	*/
		bool add_movie(std::string name, std::string rating, int watched);

		/*
		increment_watched expects the name of the movie to increment the
		watched count

		It will search the movies vector to see if a movie obj already exists 
		with the same name.
		If it does then increment that objects watched by 1 and return true.

		Otherwise return false since then no movies object with the movie name 
		provided exists to increment
		*/

		bool increment_watched(std::string name);

		/*
		display

		display all the movie objects in the movies vector.
		for each movie call the movie.display method so the movie object displays itself
		*/
		void display() const;
};

#endif