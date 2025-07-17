/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:58:36 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/07/17 18:16:19 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

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
#include <limits>
#include <iomanip> //std::setprecision

class Span {

	private:

	unsigned int		_maxSize;
	std::vector<int>	_container;

	public:
		Span();
		~Span();
		Span(unsigned int integerValue);
		Span	&operator=(Span const &rhs);
		Span(const Span &copy);
	
		void	addNumber(int num);
		// This class will have a member function called addNumber() to add a single number
		// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
		// are already N elements stored should throw an exception.

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
		class noSpaceException : public std::exception {

			public:
				const char *what() const throw();

		};

		class noSpanException : public std::exception {

			public:
				const char *what() const throw();

		};

		long	getValue( size_t i );
		// They will respectively find out the shortest span or the longest span (or distance, if
		// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
		// or only one, no span can be found. Thus, throw an exception.
		void	improvedAddNumber(int *arr, size_t size);
};

#endif
