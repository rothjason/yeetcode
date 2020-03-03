#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char> &s);

int main(){
vector <char> word;
  word.push_back('J');
  word.push_back('a');
  word.push_back('s');
  word.push_back('o');
  word.push_back('n');


  for(int i = 0; i < word.size(); i++){
    cout << word[i];
  }


  cout << endl;

  reverseString(word);


  for(int i = 0; i < word.size(); i++){
    cout << word[i];
  }

  cout << endl;


}

void reverseString(vector<char> &s){
  int i = 0;
  int j = s.size()-1;
  while(i < j){
    char temp;
    temp = s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
  }

}
