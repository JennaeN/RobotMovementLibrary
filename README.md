RobotMovementLibrary
====================

void motion(int direction);

This robot movement library will make a robot move forward, backward, left and right.
In the function that sets the direction of motion (called motion()), an integer is passed in representing the direction the robot will be programmed to move.
 
 
    1 is forward
    
    2 is backward
    
    3 is left
    
    4 is right
    
    
    
For example, 
    motion(1) will set the motors for moving the robot forward. 
    
After this function is called, a delay must be used to specify the amount of time that the robot moves in that direction.
After the delay, you may call the function again (followed by another delay) as many times as you would like. 
The user may call the function as many times as they would like due to the fact that the 4 bits are cleared at the beginning of each call.
The bits must be cleared in order for the robot to move in the correct direction.

Here are some more examples:

motion(2);

__delay_cycles(1000000);

motion(4);

__delay_cycles(1000000);


This code will make the robot move backwards for a couple seconds, then turn right for a couple of seconds.
It is important to note that the number of delay cycles will determine how big of a turn the robot will make.
This amount of delay cycles will make the robot turn a little further than 180 degrees.

motion(3);

__delay_cycles(250000);

motion(4);

__delay_cycles(500000);

motion(3);

__delay_cycles(250000);

motion(1);


This code will make the robot turn left, turn twice as far right, turn back to center, and then move forward until the robot is stopped. 
Note that the number of cycles must be great enough that the motion is actually noticeable. A good reference for the number of cycles needed would be in the 100 thousands or more.


Please reference Robot.c.
