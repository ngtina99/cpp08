/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:37:03 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/13 01:56:17 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// You will notice that, in this module, the exercises can be solved WITHOUT the standard Containers and WITHOUT the standard Algorithms.
// However, using them is precisely the goal of this Module. You are allowed to
// use the STL. Yes, you can use the Containers (vector/list/map/and so forth) and the
// Algorithms (defined in header <algorithm>). Moreover, you should use them as much
// as you can. Thus, do your best to apply them wherever it’s appropriate.

// Unlike sequence containers (like std::vector, std::list, std::deque), associative containers use keys to store elements in a structured way.

#include <vector>
#include <list>
#include <easyfind.hpp>


int main()
{
	std::list<int> test;
	test.push_back(155);
	test.push_back(156);
	test.push_back(157);

	std::list<int>::const_iterator	it = test.end();

	try
	{
		it = ::easyfind(test, 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
		std::cout << *it << " found" << std::endl;

	it = test.end();

	try
	{
		it = ::easyfind(test, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (it != test.end())
		std::cout << *it << " found" << std::endl;

	return (0);
}

// int main(int, char**)
// {
//     {
//         std::cout << "\033[1;35mSTD::VECTOR\033[0m" << std::endl;
//         std::vector<int>    v;

//         for (int i = 0; i < 10; i++)
//             v.push_back(i);
//         std::cout << "\033[1;34mTrying to easyfind number 3: \033[0m" << std::endl;
//         ::easyfind(v, 3);
//         std::cout << "\033[1;34mTrying to easyfind number 42: \033[0m" << std::endl;
//         try
//         {
//             ::easyfind(v, 42);
//         }
//         catch(const std::exception& e)
//         {
//             std::cout << e.what() << '\n';
//         }
//     }
    
//     std::cout << std::endl;

//     {
//         std::cout << "\033[1;35mSTD::LIST\033[0m" << std::endl;
//         std::list<int>  l;
//         for (int i = 0; i < 10; i++)
//             l.push_back(i);
//         std::cout << "\033[1;34mTrying to easyfind number 3: \033[0m" << std::endl;
//         ::easyfind(l, 3);
//         std::cout << "\033[1;34mTrying to easyfind number 42: \033[0m" << std::endl;
//         try
//         {
//             ::easyfind(l, 42);
//         }
//         catch(const std::exception& e)
//         {
//             std::cout << e.what() << '\n';
//         }
//     }

//     std::cout << std::endl;

//     {
//         std::cout << "\033[1;35mSTD::DEQUE\033[0m" << std::endl;
//         std::list<int>  l;
//         for (int i = 0; i < 10; i++)
//             l.push_back(i);
//         std::cout << "\033[1;34mTrying to easyfind number 3: \033[0m" << std::endl;
//         ::easyfind(l, 3);
//         std::cout << "\033[1;34mTrying to easyfind number 42: \033[0m" << std::endl;
//         try
//         {
//             ::easyfind(l, 42);
//         }
//         catch(const std::exception& e)
//         {
//             std::cout << e.what() << '\n';
//         }
//     }
// }

