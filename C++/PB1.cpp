/*Fermat’s last theorem, also called Fermat’s great theorem, the statement that there are no natural numbers 
(1, 2, 3,…) x, y, and z such that x**n + y**n = z**n, in which n is a natural number greater than 2. For example, if
n = 3, Fermat’s last theorem states that no natural numbers x, y, and z exist such that x3 + y 3 = z3 
(i.e., the sum of two cubes is not a cube).
Input:
a=2
b=3
c=4
n=3
Output:
No that doesn't
*/

#include<iostream>
#include<cmath>

using namespace std;

int* input_fermat(int *arr){
	cout<<"Enter the first variable 'a': \n";
	cin>>arr[0];
	cout<<"Enter the second variable 'b': \n";
	cin>>arr[1];
	cout<<"Enter the third variable 'c': \n";
	cin>>arr[2];
	cout<<"Enter the exponential variable 'n': \n";
	cin>>arr[3];
	return arr;
}
	
void check_fermat(int a,int b,int c,int n){
	int calc_1 = pow(a,n);
	int calc_2 = pow(b,n);
	int calc_3 = pow(c,n);
		
	if(n>2 && int(calc_1) + int(calc_2) == calc_3){
		cout<<"Holy smokes, Fermat was wrong!";
	}else{
	    cout<<"No that doesn't work.";
	}
}


int main(){
	int arr[20];
	int* ptr = input_fermat(arr);
	check_fermat(a,b,c,n);
	return 0;
}
