#include<iostream>
using namespace std;
int main()
{
  int book[10];
  int n=0;
  int choice;
  int searchID;
 
  do
  {

   cout<<"\n\n===== SMART LIBRARY =====";
   cout<<"\n1. Add Book.";
   cout<<"\n2. Display Book.";
   cout<<"\n3. Search Book.";
   cout<<"\n4. Exit.";
   cout<<"\nENter your choice:";
   
  if(choice==1)
  {
    cout <<"Enter Book ID:";
    cin>>book[n];
    n++;
    cout<<"Book Added!";
  }
  else if(choice==2)
  {
    cout<<"\nBooks in Library:\n";
    for (int i=0;i<n;i++)
    { 
     cin>>book[i];
    }
  }
  else if(choice==3)
  {
   cout<<"\nEnter Book ID to search:\n";
   cin>>searchID;
   bool found = false;
   for(int i=0;i<n;i++)
     {
         if (book[i]==searchID)
           {
            found=true;
           }
     }
     if (found) 
     { 
     cout <<"Book Found.";
     }
     else
     {
      cout<<"Book Not Found.";
     }
  }
 else if(choice==4)
  {
   cout<<"Thank you!";
  }
else
 {
 cout<<"Inavalid Choice!";
 }
}
while(choice!=4);
return 0;
}

 
