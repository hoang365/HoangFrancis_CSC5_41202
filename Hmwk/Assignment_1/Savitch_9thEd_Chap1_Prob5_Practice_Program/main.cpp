/* 
 * 
 * Author: Francis Hoang
   Created on January 11, 2016, 12:35 AM
 * Purpose: Total length of fence
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int width, height, length;
    
    cout << "Hello \n";
    cout << "Press return after entering a number. \n";
    cout << "Enter the width of the area:\n";
    cin >> width;
    cout << "Enter the height of the area:\n";
    cin >> height;
    length = width*2+height*2;
    cout << "If you have a width of ";
    cout << width;
    cout << " width\n";
    cout << "and ";
    cout << "a height of ";
    cout << height<< endl;
    cout << "you need a total length of ";
    cout << length;
    cout << " feet to surround the area\n";
    cout << "Good-bye \n";
    return 0;
}

