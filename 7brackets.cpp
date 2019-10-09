#include <iostream>
#include <string>
#include <stack>

int solution(std::string s){
	std::stack<char> myStack;
	int i=0;
	char temp;
	while(i<s.size()){
		if ((s[i]=='{')|| (s[i]=='[') || (s[i]=='(') ){
			myStack.push(s[i]);
			i++;
		}else{
		//we met ) or } or ]
			if (myStack.empty()){
				return 0;
			}else{
				temp=myStack.top();
				myStack.pop();
				if ((temp=='{' && s[i]=='}')||(temp=='(' && s[i]==')')||(temp=='[' && s[i]==']')){
					i++;
				}else{
					return 0;
				}
			}
		}
	}
	return 1;		
}

int main(){
	std::string s="{[()()]}";
	int lysh=solution(s);
	std::cout << lysh;
	return 0;
}