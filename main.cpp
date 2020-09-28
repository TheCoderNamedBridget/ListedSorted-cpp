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
    string listOfNums;
    cin>>listOfNums;
    listOfNums + " ";
    int indexToInsertAt = 0;
    int indexx = 0;

    int startingIndex = 0;
    int endingIndex = 1;
    
    //cout<<"here1 "+ listOfNums.size()<<" Anything show?"<<endl;
    
    if ( sizeOfList != 1 && sizeOfList <= 100 )
    {
        for ( int i = 0; i < sizeOfList; i++ )
        {
            cout<<"here starting"<<startingIndex<<"endingIndex "<<endingIndex<<" size of list "<<sizeOfList<<endl;
            
            
            if ( indexToInsertAt <= sizeOfList  )
            {
                string substring = listOfNums.substr( startingIndex, endingIndex); 
                char letterN = substring[endingIndex + 1];
                cout<<"here2 starting "<<startingIndex<<" ending "<<endingIndex<<" String "<<substring<< ". ["<<listOfNums<<"]"<<endl;
                
                if ( endingIndex == sizeOfList - 1 || substring[endingIndex + 1] == ' '  )
                {
                    cout<<"here3"<<endl;
                    stringstream geek(substring); 
                    int convertedSubstring;
                    geek>> convertedSubstring;
                    cout<<"convertedSubstring"<<convertedSubstring<<"."<<endl;
                    numList[indexToInsertAt] = convertedSubstring;
                    indexToInsertAt += 1;
                    
                    startingIndex = endingIndex;
                    endingIndex += 1;
                }
                else 
                {
                    cout<<"here4"<<endl;
                    endingIndex+= 1;
                }
            }
        }
        cout<<"size of list: "<<sizeOfList<<" "<<indexToInsertAt<<endl;

    }
    
    isSorted( numList, indexToInsertAt + 1 );
    return 0;
}



