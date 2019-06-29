#include"lib.hpp"
string counterGame(long n) {
if(n==1){
    return "Richard";
}
auto count=0;
bitset<64> bits_of_n(n);
while (bits_of_n != 1) {
  if (bits_of_n.count() == 1) {
    bits_of_n=bits_of_n>>1;
}
else{
    int setbit=0;
    for(auto i=0;i<64;i++){
        if(bits_of_n[i]==true){
            setbit=i;
        }
    }
        bitset<sizeof(long)*8> sub(0);
        sub[setbit-1]=true;
        bits_of_n=bits_of_n.to_ulong()-sub.to_ulong();
    }
    count++;
}
if(count%2==0){
    return "Richard";
}
else
{
  return "Louise";
}
}
int main(){
    cout<<counterGame(1
    );
}

