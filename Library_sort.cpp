//Problem statement : Write the C++ program to store ids of 5 library books in an  array. 
//Arrange the book ids in ascending order using simple sorting technique. 

#include<iostream>
using namespace std;
int main()
{
int book[5];//Decalration of array


cout<<"Enter 5 book IDs:\n";
for(int i=0;i<5;i++) //Assigning Values
   {
cin>> book[i];
   }

//Sorting
for(int i=0;i<4;i++)
   {
      for(int j=0;j<4-i;j++)
         {
           if(book[j]>book[j+1])
             {
               int temp = book[j];
               book[j]=book[j+1];
               book[j+1]=temp;
             }
         }
   }
cout<<"\nBooks after sorting:\n";
for(int i=0;i<5;i++)
   {
     cout<<book[i]<<" ";
   }

return 0;
}
