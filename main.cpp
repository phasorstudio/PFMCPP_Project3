/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/





/*
Thing 1) electric Guitar
5 properties:
    1) number of strings
    2) number of pickups
    3) number of switch choices {bridge, mid, neck}
    4) number of outputs
    5) number of keys
3 things it can do:
    1) play through a guitar amp
    2) play rythm and solo
    3) make some cool fx
 */

/*
Thing 2) orange 
5 properties:
    1) color
    2) size {small, big}
    3) sense {hard, soft}
    4) country
    5) cost
3 things it can do:
    1) drink as juice
    2) eat it
    3) fills your blood loss
 */

/*
Thing 3) sound film production
5 properties:
    1) number of mics
    2) number of boom poles
    3) number of mic pre_amps
    4) number of headphones
    5) number of hardware devices
3 things it can do:
    1) record tracks
    2) mix
    3) master
 */

/*
Thing 4) Microphone
5 properties:
    1) type of microphone
    2) type of pollar patern 
    3) frequency response
    4) diaphragm type {large, small}
    5) Capsule type {ribbon, condensor, dynamic}
3 things it can do:
    1) record 
    2) stereo techniques
    3) feedback
 */
 

/*
Thing 10) pc
5 properties:
    1) cpu 
    2) hard drive type {hdd, ssd}
    3) motherboard
    4) rom type {cd, dvd, blue_ray}
    5) ram
3 things it can do:
    1) make some programs
    2) surf to the internet
    3) make human lives easier
 */


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
