#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &v);

int main(){
  vector <int> nums;



  int test = removeDuplicates(nums); //should return 6

  cout << "Final Array Size: " << test << endl;

  for(int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
  }

}

int removeDuplicates(vector<int> &v){
  int j = 0;//slow runner

  if(v.size()>0){
    for(int i = 1; i < v.size(); i++){ //i is fast runner
      if(v[i] != v[j]){
        j++;
        v[j]=v[i];
      }
    }
  } else {
    return 0;
  }
  return j+1;
}
