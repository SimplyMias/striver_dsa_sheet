#include <bits/stdc++.h>
using namespace std;
int main()
{

    // If else statements are conditional statements

    // // Write a program that takes an input of age and print if you are adult or not.
    int age ;
    cout<<"Enter your age: ";
    cin>> age;
    if(age >= 18){
        cout<<"You are Adult"<<endl;
    }else{
        cout<<"You are not adult"<<endl;
    }

    // MODIFIED VERSION use of else-if
    int age ;
    cout<<"Enter your age: ";
    cin>> age;
    if(age >= 18){
        cout<<"You are Adult"<<endl;
    }else if(age<18){
        cout<<"You are a child"<<endl;
    }
    // you can skip the else block if you want to

    /*
    A school has following rules for grading system:
    a. Below 25 --F
    b. 25-44 -- E
    c. 45-49 -- D
    d. 50-59 -- C
    e. 60-79 -- B
    f. 80-100 -- A
    Ask user to enter marks and print the corresponding grade
    */
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks < 25)
    {
        cout << "F" << endl;
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E" << endl;
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "D" << endl;
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C" << endl;
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "B" << endl;
    }
    else if (marks >= 80 && marks <= 100)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "Enter valid marks";
    }

    // One More Example of else if
    /*
    Take the age from  the user and decide accordingly
    1. If the age is < 18
       print -> not eligible for job
    2. If the age is >= 18 and age <= 54
       print -> eligible for job
    3. If age >= 55 and age <= 57
       print -> elgible for job but retirement soon
    4. If age > 57
       print -> retirement time
    */

    float age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "not eligible for job";
    }
    else if (age >= 18 && age <= 54)
    {
        cout << "eligible for job ";
    }
    else if (age >= 55 and age <= 57)
    {
        cout << "elgible for job but retirement soon ";
    }
    else if (age > 57)
    {
        cout << "retirement time";
    }
    else
    {
        cout << "Enter valid age";
    }

    return 0;
}