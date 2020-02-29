#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &v);

int main(){
  vector <int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(3);
  nums.push_back(4);
  nums.push_back(4);
  nums.push_back(4);
  nums.push_back(5);
  nums.push_back(5);
  nums.push_back(6);
  nums.push_back(6);
  nums.push_back(6);


  int test = removeDuplicates(nums); //should return 6

  cout << "Final Array Size: " << test << endl;

  for(int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
  }

}

int removeDuplicates(vector<int> &v){
  int length = 1;
  for(int i = 1; v.size()!=length; i++){
    if(v[i] == v[i-1]){
      vector<int>::iterator ptr = v.begin();
      advance(ptr,i);
      v.erase(ptr);
      i--;
    }
    else{
      length++;
    }
  }
  return length;
}
