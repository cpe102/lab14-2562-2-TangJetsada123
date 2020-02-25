#include <iostream>
using namespace std;


int main(){
	int a =5;
	char b = 'a';
	char &c = b;
	int *x; 
	x = &a;
	char *y;
	y = &b;
	int *z;
	z =x;
	cout << a <<" "<< b <<" "<< c <<" " << x <<" " <<(int*)y <<" " << z <<" "<<"\n";	
	cout << &a<<" "<<(int*) &b<<" "<<(int*) &c <<" " << &x <<" " <<(int*)&y <<" " << z <<" "<<"\n";	
	c = 'f';
	cout << a <<" "<< b <<" "<< c <<" " <<(int*)x <<" " <<(int*)y <<" " << z <<" "<<"\n";
	*y = 'W';
	cout << a <<" "<< b <<" "<<c <<" " << x <<" " <<(int*)y <<" " << z <<" "<<"\n";
	*x = 6;
	cout << a <<" "<< b <<" "<<c <<" " << x <<" " <<(int*)y <<" " << z <<" "<<"\n";
	*z = 7;
	cout << a <<" "<< b <<" "<<c <<" " << x <<" " <<(int*) y <<" " << z <<" "<<"\n";
	return 0;
}
