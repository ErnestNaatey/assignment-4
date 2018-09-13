#include<iostream>
using namespace std;
 	int GCD(int x, int y)
 	{
 		int u = x % y;
 		if(u==0)
 		 return y;
   else
   
   
       return (GCD(y, x%y));
	 }
 	
 	int main()
 	{
 		int x, y;
 		char choice;
 		do
 		{
 			cout<<"Enter your first number : ";
 			cin>> x;
 			
 			cout<<"Enter your second number :";
 			cin>> y;
 			
 			cout<<"GCD is : "<<GCD(x, y)<<endl;
		   cin>> choice;}
	 while(choice=='y'|| choice=='Y');
 	
 	return 0;
 }
