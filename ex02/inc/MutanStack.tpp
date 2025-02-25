/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:09:24 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/24 01:00:08 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutanStack.hpp>

// in the .tpp file, you must use <T> when implementing template functions because the 
// compiler needs to know that these definitions belong to a template class

template <class T>
MutantStack<T>::MutantStack () {
}

template <class T>
MutantStack<T>::~MutantStack () {
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy){
}

template <class T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T> &rhs) {

	// if (this != &rhs)
	// 	*this = rhs;
	if (this != &rhs) {
		std::stack<T>::operaotr=(rhs);
	}
	return(*this);

}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return (this->c.begin());
}


template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return (this->c.end());
}
