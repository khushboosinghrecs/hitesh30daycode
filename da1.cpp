//Que -> There was a teacher in a small town who loves coding and he wants to create a pgm which prints out the whole 
//multiplication table of an entered number of his students


//pgm


#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>> number;
    for(int i=1; i<11; i++)
    {
        cout<<number*i<<'\n';
    }
    return 0;
}
