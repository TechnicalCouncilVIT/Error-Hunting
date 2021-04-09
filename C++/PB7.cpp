/*
A newly opened multinational brand has decided to base their company logo on 
the three most common characters in the company name. They are now trying out various combinations of 
company names and logos based on this condition. Given a string s, which is the company name in lowercase letters, 
your task is to find the top three most common characters in the string.

Print the three most common characters along with their occurrence count.
Sort in descending order of occurrence count.
If the occurrence count is the same, sort the characters in alphabetical order
For example, according to the conditions described above,
Pinterest
would have it's logo with the letters 
e,t
Input:
aabbbccde
Output:
b 3
a 2
c 2
*/
#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	string s;
	cout<<"Enter String: ";
	cin>>s;
	int letters[26],i,j;
	for(i=0;i<26;i++){
		letters[i] = 0;
	}
	
	for(i=0;i<s.length();i++){
		letters[int(s[i])-int('a')] = letters[int(s[i])-int('a')] + 1;
	}
	
	for(i=0;i<3;i++){
		int max_letter = *max_element(letters, letters + 26);
		
		for(j=0;j<26;j++){
			if(max_letter == letters[j]){
				cout<<char(97-j)<<" "<<max_letter<<"\n";
				letters[j] = -1;
				break;
			}
		}
		
	}
	
	
}
