/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:38:26 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 21:24:37 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

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

template <typename T>
typename T::iterator	easyfind( T &contVar, int intVar );

class valueNotFound: public std::exception {
	
	public:
		const char	*what() const throw();
};

#include <easyfind.tpp>

#endif
