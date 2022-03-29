
/* 
Name : Munavvarhusain Bunglawala 
Course : CIS 260
Date : 11/15/2021
Topic : Project 3 
Purpose : This program creates ADT array to manage user given data.

*/





#include <iostream>
#include <iomanip>
#include <string>
#include "Student.cpp"

using namespace std;

int main()
{   Student <double> stud1;  // a student
    char choice, answer;  // handles input from menu and controls loop
    float score;             // the iten to be added to the end of the array
     do{
    system("CLS");          // clears the screen
    cout <<setw(30)<< " Main Menu\n\n\n";   // menu of options to add/remove or clear
    cout << setw(15)<< " "<< "(1)- (A)dd\n\n";
    cout << setw(15)<< " "<< "(2)- (R)emove \n\n";
    cout << setw(15)<< " "<< "(3)- (C)lear\n\n\n";
    cout << setw(35)<< "Enter Choice ";cin >> choice;
    choice = toupper(choice);
    switch (choice)
    {   case '1':
        case 'A':
                cout << "\nAdd what Score "; cin >> score;
                if (stud1.add(score))       // call to the add method
                    cout << score << "\n\nAdded\n\n";
                break;
        case '2':
        case 'R':
                if(stud1.remove())          // call to the remove method
                    cout << "\n\nRemoved\n\n";
                break;
        case '3':
        case 'C':
                stud1.clear();              // call to the clear method
                break;
     }
     cout << "another Operation "; cin >> answer; answer = toupper(answer);
    }     while (answer == 'Y');  

return 0;   
}
