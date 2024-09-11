#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

/*
 *  This project will use ASCII art:
 *                                                                  _
 *  A box represents reserved memory (to hold a variable's value): | |
 *                                                                 |_|
 *                                                                              ?_
 *  A box with a question mark in the upper left corner represents an optional: | |
 *                                                                              |_|
 *                                                      _ _ _ _ _ _
 *  A series of consecutive boxes represents a vector: | | | | | | |
 *                                                     |_|_|_|_|_|_|
 *
 *  An arrow represents a pointer: ---->
 *
 *  An arrow with a bar represents a nullptr: -->|
 */


int main() {
    /* 1. Create the following optional integers:
     *      ?__
     *      |  |
     *      |__|
     *      ?__
     *      |42|
     *      |__|
     *      ?__?__?__?__?__?__?__?__
     *      |  |90|44|  |79|  |-5|17|
     *      |__|__|__|__|__|__|__|__|
     */




    /* 2. Create the following smart pointers,
     *    where each one points to a different data type:
     *      Stack           Heap
     *       __              __
     *      |  | ---------> |11|
     *      |__|            |__|
     *       __              ___
     *      |  | ---------> |0.3|
     *      |__|            |___|
     *       __              __
     *      |  | ---------> |d |
     *      |__|            |__|
     *       __              __
     *      |  | ---------> |yo|
     *      |__|            |__|
     *       __              ____
     *      |  | ---------> |true|
     *      |__|            |____|
     *       __              _________
     *      |  | ---------> |123456789|
     *      |__|            |_________|
     */




    /* 3. Create the following smart pointers:
     * (Note that the orientation is horizontal instead of vertical for Stack and Heap memory on this one.)
     *            __ __ __ __ __ __ __ __ __
     *  Stack    |  |  |  |  |  |  |  |  |  |
     *           |__|__|__|__|__|__|__|__|__|
     *            |  |  |  |  |  |  |  |  |
     *            |  |  v  |  |  v  |  v  |
     *            v  v  -  v  v  -  v  -  v
     *           __  __   __  __   __    __
     *  Heap    |w ||- | |* ||? | |L |  |; |
     *          |__||__| |__||__| |__|  |__|
     */




    /* 4. Create the following smart pointer:
     *      Stack           Heap
     *       __              __ __ __ __ __ __ __ __
     *      |  | ---------> |11|22|33|44|55|66|77|88|
     *      |__|            |__|__|__|__|__|__|__|__|
     */




    /* 5. Create the following smart pointers to your choice of data type:
     *      Stack      Heap
     *       __         __
     *      |  | ----> |  |
     *      |__|       |__|
     *                  |
     *                  v
     *                  __
     *                 |  |
     *                 |__|
     */




    /* 6. Create the following smart pointers to your choice of data type:
     *      Stack      Heap
     *       __         __
     *      |  | ----> |  |
     *      |__|    >  |__|
     *             /
     *       __   /
     *      |  | /
     *      |__|
     */




    /* 7. Create the following optional smart pointers:
     *      Stack      Heap
     *      ?__         __
     *      |  | ----> |98|
     *      |__|       |__|
     *
     *      ?__
     *      |  |
     *      |__|
     *
     *      ?__
     *      |  | --->|
     *      |__|
     */




    /* 8. Create the following smart pointers to optionals:
     *      Stack      Heap
     *       __        ?__
     *      |  | ----> |hi|
     *      |__|       |__|
     *
     *       __        ?__
     *      |  | ----> |  |
     *      |__|       |__|
     *
     *       __
     *      |  | --->|
     *      |__|
     */




    /* 9. Write a nontrivial function that takes at least one
     *    smart pointer parameter. Its effects and return value
     *    are up to you. Declare the function above main and
     *    define it below main. Call it here.
     */




    /* 10. Write a function that takes a pointer to a vector of
     *     optionals and an unsigned integer index. Return the
     *     value at that index in the vector. If the index is
     *     out of range, return nullopt. Declare the function
     *     above main and define it below main. Call it here.
     */



    return 0;
}