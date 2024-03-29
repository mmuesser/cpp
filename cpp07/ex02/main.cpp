/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuesser <mmuesser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:15:55 by mmuesser          #+#    #+#             */
/*   Updated: 2024/01/30 11:32:09 by mmuesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 9999

int main(void)
{

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    //SCOPE
    {
        std::cout << "Scope" << std::endl;
        Array<int> tmp = numbers;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (tmp[i] != numbers[i])
            {
                std::cerr << "ERROR : didn't save the same value!!" << std::endl;
                return (1);
            }
        }
        Array<int> test(tmp);
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != numbers[i])
            {
                std::cerr << "ERROR : didn't save the same value!!" << std::endl;
                return (1);
            }
        }
        test[1] = 4;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != numbers[i])
            {
                std::cout<< test[i] << " " << numbers[i]<<std::endl;
                std::cerr << "ERROR : didn't save the same value!!" << std::endl; // devrait être triggered
            }
        }
    }

    // ON CHECK QUE NOTRE ARRAY A LE MEME COMPORTEMENT QUE MIRROR
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "ERROR : didn't save the same value!!" << std::endl;
            return (1);
        }
    }

    // 2 CAS QUI SONT SENSES TRIGGER DES EXCEPTIONS (range : [0, MAX_VAL - 1])
    try { numbers[-2] = 0; }
    catch(const std::exception& e) {  std::cerr << e.what() << '\n'; }

    try { numbers[MAX_VAL] = 0; }
    catch(const std::exception& e) {  std::cerr << e.what() << '\n'; }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    delete [] mirror;

    return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }