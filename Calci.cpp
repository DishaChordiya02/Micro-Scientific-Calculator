#include <iostream>
#include <stdlib.h>
#include<cmath>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void power();
void factorial();
void square();
void cube();
void squareroot();

int main() {
    cout<<"\t\tWelcome to the Scientific Calculator,developed by Disha!!\n"<<endl;
    
    cout<<"*****Press 0 to quit the program*****\n"<<endl;
    
    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Multiplication \n";
    cout << "Enter 4 for Division \n";
    cout << "Enter 5 for Power \n";
    cout << "Enter 6 for Factorial \n";
    cout << "Enter 7  for square \n";
    cout << "Enter 8  for cube \n";
    cout << "Enter 9 for squareroot\n\n";
    
    int choice;
    
    while(1){
        cout<<"Enter your choice:";
        cin>>choice;
    
        switch (choice){
            
            case 1:
                addition();
                break;
            
            case 2:
                subtraction();
                break;
                
            case 3:
                multiplication();
                break;
            
            case 4:
                division();
                break;
            
            case 5:
                power();
                break;
            
            case 6:
                factorial();
                break;
                
            case 7:
                square();
                break;
            
            case 8:
                cube();
                break;
            
            case 9:
                squareroot();
                break;
                
             case 0:
                exit(0);
            default :
                cout<<"\nWrong choice,Enter valid choice\n\n";
                break;
        }
        }
        
    
    return 0;
}

void addition(){
    cout<<"Enter the numbers you want to add: ";
    int a,b;
    cin>>a>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void subtraction(){
    cout<<"Enter the numbers you want to subtract: ";
    int a,b;
    cin>>a>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(){
    cout<<"Enter the numbers you want to multipliation: ";
    int a,b;
    cin>>a>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(){
    cout<<"Enter the numbers you want to divide: ";
    int a,b;
    cin>>a>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
}
void factorial(){
    
    cout<<"Enter the number you want the factorial of: ";
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}
void power(){
    
    cout<<"Enter the base and exponent: ";
    double b,e;
    cin>>b>>e;
    double power = pow(b,e);
    cout<<"The solution for base "<<b<<" and exponent "<<e<<" is "<<power<<endl;
}
void square(){
     
    cout<<"Enter the number you want the sqaure of: ";
    double b;
    cin>>b;
    double power = pow(b,2);
    cout<<"The square of "<<b<<" is "<<power<<endl;
}
void cube(){
   
    cout<<"Enter the number you want the cube of: ";
    double b;
    cin>>b;
    double power = pow(b,3);
    cout<<"The cube of "<<b<<" is "<<power<<endl;
}
void squareroot(){
    cout<<"Enter the number you want the square root of: ";
    double n;
    cin>>n;
    double squareRoot = sqrt(n);
    cout<<"The Square root of "<<n<<" is "<<squareRoot<<endl;
}
