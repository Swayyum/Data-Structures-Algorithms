/* 
Write a function that returns if a string of paranthesis are matched. 
You are required to use the STL stack datastructure in your code for O(n) time complexity.
See 5.17 in the book for problem description and a stack based algorithm. 
*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std; 
  
// function to check if paranthesis are balanced 
bool areParanthesisBalanced(string expr) { 
// Your code here/*
    stack<char> tempS;
    for (int i = 0; i < expr.length(); i++) {
        if (tempS.empty()) 
        {
            tempS.push(expr[i]);
        }
        else if ((tempS.top() == '(' && expr[i] == ')') || (tempS.top() == '{' && expr[i] == '}') || (tempS.top() == '[' && expr[i] == ']')) 
        {
            tempS.pop();
        }
        else{
            tempS.push(expr[i]);
        }
    }
    if (tempS.empty()) 
    {
        return true;
    }
    return false;
}

  
// Test - DO NOT MODIFY
int main() 
{ 
    vector<string> parans = {"{()}[]", "[[", "))", "{[()]}", "({[])}"}; 
  	
	for(auto expr : parans) {
    	if (areParanthesisBalanced(expr)) 
        	cout << "Balanced" << endl; 
    	else
        	cout << "Not Balanced" << endl;
	} 
    return 0; 
}
