/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:41:44 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/23 21:04:15 by ngtina1999       ###   ########.fr       */
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

	if(this->_container.size() >= this->_maxSize) {
		throw(noSpaceException());
		std::cout << "HERE " << std::endl;
	}
	else
		this->_container.push_back(num);
}

unsigned int	Span::shortestSpan() {

	if (this->_container.size() <= 2)
		throw(noSpanException());

	std::vector<int> copy = (this->_container);
	std::sort(copy.begin(), copy.end());

	int diff1 = copy[1] - copy[0];
	for (size_t i = 1; i < copy.size(); i++) {
		int diff2 = copy[i] - copy[i - 1];
		if(diff2 < diff1) {
			diff1 = diff2;
		}
	}
	return (diff1);
}

unsigned int	Span::longestSpan() {

	if (this->_container.size() <= 2)
		throw(noSpanException());
	
	//auto result = std::minmax_element(_container.begin(), _container.end());
	std::vector<int>::iterator resultMax = std::max_element(_container.begin(), _container.end());
	std::vector<int>::iterator resultMin = std::min_element(_container.begin(), _container.end());
	return(*resultMax - *resultMin);
}
		
const char * Span::noSpanException::what() const throw(){
	return (MYRED "Error: there is no span founded" MYEOF);
}

const char * Span::noSpaceException::what() const throw(){
	return (MYRED "Error: there is no more space in the container" MYEOF);
}

long	Span::getValue(size_t i) {
	return(this->_container[i]);
}

void	Span::improvedAddNumber(int *arr, size_t size) {

	std::vector<int> values;
	values.assign(arr, arr + size);
	if(this->_container.size() + std::distance(values.begin(), values.end()) > this->_maxSize)
		throw (noSpaceException());
	this->_container.insert(this->_container.end(), values.begin(), values.end());

}
