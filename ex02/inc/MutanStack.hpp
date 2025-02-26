/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:04:45 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/24 01:00:24 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#define MYEOF "\033[0m"
#define MYRED "\033[1;31m"
#define MYBLUE "\033[1;34m"
#define MYGREEN "\033[1;32m"
#define MYPURPLE "\033[1;35m"

#include <stack>
#include <iostream>
#include <list>

template <class T>
//public std::stack<T>
class MutantStack : public std::stack<T> {
	
	public:
		
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &copy);
		MutantStack &operator=(MutantStack const &rhs);

		typedef	typename std::stack<T>::container_type		container;

		typedef typename container::iterator					iterator;
		typedef typename container::const_iterator				const_iterator;
		typedef typename container::reverse_iterator			reverse_iterator;
		typedef typename container::const_reverse_iterator		const_reverse_iterator;

		iterator	begin();
		iterator	end();

		const_iterator	begin() const;
		const_iterator	end() const;

		reverse_iterator	rbegin();
		reverse_iterator	rend();

		reverse_iterator	rbegin() const;
		reverse_iterator	rend() const;

};
#include <MutanStack.tpp>

#endif