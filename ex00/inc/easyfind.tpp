/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:36:25 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 00:10:23 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <easyfind.hpp>

template <typename T>
typename T::iterator	easyFind( T &contVar, int intVar ) {
	
	typename T::iterator	valueIter;

	valueIter = std::find(contVar.begin(), contVar.end(), intVar);
	if (valueIter == contVar.end())
    	throw(valueNotFound());
	return(valueIter);
}

const char * valueNotFound::what() const throw () {
	return ("\033[1;31mError: Value is not found\033[0m");
}

#endif
