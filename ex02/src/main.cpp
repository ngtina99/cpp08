/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:34:52 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/27 00:56:07 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutanStack.hpp>

int	main()
{
	
	MutantStack<int> mstack;

	if (mstack.empty())
		std::cout << MYBLUE "Stack is empty\n" MYEOF;
	else
		std::cout << MYBLUE "Stack is not empty!\n" MYEOF;


	mstack.push(5);
	mstack.push(17);

	if (mstack.empty())
		std::cout << MYBLUE "Stack is empty\n" MYEOF;
	else
		std::cout << MYBLUE "Stack is not empty!\n" MYEOF;

	//**make a list for comparison */
	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	//last element
	if (mlist.back() == mstack.top())
		std::cout << MYBLUE "Last elements " << mlist.back() << " are equal" MYEOF << std::endl;
	else
		std::cout << MYRED "ERROR" MYEOF << std::endl;

	//remove last element
	mlist.pop_back();
	mstack.pop();

	if (mlist.size() == mstack.size())
		std::cout << MYBLUE "Size " << mlist.back() << " is equal" MYEOF << std::endl;
	else
		std::cout << MYRED "ERROR" MYEOF << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }

	std::stack<int> s(mstack);

	MutantStack<int> assigned;
	assigned = mstack;
	if (assigned.size() == mstack.size() && std::equal(mstack.begin(), mstack.end(), assigned.begin()))
		std::cout << MYBLUE "Copy assignment works \n" MYEOF;
	else
		std::cout << "Copy assignment FAILED!\n";

	/* push the rest to compare with MutantStack */

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator itList = mlist.begin();
	std::list<int>::iterator iteList = mlist.end();

	++itList;
	--itList;

	while (itList != iteList && it != ite && *it == *itList) {
		std::cout << MYGREEN << *itList << " is equal with " << *it << MYEOF << std::endl;
		++itList;
		++it;
	}

	if (itList != mlist.end() && iteList != mlist.end()) {
		std::cout << "ERROR" << std::endl;
		return(1);
	}

	std::cout << "Reverse_iterator test" << std::endl;
	for (MutantStack<int>::const_reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
		std::cout << *rit  << " ";
	}
	std::cout << std::endl;

	MutantStack<int>::iterator itSearch = std::find(mstack.begin(), mstack.end(), 737);
	if (*itSearch == 737)
		std::cout << "Found" << std::endl;

	return (0);

}

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();

// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);

// 	return 0;
// }
