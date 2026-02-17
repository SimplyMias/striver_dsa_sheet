#include <bits/stdc++.h>
using namespace std;
int main()
{
    // A for loop let you repeat a block of code a specific number of times
    // Syntax of for loop
    /*for(initialization ; condition ; increment or decrement){
            // CODE
    }
    */
    // For Example
    for (int i = 1; i <= 10; i++)
    { // the scope of variable i is only limited in for loop
        cout << "Hey Saim" << endl;
    }

    // WHILE LOOP
    // just like the for loop while loop also does the same thing
    // Syntax of the while loop
    /*
    initialisation
    while(condition){
        //code

        increment
    }
    the  difference between the for loop and the while loop is there syntax in while loop we initialise the variable from outside of the loop
    and we increment or decrement at the end of the loop

    */
    // Example
       int i = 1;
       while (i <= 5)
       {
        cout<<"Hey Saim"<<" "<< i<<endl;
        i++;
       }

    //  Do While loops
    // they also do the same things  but they  also have different syntax
    // Syntax
    /*
    do{
       //statements to be executed

    }while (condition);
    */
   //you can think of it like this 
   // do something while the condition is this 
   // the do will make sure that the code is executed atleast one 
   // For Example 
   int i = 2;
   do{
    cout<<"Hey Saim"<<i<<endl;
    i++;
   }while(i<=1);// so basically do execute the code and then increment and then check the condition till then it has executed atleast once 
   cout<<i<<endl;

    return 0;
}