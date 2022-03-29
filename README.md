
# C++ Bag (ADT) Analyzer 

Objective:

The purpose of this project is to expose you to the analysis, design and implementation of a bag using arrays.
it further strengthen your knowledge and understanding of classes, objects, data members, member functions, and interface. 

project Specification:

Design a bag that will do the following:
Accept a student’s name (string) and maintains an array of test scores. Methods are, 
add which adds a score at the first available position. That is the position immediately following the last added score. If the array is empty, you add at the first position. If the array is full, then you cannot add and must indicate that. 
Remove which removes the last score; scores in the middle or front, cannot be removed. If the array is empty then you cannot remove and must indicate that. 
clear which clears the array of all the scores, but before you do that you must print the name and contents of the array backward.

Requirements:

•	You are to create an abstract class to be used as a base class with all its methods being pure abstract methods. 

•	You are to create a subclass that contains the class declaration and interface for the class’s methods.

•	You are to define a default constructor that will ask for a student name to be entered from the keyboard and stores it. It also 
initializes a counter that keeps track of the number of scores in the array and is maintained when you add, remove, or clear.

•	You have to define a null destructor.

•	The maximum number of test scores is 5 and is stored in the class data as a static constant.

•	The test scores may be integers, floats or doubles.

•	Two methods are defined to determine if the array isFull or isEmpty.


Responsibilities:

•	Get the name of a student.

•	Set item(score) count.

•	Check if array is full.

•	Add score to the array if it’s not Full.

•	If the Array is Full, then must indicate that.

•	Check if array is empty.

•	Remove last element from the array if it’s not empty.

•	If the Array is Empty, then must indicate that.

•	Print element of the array in reverse order.

•	Clear the array.
