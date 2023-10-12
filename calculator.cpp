#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
  char op;
  float num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Enter operator according to which operation you want to perform: +, -, *, /: ";
  cin >> op;
  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "you entered wrong operator";
      break;
  }
}
};
int main()
{
	A obj;
  return 0;
}

		

