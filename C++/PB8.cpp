//Find the total Number of lines In the text file
#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <string_view>
#include <regex>
#include <sstream>
using namespace std;
int main() {
    string myText;
    int c=0;
    ifstream emailfile("email.txt");
    if (emailfile.is_open())
    {
        cout<<"Reading From File Operation Started!"<<endl;
        for( string line getline( emailfile, myText ); )
        {
            c=c+1;
        }
        cout<<"The Number Of Lines In the File are:"<<endl;
        cout<<c<<endl;
        emailfile.close();
    }
    else
    {
        std::cout << "File not opened." << std::endl;
    }

    return 0;
}
