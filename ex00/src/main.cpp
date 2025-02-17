/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:37:03 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 00:19:33 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int main()
{

	int arr[10];
	for(size_t i = 0; i < sizeof(arr) /sizeof(arr[0]); i++)
		arr[i] = 1;	

	std::vector<int> vec;
	for(size_t i = 0; i < 10; i++)
		vec.push_back(i);
		
	std::list<int> lst;
	for(size_t i = 0; i < 10; i++)
		lst.push_back(i * 10);	
	
	std::deque<int> deq;
	for(size_t i = 0; i < 10; i++)
		deq.push_back(i * 100);

	//try {
		std::cout << "Try to find 5 in container type VECTOR..." << std::endl;
		std::vector<int>::iterator result1 = easyfind(vec, 5);
		std::cout << "Found: " << *result1 << std::endl;
	// }
	// catch(const std::exception& e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	int i = 0;
	while(result1 !=vec.end()) {
		std::cout << *result1 << std::endl;	
		result1++;
	}
	try {
		std::cout << "Try to find 20 in container type VECTOR..." << std::endl;
		std::vector<int>::iterator result2 = easyfind(vec, 1000);
		std::cout << MYGREEN << "Found: " << *result2 << MYEOF <<std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
