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
typename T::iterator	easyfind( T &contVar, int intVar ) {
	
	typename T::iterator	valueIter;
	valueIter = std::find(contVar.begin(), contVar.end(), intVar);
	if (!(std::binary_search(contVar.begin(), contVar.end(), intVar)))
		throw(valueNotFound());
	return(valueIter);
}
// Returns int Instead of an Iterator
// You only get the integer back, not its position in the container.
// If the container has duplicate elements, you can’t tell which one was found.

const char * valueNotFound::what() const throw () {
	return ("\033[1;31mError: Value is not found\033[0m");
}

#endif
