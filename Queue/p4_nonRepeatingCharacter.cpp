#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
char firstNonRepeatingCharacter(string str) {

  // Write your code here
 unordered_map<char, int> count;
 queue<char> q;
 char ans;
 for(int i = 0; i<str.length(); i++){
   char ch = str[i];
   count[ch]++;
   q.push(ch);
        while(!q.empty()){
        if(count[q.front()] > 1){
            q.pop();
        }
        else{
            ans= q.front();
            break;
        }
    }
  }
  cout<<"first non repeating chaaracter: "<<ans;
}
int  main(){
    string str = "azbdca";
    firstNonRepeatingCharacter(str);

}