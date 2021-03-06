//
// Created by Zhang,Weijian on 18/5/22.
//

/*
Given an input string, reverse the string word by word.

For example,
        Given s = "the sky is blue",
        return "blue is sky the".
debug:
        http://cpp.sh/
思路1：
    先将整个句子字符反转，然后将每个单词反转。（或者先将每个单词反转，然后将整个句子反转）
思路2：
    利用数组/栈，逆序将单词输出
*/

// Example program
#include <iostream>
#include <string>
void swapString(std::string &s, int begin, int end) {
    while(end > begin){
        char c = s[begin];
        s[begin] = s[end];
        s[end] = c;
        begin++;
        end--;
    }
}
void reverseWords(std::string &s) {
    //s = removeDuplicateSpace(s);

    int begin = 0;
    int end = 0;

    while(end < s.size()){
        if(s[end] == ' '){
            swapString(s, begin, end - 1);
            begin = end+1;
            end = begin;
        }
        else{
            end++;
        }
    }
    swapString(s, begin, end - 1);

    swapString(s, 0, s.size()-1);
}

int main()
{
    std::string name="What is   your name ";
    reverseWords(name);
    std::cout<< name << "!\n";
    // name your   is What!
}
