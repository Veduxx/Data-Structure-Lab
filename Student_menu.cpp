//Write a menu driven c++ program for simple a student management system that allows the user to add student's roll no and marks,
// display all student record,search for a student using roll no and execute the program.



#include<iostream>
using namespace std;
int main()
{
  int student[5];
  int n=0;
  int search_student;
  int choice;
 
 do
  {

   cout<<"\n\n===== STUDENT MANAGEMENT =====";
   cout<<"\n1. Add Student.";
   cout<<"\n2. Display Student's Roll no.";
   cout<<"\n3. Search Student by Roll no.";
   cout<<"\n4. Exit.";
   cout<<"\nEnter your choice:";
   cin>>choice;

  if(choice==1)
   {
    if(n<5)
     { 
      cout <<"Enter Student roll no.:";
      cin>>student[n];
      n++;
      cout<<"Student Data is Accepted!";
     }
    else
     { 
      cout<<"Classroom is Full.";}
     }
  else if(choice==2)
   {
    cout<<"\nRegistered Students:\n";
    for (int i=0;i<n;i++)
     { 
      cin>>student[i];
     }
   }
  else if(choice==3)
   {
    cout<<"\nEnter Roll no. to search:\n";
    cin>>search_student;
    bool found = false;
    for(int i=0;i<n;i++)
      {
         if (student[i]==search_student)
           {
            found=true;
           }
      }
     if (found) 
      { 
       cout <<"Student Present.";
      }
     else
      {
       cout<<"Student Absent.";
      }
   }
 else if(choice==4)
   {
    cout<<"Thank you!";
   }
 else
   {
    cout<<"Invalid Choice!";
   }
 }
  while(choice!=4);
  return 0;
}
