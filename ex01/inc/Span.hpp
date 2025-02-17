/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:58:36 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 23:04:47 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

// Develop a Span class that can store a maximum of N integers. N is an unsigned int
// variable and will be the only parameter passed to the constructor

#define MYEOF "\033[0m"
#define MYRED "\033[1;31m"
#define MYBLUE "\033[1;34m"
#define MYGREEN "\033[1;32m"
#define MYPURPLE "\033[1;35m"

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <vector>
#include <list>
#include <queue>

class Span {

	private:

	unsigned int		_maxSize;
	std::vector<int>	_container;

	public:
		Span();
		~Span();
		Span(unsigned int integerValue);
		Span	&operator=(Span &rhs);
		Span(const Span &copy);
	
		void	addNumber(int num);
		// This class will have a member function called addNumber() to add a single number
		// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
		// are already N elements stored should throw an exception.

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
		class noSpaceException : public std::exception {

			public:
				const char *what() throw();

		}

		class noSpanException : public std::exception {

			public:
				const char *what() throw();

		}
		// They will respectively find out the shortest span or the longest span (or distance, if
		// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
		// or only one, no span can be found. Thus, throw an exception.
};

// This class will have a member function called addNumber() to add a single number
// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
// are already N elements stored should throw an exception.
// Next, implement two member functions: shortestSpan() and longestSpan()

#include <Span.tpp>


#endif