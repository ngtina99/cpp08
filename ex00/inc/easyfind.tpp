/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:36:25 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/13 01:04:09 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <easyfind.hpp>

template <typename T>
typename T::iterator	easyfind( T &containerOfIntergers, int intVar ) {
	
	typename T::iterator	valueIterator;
	valueIterator = std::find(containerofIntegers.begin(), containerofIntegers.end(), intVar);
	if (!(std::binary_search(containerofIntegers.begin(), containerofIntegers.end(), intVar))) //This is the reason why we use the condition it == in.end() It signifies that the iterator is beyond the last valid element.
		throw(valueNotFound);
	return(valueIterator);
}_

// Returns int Instead of an Iterator

// You only get the integer back, not its position in the container.
// If the container has duplicate elements, you can’t tell which one was found.


#endif