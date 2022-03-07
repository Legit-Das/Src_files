//Program to reverse string wordwise
#include <iostream>

int main() {
    char str[100];
    std::cout << "Enter the string: ";
    std::cin.get(str, 100);
    
    int len;
    for(len = 0; str[len] != '\0'; len++);
    
    char rev_str[100];
    int start = 0;
    for(int i = 0; i < len + 1; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            
            while(start < i) {
                rev_str[start++] = str[end--];
            }
            rev_str[i] = str[i];
            start = i+1;
        }
    }
    std::cout << str << " of length " << len << '\n';
    std::cout << "Reverse of the string: " << rev_str << '\n';

}
