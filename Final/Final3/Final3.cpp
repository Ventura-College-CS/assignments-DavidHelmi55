#include <iostream>
#include "PostFix.hpp"
using namespace std;

int main()
{
	
	PostfixExp e1;
	

	int N = 6;
	int x;
	for(int i=1; i<=N; i++)
	{

		cout << "Enter 5 expressions you would like to use (1 at a time): ";
		cin >> x;
		e1.setExpression(x);
		e1.printExpression();
		e1.Evaluation();


	}
	//e1.setExpression("243*+5+");
	//e1.printExpression();
	//e1.Evaluation();
	
}