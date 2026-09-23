//Write a c++ program to store the marks of 5 students in an array.
//Arrange the marks in descending order to display the students form highest marks to lowest marks.


#include<iostream>
using namespace std;

int main()
{
 int marks[5];

 cout<<"Enter Marks of 5 students:";
 for(int i=0;i<5;i++)
 {
  cin>>marks[i];
 }

 for(int i=0;i<4;i++)
 {
  for(int j=0;j<4-i;j++)
  {
   if(marks[j]<marks[j+1])
    {
     int temp= marks[j];
     marks[j]=marks[j+1];
     marks[j+1]=temp;
    }
  }
 }
 cout<<"\nMarks after arranging:";
 for(int i=0;i<5;i++)
 {
 cout<<marks[i]<<endl;
 }
return 0;
}

