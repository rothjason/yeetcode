#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &v);

int main(){
  vector <int> nums;

  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(1);
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
  int j = 0;//slow runner
  for(int i = 1; i < v.size(); i++){ //i is fast runner
    if(v[j] != v[i]){
      j++;
      v[j]=v[i];
    }
  }
  return j+1;
}
