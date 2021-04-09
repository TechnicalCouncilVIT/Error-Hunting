/*
Teacher Took A Surprise Maths Test on Monday and only 5 students could score non-zero score and the maths 
teacher wants to find the runner-up among them
Give Input:
5
6 6 3 4 1
output: 
4
*/

#include<iostream>
using namespace std;

int check_similar_score(int score_list[], int n)
{

	if (n==0 || n==1)
	return n;
	
	int temp[n];
	
	int j = 0;
	int i;
	
	for (i=0; i<n-1; i++)
		if (score_list[i] != score_list[i+1])
			temp[j++] = score_list[i];
		temp[j++] = score_list[n-1];

	for (i=0; i<j; i++)
		score_list[i] = temp[i];
	
	return j;
}

int runnerup(int score_list[],int a){
	int j;
	for(j=1;j<a;j++){
		int key = score_list[j];
		int i = j-1;
		while(i>1 && score_list[i]>key){
			score_list[i+1] = score_list[i];
			i=i-1;
		}
		score_list[i+1] = key;
		return score_list[a-1];
	}
}

int main(){
	int n,i;
	int score_list[20];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>score_list[i];
	}
	
	n = check_similar_score(score_list, n);
	
	int b = runnerup(score_list, n);
	
	cout<<b;
	
	return 0;
}

  
