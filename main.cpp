#include <iostream>
#include <vector>
using namespace std;
int main() {
  int max, a=0;
  vector <int> myVector;
  myVector.push_back(12);
  myVector.push_back(-1000);
  myVector.push_back(20000);
  myVector.push_back(1900);
  myVector.push_back(-1970);
  max=*(myVector.begin());
  vector<int>::iterator it;
  for(it=myVector.begin(); it!=myVector.end(); it++){
    if(*it>=a){
      max=*it;
      a=*it;
    }
  }
  cout<<max<<endl;
}
