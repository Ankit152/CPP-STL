// Given a string. Task is to remove consecutive duplicates in the string.
#include<iostream>
#include<stack>     // Header file for stack
using namespace std;

string remove(string &str){
    stack <char> s;     // declarartion of stack
    string ans = "";    // string to store the answer
    for(int i = 0; i < str.length(); i++){
        if(s.empty() || s.top() != str[i]){
            /* s.empty() is for only first character.
               If s.top() == str[i], then we don't 
               add it to our answer as it would cause 
               consecutive duplicates in the answer.
               We only add a character to our answer 
               when s.top() != str[i]
            */
            ans += str[i];
            s.push(str[i]);
        }
    }
    return ans;
}

int main(){
    string s1 = "aaaaabbbssaabbe";
    string s2 = "aaaaaaab";
    string s3 = "ababa";
    string s4 = "cccccc";
    cout<<s1<<" ---> "<<remove(s1)<<"\n";
    cout<<s2<<" ---> "<<remove(s2)<<"\n";
    cout<<s3<<" ---> "<<remove(s3)<<"\n";
    cout<<s4<<" ---> "<<remove(s4)<<"\n";
}