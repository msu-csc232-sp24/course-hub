/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2023
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the main target.
 * @version 1.0.0
 * @date    09/02/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#include "csc232.h"
#include "bag.h"
#include "ArrayBag.h"

int main(int argc, char* argv[])
{
    std::cout << "Hello, Main Target!" << std::endl;
    Bag<int>* bag = new ArrayBag<int>();
    int entry{ 5 };
    bool success = bag->add(entry);
    success = bag->remove(entry);

    delete bag;
    bag = nullptr;
    return EXIT_SUCCESS;
}
