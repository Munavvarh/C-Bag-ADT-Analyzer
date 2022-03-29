


#include "Student.h"
#include <iostream>

using namespace std;
 
 // This constructor initializes score count and student's name
template <class T>
Student <T> :: Student()
{

	cout << "Enter your Name : "; 
	getline(cin, name);
	itemCount = 0;
	
}

// This method adds scores 
template <class T>
bool Student<T> :: add(const T & newEntry) 
{
	// checking if array is full
	bool hasRoomToAdd = !isFull();   
	if(hasRoomToAdd)
	{
		items[itemCount] = newEntry;
		itemCount++;
	}
	// if array is full then indicating that user can't add any more scores
	else {
		cout << " Since Array is Full you can't add any more elements \n";
      }
	
	return hasRoomToAdd;   //return true if score is added, otherwise false

}

// This method removes last score 	
template <class T>
bool Student<T> :: remove()
{
	//checking if array is empty 
	bool canRemoveItem = !isEmpty();
	if(canRemoveItem) {
		itemCount--;
		
     }
     // if array is empty then indicating user can't remove any scores  
     else {
     	cout << "Since Array is empty you can't remove any elements \n";
	 }
	
	return canRemoveItem;  // return true if score is removed, otherwise false
}

// This method calls another method print which will print the contents of array before clearing it. 
template <class T>
void Student<T> :: clear()
{
	 print();  // calling print function 
	itemCount = 0;
	
    
} 

// This method will print the name and contents of the array backward.

template <class T>
void Student<T> :: print()
{
	cout << "Name:" << name << endl;
	cout << "Scores last to first before clearing the array: ";
	
	for (int i = itemCount - 1; i > -1;  i--) {
			cout << items[i] << ",  ";
			
	}

	cout << "\n";
}


// This method returns true if array is empty , otherwise return false
template <class T>
bool Student<T> :: isEmpty() const
{
	return itemCount == 0;
	
}

// This method returns true if array is full , otherwise return false
template <class T>
bool Student<T> :: isFull() const
{
	return itemCount == SIZE;  
}
