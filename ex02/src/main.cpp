/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:34:52 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/25 22:56:08 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutanStack.hpp>
int main()
{
	std::cout << "MutanStack print:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	//last in first out
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);


	std::cout << "List print:" << std::endl;
	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	//last element
	std::cout << mlist.back() << std::endl;

	//remove last element
	mlist.pop_back();

	std::cout << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator itList = mlist.begin();
	std::list<int>::iterator iteList = mlist.end();

	++itList;
	--itList;

	while(itList != iteList) {
		std::cout << *itList << std::endl;
		++itList;
	}
	
	return (0);
}
