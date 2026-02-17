#include<bits/stdc++.h>
using namespace std;
int main(){
     //Array is used when you want to store similar type of data
     // Array elements are stored in a consecutive memory locations 
     //You can define an array like this 
     int arr[5];
    //  // so this array can contain 5 elements 
    //  // we can access the elements of the array using indices 
    //  //index of an array start form 0 means if an array has a size of 5 the first element is on the 
    //  //the index 0 and the second element is on the index 1 
     cin>> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
     cout<<"element at index 2 is ";
     cout<<arr[2];

    // 2-D Array 
    // A 2-D array is multidimensional array which organizes elements in a grid-like format
    // with rows and columns 
    // 2-D array is a kind of matrix or a spreadsheeet 
    // to define a 2-D array we will first define the number of rows and then the number of columns 
    float arr[3][5];
    // //so the first one (3) is the number of rows and the second one (5) is the number of columns 
    // cin>>arr[1][1];
    // cin>>arr[2][1];
    // cin>>arr[3][1];
    // cout<<"Element 11 is: ";
    // cout<<arr[1][1];tialise any location there will  be garbage in that location or box 
    // // // // for example 
    // cout<<arr[1][3]; // this will through  some random number which is nothing but a garbage value 
    
    //if we dont ini



    // // STRINGS 
    // // String also store every character in terms of indices 
    // //imagine a string s if we want to  any particular character we can  access it using indices 
    string s  = "saim";
    cout << s[0];
    // // Finding the length of the string 
    int len = s.size();
    // // we  can also  change the last character of the string 
    // // see here 
    s[len-1] = 'k';
    cout<<s;
    





    return 0;
}