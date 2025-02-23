/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:37:08 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/23 21:04:40 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
// Of course, you will write your own tests and they will be way more thorough than the
// ones below. Test your Span at least with a minimum of 10 000 numbers. More would be
// even better.

int	main() {

	std::srand(time(NULL));

	Span sp = Span(10100);

	sp.addNumber(rand());
	sp.addNumber(rand());
	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch ( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
	std::cout << sp.longestSpan() << std::endl;	
	}
	catch ( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}

	for (int i = 2; i < 10100; i++)
		sp.addNumber(rand());

	try {
	sp.addNumber(12);
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "The shortest span is: " << MYBLUE << sp.shortestSpan() << MYEOF << std::endl;
	std::cout << "The longest span is: " << MYBLUE << sp.longestSpan() << MYEOF << std::endl;

	// for (int i = 0; i < 10100; i++)
	// 	std::cout << sp.getValue(i) << " ";
	Span sp2 = Span(5);
	int arr[] = {6, 3, 17, 9, 11};
	

	sp2.improvedAddNumber(arr, (sizeof(arr) / sizeof(arr[0])));
	
	std::cout << "The shortest span is: " << MYBLUE << sp2.shortestSpan() << MYEOF << std::endl;
	std::cout << "The longest span is: " << MYBLUE << sp2.longestSpan() << MYEOF << std::endl;

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