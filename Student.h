


#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>


using namespace std;
 
 template <class T>
 
 class Student   
 
 {
 	string name;    // assigning varriable name to type string
 	static const int SIZE = 5;   // defining static constant max capacity of an array
 	int itemCount;    // current count of scores
 	T items[SIZE];   // Array of scores
 	void print(); 
 
public:
 	Student();    // default constructor with no - parameters passed 
 	~Student(){} ;   // default destructor which is equal to NULL  
	     
 	bool add (const T & );
 	bool remove();
 	void clear();
 	bool isEmpty() const; 
 	bool isFull() const;
 	
 };
 
 # endif
 
 
