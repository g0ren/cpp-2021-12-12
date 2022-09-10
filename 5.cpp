#include <iostream>
using namespace std;

int main() {
	unsigned int a { 0 }, t { 0 }, s { 0 };
	cout<<"Enter the number A: ";
	cin>>a;
	t=a;
	while(t!=0){
		s+=t%10;
		t/=10;
	}
	s=s*s*s;
	if(s==a*a){
		cout << "Sum of all digits of A cubed is equal to A squared";
	}else{
		cout << "Sum of all digits of A cubed is not equal to A squared";
	}

	return 0;
}
