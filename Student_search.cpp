// Write a c++ program to store roll no. of 5 students in an array and search for given rollno.
// Display "student found" if the roll no is present , otherwise display "student not found".

#include<iostream>
using namespace std;

int main()
{
 int student[5];
 int searchRoll;
 cout<<"Enter roll no of students:\n";
 for (int i=0;i<5;i++)
    {
     cin>>student[i];
    }
 cout<<"Enter roll no  to search:\n";
 cin>>searchRoll;
 for(int i=0;i<5;i++)
    {
      if(student[i] == searchRoll)
        {
          cout<<"student found";
          return 0;
        }
    }

 cout<<"Student not found.";
 return 0;
}

