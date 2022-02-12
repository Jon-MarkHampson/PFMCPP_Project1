#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: grandfatherClock
//  action 1: the grandfather clock ticks
grandfatherClock.tick();
//  action 2: the grandfather clock tocks
grandfatherClock.tock();
//  action 3: the grandfather clock chimes
grandfatherClock.chime();
//  2) 
//  Noun: parallel dimension
//  action 1: the parallel dimension is diverging
parallelDimension.isDiverging();
//  action 2: the parallel dimension is opening a wormhole
parallelDimension.opensWormhole();
//  action 3: the parallel dimension does not have dark matter and will collapse on itself
parallelDimension.doesNotHaveDarkMatterAndWIllCollapse();
//  3)
//  Noun: sun
//  action 1: the sun rises
sun.rise();
//  action 2: the sun sets
sun.set();
//  action 3: the sun goes supernova
sun.supernova();
//  4)
//  Noun: cat
//  action 1: the cat purrs
cat.purr();
//  action 2: the cat meows
cat.meow();
//  action 3: the cat coughs up a furball
cat.furball();
//  5)
//  Noun: tree
//  action 1: the tree grows
tree.grow();
//  action 2: the tree flowers
tree.flower();
//  action 3: the tree sheds it leaves
tree.shed();
//  6)
//  Noun: student
//  action 1: the student parties
student.party();
//  action 2: the student panics
student.panic();
//  action 3: the student studies
student.study();
//  7)
//  Noun: water
//  action 1: the water freezes
water.freeze();
//  action 2: the water melts
water.melt();
//  action 3: the water evaporates
water.evaporate();
//  8)
//  Noun: hater
//  action 1: the hater hates
hater.hate();
//  action 2: the hater realises the error of his ways
hater.epiphany();
//  action 3: the hater loves
hater.love();
//  9) 
//  Noun: camel
//  action 1: the camel walks
camel.walk();
//  action 2: the camel spits
camel.spit();
//  action 3: the camel eats
camel.eat();
//  10)
//  Noun: oldMan
//  action 1: the old man sleeps
oldMan.sleep();
//  action 2: the old man moans
oldMan.moan();
//  action 3: the old man farts
oldMan.fart();


#endif

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
    std::cout << "good to go" << std::endl;
    return 0;
}
