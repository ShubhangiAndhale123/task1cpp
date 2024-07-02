#include <iostream>
using namespace std;
int main()
{
    double a,b;
    char op;
    cout<<"enter the operator(+ - * /) : ";
    cin>>op;

    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;

    switch (op)
    {
    case '+':
    cout<< a << op << b << " = " << a + b << endl;
    break;
    case '-':
       cout<< a << op << b << " = " << a - b << endl;
       break;
    case '*':
       cout<< a << op << b << " = " << a * b << endl;
       break;
    case '/':
       if(b == 0.0)
       {
        cout << "divide by zero situation" << endl;
       }
       else
       {
       cout<< a << op << b << " = " << a / b << endl;
       }
       break;
    
    default:
       cout << "invalid opertor";
    }
}

    
  





