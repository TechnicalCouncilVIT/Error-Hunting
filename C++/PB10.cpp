//Take the line that you  got from previous question and find its last word
#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <string_view>
#include <regex>
#include <sstream>
using namespace std;

std::string get_last_word(const std::string& str)
{
    if (str.length() == 0)
    {
        std::cerr << "No string\n";
        return 0;
    }

    int len = str.length();
    int i = len - 1;
    while (i >= 0 && str[i] != ' ')
    {
        i--;
    }
    std::string last_word;
    for (int j = i + 1; j < len; j++)
    {
        last_word += str[j];
    }
    return last_word;
}
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
            //Here Comes Answer Of 9thQuestion
            if (c==)
            {
                req=line;
                cout<<line<<endl;
            }
        }
        cout<<"The Number Of Lines In the File are:"<<endl;
        cout<<c<<endl;
        std::cout << get_last_word(req);
        emailfile.close();

    }
    else {
        std::cout << "File not opened." << std::endl;
    }

    return 0;
}
