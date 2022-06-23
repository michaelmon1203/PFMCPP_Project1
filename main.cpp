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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        amplitude
//  action 1:    the amplitude mutes
amplitude.mute();
//  action 2:    the amplitude opens
amplitude.open();
//  action 3:    the amplitude increases
amplitude.increase();
//  2)
//  Noun:        cutoffFreq
//  action 1:    the cutoffFreq increases
cutoffFreq.increase();
//  action 2:    the cutoffFreq decreases
cutoffFreq.decrease();
//  action 3:    the cutoffFreq is set to certain value
cutoffFreq.set();
//  3)
//  Noun:        kid
//  action 1:    kid screams
kid.scream();
//  action 2:    kid runs
kid.run();
//  action 3:    kid paints
kid.paint();
//  4)
//  Noun:        cow
//  action 1:    cow eats grass
cow.eatGrass();
//  action 2:    cow walks
cow.walk();
//  action 3:    cow swings tail
cow.swingTail();
//  5)
//  Noun:        musician
//  action 1:    musician plays guitar
musician.playGuitar();
//  action 2:    musician changes guitar strings
musician.changeGuitarStrings();
//  action 3:    musician tunes guitar strings
musician.tuneGuitarStrings();
//  6)
//  Noun:        audience
//  action 1:    audience watch something
audience.watch();
//  action 2:    audience aplaud something
audience.aplaud();
//  action 3:    audience dislike something
audience.dislike();
//  7)
//  Noun:        guitar tab
//  action 1:    guitar tab scrolls Up
guitarTab.scrollUp();
//  action 2:    guitar tab scrolls down
guitarTab.scrollDown();
//  action 3:    guitar tab starts over
guitarTab.startOver();
//  8)
//  Noun:        volume knob
//  action 1:    volume knob turns clockwise
volumeKnob.turnClockwise();
//  action 2:    volume knob turns counter-clockwise
volumeKnob.turnCounterClockwise();
//  action 3:    volume knob stays
volumeKnob.stay();
//  9)
//  Noun:        laptop
//  action 1:    laptop makes sound
laptop.makeSound();
//  action 2:    laptop runs software
laptop.runSoftware();
//  action 3:    laptop drains battery
laptop.drainBattery();
//  10)
//  Noun:        sampler
//  action 1:    sampler samples
sampler.sample();
//  action 2:    sampler plays sample
sampler.playSampler();
//  action 3:    sampler changes input channel
sampler.changeInputChannel();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].
 
 If you didn't already:
	Make a pull request after you make your first commit
	pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
	std::cout << "good to go" << std::endl;
	return 0;
}
