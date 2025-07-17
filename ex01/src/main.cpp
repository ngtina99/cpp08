/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:37:08 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/07/17 18:15:07 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
// Of course, you will write your own tests and they will be way more thorough than the
// ones below. Test your Span at least with a minimum of 10 000 numbers.

int	main() {

	Span sp = Span(5);
	try {
		sp.addNumber(10);
		sp.addNumber(1);
	}
	catch ( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Only 2 value: ";
	for (int i = 0; i < 2; i++)
		std::cout << sp.getValue(i) << ' ';
	std::cout << std::endl;

	try {
		std::cout << "The shortest span is: " << MYBLUE << sp.shortestSpan() << MYEOF << std::endl;
	}
	catch ( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "The longest span is: " << MYBLUE << sp.longestSpan() << MYEOF << std::endl;
	}
	catch ( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(100);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(12);
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Values in test1: ";
	for (int i = 0; i < 5; i++)
		std::cout << sp.getValue(i) << ' ';
	std::cout << std::endl;

	try {
		std::cout << "The shortest span is: " << MYBLUE << sp.shortestSpan() << MYEOF << std::endl;
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "The longest span is: " << MYBLUE << sp.longestSpan() << MYEOF << std::endl;
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	// for (int i = 0; i < 10100; i++)
	// 	std::cout << sp.getValue(i) << " ";

	Span sp2 = Span(5);
	int arr[] = {6, 3, 17, 9, 11};

	sp2.improvedAddNumber(arr, (sizeof(arr) / sizeof(arr[0])));

	std::cout << "Values in test2: ";
	for (int i = 0; i < 5; i++)
		std::cout << sp2.getValue(i) << ' ';
	std::cout << std::endl;
	
	try {
		std::cout << "The shortest span is: " << MYBLUE << sp2.shortestSpan() << MYEOF << std::endl;
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "The longest span is: " << MYBLUE << sp2.longestSpan() << MYEOF << std::endl;
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

    const int SIZE = 10100;

    std::vector<int> numbers;
    for (int i = 0; i < SIZE; ++i)
        numbers.push_back(rand());

    Span span1(SIZE);
    Span span2(SIZE);

    clock_t start1 = clock();
    for (int i = 0; i < SIZE; ++i)
        span1.addNumber(numbers[i]);

    clock_t end1 = clock();
    double time1 = double(end1 - start1) / CLOCKS_PER_SEC;
    std::cout << "Time with addNumber() loop: " << time1 << " sec" << std::endl;

    clock_t start2 = clock();
    span2.improvedAddNumber(&numbers[0], numbers.size());

    clock_t end2 = clock();
    double time2 = double(end2 - start2) / CLOCKS_PER_SEC;
    std::cout << "Time with improvedAddNumber(): " << time2 << " sec" << std::endl;
}

// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	// try {
// 	// sp.addNumber(12);
// 	// }
// 	// catch ( std::exception &e ) {
// 	// 	std::cerr << e.what() << std::endl;
// 	// }
// 	std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }