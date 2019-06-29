#include"lib.hpp"
using namespace std;

int main(){
    unordered_set<int> numbers;
    vector<int> v;
    for(auto i=0;i<100;i++){
        v.push_back(i*100);
    }

    numbers.insert(v.begin(),v.end());
    cout<<numbers.bucket_count();
    // for(auto itm:numbers){
    //     cout<<itm<<" ";
    // }
    cout<<endl;
}