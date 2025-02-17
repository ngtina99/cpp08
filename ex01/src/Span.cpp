/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:41:44 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 23:06:34 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(){

}

Span::Span(unsigned int value) : _maxSize(value){
    
}

Span::~Span() {
}

void	Span::addNumber(int num) {
    if(this->_container.size() > this->_maxSize)
        throw(noSpaceException());
    else
        this->_container.push_back(num);
}

unsigned int	Span::shortestSpan() {
    
}

unsigned int	Span::longestSpan() {

}
		
const char * Span::noSpanException::what() {
    
}
