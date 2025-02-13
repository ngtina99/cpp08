/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:58:36 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/13 02:33:07 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


// Develop a Span class that can store a maximum of N integers. N is an unsigned int
// variable and will be the only parameter passed to the constructor

class Span {

	private:

	unsigned int	_maxN;

	public:
		Span();
		~Span();
		Span(unsigned int integerValue);
		Span	&operator=(Span &rhs);
		Span(const Span &copy);
	
		void	addNumber();
		// This class will have a member function called addNumber() to add a single number
		// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
		// are already N elements stored should throw an exception.

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
		// They will respectively find out the shortest span or the longest span (or distance, if
		// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
		// or only one, no span can be found. Thus, throw an exception.


}

// This class will have a member function called addNumber() to add a single number
// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
// are already N elements stored should throw an exception.
// Next, implement two member functions: shortestSpan() and longestSpan()

#include <Span.tpp>


#endif