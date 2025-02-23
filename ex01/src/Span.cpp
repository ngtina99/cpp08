/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:41:44 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/23 19:26:14 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : _maxSize(std::numeric_limits<unsigned int>::max()), _container(0) {

}

Span::Span(unsigned int value) : _maxSize(value), _container(0){
}

Span::~Span() {
}

Span::Span(const Span &copy) : _maxSize(copy._maxSize), _container(copy._container) {
}

Span&	Span::operator=(Span &rhs) {
	if (this != &rhs) {
		this->_maxSize = rhs._maxSize;
		this->_container = rhs._container;
	}
	return (*this);
}

void	Span::addNumber(int num) {
	if(this->_container.size() > this->_maxSize)
		throw(noSpaceException());
	else
		this->_container.push_back(num);
}

// unsigned int	Span::shortestSpan() {

// 	if (this->_container.size() < 2)
// 		throw(noSpaceException());
// 	int	i;
// 	int	j;	
// 	while ()

// 	if ( < )
// }

unsigned int	Span::longestSpan() {

	if (this->_container.size() < 2)
		throw(noSpaceException());
	
	//auto result = std::minmax_element(_container.begin(), _container.end());
	std::vector<int>::iterator resultMax = std::max_element(_container.begin(), _container.end());
	std::vector<int>::iterator resultMin = std::min_element(_container.begin(), _container.end());
	return(*resultMax - *resultMin);
}
		
const char * Span::noSpanException::what() throw(){
	return (MYRED "Error: there is no span founded" MYEOF);
}

const char * Span::noSpaceException::what() throw(){
	return (MYRED "Error: there is no more space in the container" MYEOF);
}
