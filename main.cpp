/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

bool isSorted(const int list[], int size)
{
    if ( size == 0 )
    {
        cout<<"List of size 0 is NOT valid :("<<endl;
        return false;
    }
    if ( size == 1 )
    {
        cout<<"The list is already sorted"<<endl;
        return true;
    }
    int previousNum = list[0];
    
    for (int i = 0; i < size; i ++ )
    {
        //cout<<previousNum<<" "<<list[i + 1];
        if ( previousNum > list[i + 1] )
        {
            cout<<"The list is not sorted"<<endl;
            return false;
        }
    }
    cout<<"The list is already sorted"<<endl;
    return true;
}

int main()
{
    //declare array of size 100
    int numList[100];
    //prompt user for number of items in list and the values of 
    //the items in the list 
    cout<<"Enter the size of the list: ";
    int sizeOfList;
    cin>>sizeOfList;
    cout<<endl<<"Enter list: ";
    int listOfNums;
    
    
    
    listOfNums + " ";
    int numsAdded = 0;
    while ( numsAdded != sizeOfList )
    {
        
        cin>>listOfNums;
        numList[numsAdded] = listOfNums;
        numsAdded+= 1;
    }

    
    isSorted( numList, sizeOfList );
    return 0;
}




