#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <chrono>
#include <thread>

using namespace std;


int main()
{
    system("clear");
// Here is an example of how to draw an AI-robot logo using char and C++ that can be printed in the terminal:

    char robot[5][5] = {
        {' ', '_', '_', '_', ' '},
        {'|', ' ', ' ', ' ', '|'},
        {'|', '(', 'o', ')', '|'},
        {'|', ' ', '|', ' ', '|'},
        {'|', '_', '_', '_', '|'}
    };

    // Print the robot logo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << robot[i][j];
        }
        cout << endl;
    }
    cout<<endl<<endl;
    string Mo="Monolith:";
    cout<<Mo;
    string st="Hello, I am Monolith , a state-of-art AI helper.";
    for (char c : st) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout<<endl<<endl;
    st="It is glad to see you.So what's your name?";
    system("say It is glad to see you.So what is your name?");
    cout<<Mo;
    for (char c: st)
        {
            std::cout<<c<<std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
    cout<<endl<<endl;
    cout<<"< I am (Please input your name):";
    
    string user;
    getline(cin,user);
}
