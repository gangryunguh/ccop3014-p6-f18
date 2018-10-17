/*** Don't change any text below */
// Important announcement on Significance of Academic Honor Policy
// The  Academic Honor Policy is an important aspect of keeping the integrity
// and quality of the computer science courses in general. Please don't share
// your project source with any other students on any occasion. I would like
// to let you know that, for the summer 2018 COP3014 course, we found several
// students violated the Academic Honor Policy by sharing their programming
// assignment source in an advertent and inadvertent manners. Please note that
// we will run MOSS" (plagiarism detection software tool) on future COP3014 student
// project submissions together with your summer 2018 project" submissions.
// In case your project source code happens to be >%75" similar to future student
// project source (which is statistically" almost impossible), your grade will
// be invalidated and your academic honor code violation will be reported to Dean's
// office. The following is the quick reference for Academic Honor Policy:"
// https://fda.fsu.edu/sites/g/files/upcbnu636/files/Media/Files/Academic%20Honor%20Policy/AHP%20Quick%20Reference%20Guide%20Nov%202017.pdf
//
/*** Don't change any text above */

#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>

using namespace std;


int main() {

    cout << "Input the map file to render with SFML: " << flush;

    // Task 1: (a) Read in the name of the map file from keyboard
    //             and open the input file for reading,
    //             i.e, "resources/usa.txt", and
    //                  "resources/germany.txt"
    //         (b) If the file cannot be opened, then
    //                print error message and immediately return
    //                EXIT_FAILURE error status.

    cout << "\"You need to implement Task 1.\"\n";





    //  Task 2: Read in two integer values from input file stream,
    //          which are width and height in pixels to for the drawing

    cout << "\"You need to implement Task 2.\"\n";







    // Task 3: create SFML Image object according to the dimension
    //         that you read from Task 2
    //            - The background color for the SFML Image is black
    //         The detailed reference and example for SFML Image can be found from
    //         https://www.sfml-dev.org/documentation/2.4.0/classsf_1_1Image.php

    cout << "\"You need to implement Task 3.\"\n";







    // Task 4: Initialize SFML Image object as being described below:
    //
    //    Repeat the following steps until there is no more data from input file stream.
    //      step a) Read a pair of double values from input file stream, which
    //                represent pixel location in 2D Image.
    //      step b) Convert these two double values to unsigned integer values since
    //                the data type for the SFML Image pixel must be unsigned int.
    //      step c) Set the SFML Image pixel location with according to
    //              these integer pixel values:
    //                 if the product of these two integer values are divisible by 4
    //                    then assign the color Red,
    //                 else if the remainder value of the product divided by 4 is equal to 1,
    //                    then assign the color White,
    //                 else if the remainder value of the product divided by 4 is equal to 2,
    //                    then assign the color Red,
    //                 else if the remainder value of the product divided by 4 is equal to 3,
    //                    then assign the color White,
    //    Close input file stream when the SFML Image object initialization is done.
    //

    cout << "\"You need to implement Task 4.\"\n";






    // Task 5: Create SFML window and 2D Sprite object
    //        (a) The SFML window's size must be the same size as the SFML Image size in Task 4, and
    //            the SFML window's name must be the input file name.
    //        (b) Using the loadFromImage SFML texture method, set The SFML Sprite's texture with the SFML
    //               Image object which being created in the above Task 4
    //
    //         Reference:
    //             https://www.youtube.com/watch?v=1ND_VRJChO4
    //

    cout << "\"You need to implement Task 5.\"\n";






    //
    // Task 6: Draw the SFML Sprite object created in Task 5 in the SFML window
    //
    //         Reference:
    //             Programming Assignment 4 - HelloSFML
    //

    cout << "\"You need to implement Task 6.\"\n";





    return 0;
}