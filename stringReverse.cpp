#include<iostream>
using namespace std;

class string_reverse{
	private:
		int top;
		char nameStk[20];
		
		public:
			string_reverse(){
				top = -1;
			}
			
			void push(char s[]){				
				for(int i=0; s[i] != '\0'; i++){
					top++;
					nameStk[top] = s[i];						
				}				
			}
			
			void display(){
				for(int i=top; i>=0; i--){
					cout<<nameStk[i];
				}
			}
	
};

int main(){
	string_reverse obj;
	
	char name[20];	
	cout<<"Enter your Name: ";
	cin>>name;
	
	obj.push(name);
	
	obj.display();
	
	return 0;	
}
