/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
Thing 5) Synth
5 properties:
    1) number of presets
    2) number of voices
    3) number of knobs
    4) number of oscs
    5) number of keys
3 things it can do:
    1) make sounds
    2) make fxs
    3) make music
 */

/*
Thing 6) Controller
5 properties:
    1) frequency of the CPU in `MHz`
    2) number of bits of the CPU
    3) number of PWM outputs
    4) nominal power consumption in `W`
    5) weight in `g`
3 things it can do:
    1) semi-automated flying
    2) autonomous flying
    3) return home for safety
 */

/*
Thing 7) Live stage
5 properties:
    1) lenght
    2) width
    3) equipment{guitar amps, bass amps, drums}
    4) heavy-duty
    5) weight 
3 things it can do:
    1) use for live performance
    2) stand a few people
    3) be portable
 */

/*
Thing 8) Camera
5 properties:
    1) horizontal resolution in nr. of pixels 
    2) vertical resolution in nr. of pixels
    3) viewing angle
    4) nominal power consumption in `W`
    5) weight in `g`
3 things it can do:
    1) record as film
    2) provide live view images
    3) make photos
 */

/*
Thing 9) Camera gimbal
5 properties:
    1) number of axis with image stabilization
    2) accuracy of stabilization in degree
    3) maximum weight of the camera which it can hold
    4) nominal power consumption in `W`
    5) weight in `g`
3 things it can do:
    1) do compensation of aircraft tilt an ditch
    2) do FPV mode operation
    3) do Follow Mode operation
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
