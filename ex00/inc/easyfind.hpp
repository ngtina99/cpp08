/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:38:26 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/13 01:06:35 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define MYRED "\033[1;31m"
#define MYEOF "\033[0m"
#define MYBLUE "\033[1;34m]"

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>

// You can define your templates in the header files as usual. Or, if you want to, you
// can write your template declarations in the header files and write their implementations
// in .tpp files. In any case, the header files are mandatory while the .tpp files are optional.

template <typename T>
typename T::iterator	easyfind( T &containerOfIntergers, int intVar );


class valueNotFounf: public std::exception {
	
	public:
		const char	*what() const throw() {
			return(MYRED"Error: Value is not found"MYEOF);
		}
}

	public:
		virtual const char	*what() const throw()
		{
			return ("\033[1;31mError: Not found\033[0m");
		}
};

// Assuming T is a container of integers, this function has to find the first occurrence
// of the second parameter in the first parameter.

#include <easyfind.tpp>

#endif