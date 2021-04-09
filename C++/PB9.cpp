//Divide the number of lines of the file (Answer of previous question) by 2
#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <string_view>
#include <regex>
#include <sstream>
using namespace std;
int main() {
    string myText,req,line;
    int c=0;
    int a=0;
    ifstream emailfile("email.txt");
    if (emailfile.is_open())
    {
        cout<<"Reading From File Operation Started!"<<endl;
        while (getline(emailfile; line))
        {
            c=c+1;
            //Here Comes the value
            if (c==)
            {
                cout<<line<<endl;
            }
        }
        cout<<"The Number Of Lines In the File are:"<<endl;
        cout<<c<<endl;
        cout<<req;
        emailfile.close();
    }
    else
    {
        std::cout << "File not opened." << std::endl;
    }
    return 0;
}
