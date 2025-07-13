/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:37:03 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 22:42:45 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int main()
{

	std::vector<int> vec;
	for(size_t i = 0; i < 10; i++)
		vec.push_back(i);
		
	std::list<int> lst;
	for(size_t i = 0; i < 10; i++)
		lst.push_back(i * 10);	
	
	std::deque<int> deq;
	for(size_t i = 0; i < 10; i++)
		deq.push_back(i * 100);

	std::cout << "Try to find 5 in container type VECTOR..." << std::endl;
	std::vector<int>::iterator result1 = easyFind(vec, 5);
	std::cout << MYGREEN "Found: " << *result1 << MYEOF << std::endl;
	
	// std::cout << "rest of the vector: ";
	// while(result1 !=vec.end()) {
	// 	std::cout << *result1 << " ";	
	// 	result1++;
	// }
	// std::cout << std::endl;

	try {
		std::cout << "Try to find 50 in container type VECTOR..." << std::endl;
		std::vector<int>::iterator result2 = easyFind(vec, 50);
		std::cout << MYGREEN << "Found: " << *result2 << MYEOF <<std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "Try to find 60 in container type LIST..." << std::endl;
	std::list<int>::iterator result3 = easyFind(lst, 60);
	std::cout << MYGREEN "Found: " << *result3 << MYEOF << std::endl;
	
	// std::cout << "rest of the list: ";
	// while(result3 !=lst.end()) {
	// 	std::cout << *result3 << " ";	
	// 	result3++;
	// }
	// std::cout << std::endl;

	try {
		std::cout << "Try to find 8 in container type LIST..." << std::endl;
		std::list<int>::iterator result5 = easyFind(lst, 8);
		std::cout << MYGREEN << "Found: " << *result5 << MYEOF <<std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try to find 800 in container type DEQUE..." << std::endl;
	std::deque<int>::iterator result6 = easyFind(deq, 800);
	std::cout << MYGREEN "Found: " << *result6 << MYEOF << std::endl;

	// std::cout << "rest of the double-ended queue: ";
	// while(result6 != deq.end()) {
	// 	std::cout << *result6 << " ";	
	// 	result6++;
	// }
	// std::cout << std::endl;

	try {
		std::cout << "Try to find 6 in container type DEQUE..." << std::endl;
		std::list<int>::iterator result4 = easyFind(lst, 6);
		std::cout << MYGREEN << "Found: " << *result4 << MYEOF <<std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
}
