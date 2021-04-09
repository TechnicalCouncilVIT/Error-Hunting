/*
Age Detector
Output:
20 is my Age
50 is my Father's age
80 is my grandfather's age
45 is my mother's age
*/
#include<iostream>
#include<string>
using namespace std;

class Grandfather{
	public:
		int age;
	
	public:
	    virtual void setParams(int gage){
		    age=gage+30;
		}
			
		virtual void age_detect(){
			cout<<age<<" is my grandfather's age\n";
		}
		
};

class Father: virtual public Grandfather{
    public:
		int f_age;
		
	    void setParams(int fage){
	    	f_age = fage+30;
	        Grandfather::setParams(fage);
		}	
		
		void age_detect(){
			cout<<f_age<<" is my Father's age\n";
		    	Grandfather::age_detect();
		}
		
};

class Mother:public Grandfather{
	public:
		int age;
		
		void setParams(int mage=0){
			age = mage+25;
		}
			
			
		void age_detect(){
			cout<<age<<" is my mother's age\n";
		}
		  
};

class Child : virtual public Father,virtual public Mother{
	public:
		int age;
		
		Child(int cage=0){
			age = cage;
			Father::setParams(age);
			Mother::setParams(age);
		}
		
	
		virtual void age_detect(){
			cout<<f_age<<" is my Age\n";
			Father::age_detect();
			Mother::age_detect();
		}
		
		
};

int main(){
	int age=20;
	Child c(age);
	c.age_detect();
	return 0;
}
