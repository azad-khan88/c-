#include<iostream>
#include<thread>
using namespace std;

int dosum(int &&a){
    int sum=0;
    int i=0;
    while(i<=100){
        sum+=i++;
    }
    return sum;
}
int main(){
    thread t1([](){for(auto i=0;i<10;i++){
        cout<<i<<endl;
    }}
    );
    t1.join();

return 0;
}