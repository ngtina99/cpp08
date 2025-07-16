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

    std::cout << "Vector content: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "List content: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Deque content: ";
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        std::cout << "Try to find 5 in container type VECTOR..." << std::endl;
        std::vector<int>::iterator result1 = easyFind(vec, 5);
        size_t index1 = std::distance(vec.begin(), result1);
        std::cout << MYGREEN "Found: " << *result1 << " at index " << index1 << MYEOF << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Try to find 50 in container type VECTOR..." << std::endl;
        std::vector<int>::iterator result2 = easyFind(vec, 50);
        size_t index2 = std::distance(vec.begin(), result2);
        std::cout << MYGREEN "Found: " << *result2 << " at index " << index2 << MYEOF << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Try to find 60 in container type LIST..." << std::endl;
        std::list<int>::iterator result3 = easyFind(lst, 60);
        size_t index3 = std::distance(lst.begin(), result3);
        std::cout << MYGREEN "Found: " << *result3 << " at index " << index3 << MYEOF << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Try to find 8 in container type LIST..." << std::endl;
        std::list<int>::iterator result4 = easyFind(lst, 8);
        size_t index4 = std::distance(lst.begin(), result4);
        std::cout << MYGREEN "Found: " << *result4 << " at index " << index4 << MYEOF << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Try to find 800 in container type DEQUE..." << std::endl;
        std::deque<int>::iterator result5 = easyFind(deq, 800);
        size_t index5 = std::distance(deq.begin(), result5);
        std::cout << MYGREEN "Found: " << *result5 << " at index " << index5 << MYEOF << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Try to find 6 in container type DEQUE..." << std::endl;
        std::deque<int>::iterator result6 = easyFind(deq, 6);
        size_t index6 = std::distance(deq.begin(), result6);
        std::cout << MYGREEN "Found: " << *result6 << " at index " << index6 << MYEOF << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
