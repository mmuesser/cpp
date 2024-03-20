/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:55:34 by mmuesser          #+#    #+#             */
/*   Updated: 2024/02/19 14:08:02 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// my own test
	MutantStack<int> myStack = MutantStack<int>();
	
	for (int i = 0; i < 43; i++)
		myStack.push(i);

	std::cout << "\niterating on the MutantStack:\n";
	for (MutantStack<int>::iterator mit = myStack.begin(); mit != myStack.end(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "\nreverse iterating on the MutantStack:\n";
	for (MutantStack<int>::reverse_iterator mit = myStack.rbegin(); mit != myStack.rend(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "\npoping out\n";
	for (int i = 0; i < 43; i++)
	{
		std::cout << myStack.top() << std::endl;
		myStack.pop();
	}
	// with list
	std::cout << "\n And now with a list:\n";

	std::list<int> mlist;
	mlist.push_front(5);
	mlist.push_front(17);
	std::cout << mlist.front() << std::endl;
	mlist.pop_front();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator itl = mlist.begin();
	std::list<int>::iterator itle = mlist.end();
	++it;
	--it;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::list<int> sl(mlist);

	// my own test
	std::list<int> myList;
	
	for (int i = 0; i < 43; i++)
		myList.push_back(i);

	std::cout << "iterating on the list:\n";
	for (std::list<int>::iterator mit = myList.begin(); mit != myList.end(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "\nreverse iterating on the list:\n";
	for (std::list<int>::reverse_iterator mit = myList.rbegin(); mit != myList.rend(); mit++)
		std::cout << *mit << std::endl;

	std::cout << "\npoping out\n";
	for (int i = 0; i < 43; i++)
	{
		std::cout << myList.back() << std::endl;
		myList.pop_back();
	}
	return 0;
}