 /*
enter the no.:
9
    j
   jij
  jihji
 jihgjih
jihgfjihg
 jihgjih
  jihji
   jij
    j
*/
 
  #include<iostream>
 
  using namespace std; 
  
  int main()
  {
  	int i,j,n,s;
  	cout<<"enter the no.:\n";
    cin>>n;
  	s=(n-1)/2;
  	for(i=1;i<=(n/2)+1;i++)
  	{
  		for(j=1;j<=s;j++)
  		{
  			cout<<" ";
		}
		
		for(j=1;j<=i;j++)
		{
		  	int asciiVal = 98 + n - j;
		  	char asciiChar = asciiVal;
		  	cout<<asciiChar;
		}
		
		for(j=i-1;j>0;j--)
		{
		  	int asciiVal = 98 + n - j;
		  	char asciiChar = asciiVal;
		  	cout<<asciiChar;
		}
		
		cout<<"\n";
		s--;
	}
	s=1;
	for(i=(n/2);i>=0;i--)
	{
		for(j=1;j<=s;j++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			int asciiVal = 98 + n - j;
		  	char asciiChar = asciiVal;
		  	cout<<asciiChar;
		}
		for(j=i-1;j>0;j--)
		{
		    int asciiVal = 98 + n - j;
		  	char asciiChar = asciiVal;
		  	cout<<asciiChar;
		}
		cout<<"\n";
		s++;
	}
  	
	return 0;
  }
  

