#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    char test[]{"abcdcba"};
    char test2[]{"abcafdhjsgd"};
    cout<<isPalindrome(test)<<endl;
    cout<<isPalindrome(test2)<<endl;
}