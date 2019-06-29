#include"lib.hpp"
void vec(){

vector<int> v{1,2,3,4,5};

/*Binary search 
works on the sorted elements like above */
cout<<binary_search(v.begin(),v.end(),3);

//all_of
bool result;
result=all_of(v.begin(),v.end(),[](int x){ return x>0;});
cout<<endl<<result;

//any_of
result=any_of(v.begin(),v.end(),[](int x){ return x>0;});
cout<<endl<<result;

{
    auto res=find(v.begin(),v.end(),4);
    cout<<" "<<*res<<endl;
}

{
    auto res=find_if(v.begin(),v.end(),[](int x){ return (x % 2 == 0);});
    cout<<" "<<*res<<endl;
}

{
    auto res=find_if_not(v.begin(),v.end(),[](int x){return(x%2==0);});
    cout<<" "<<*res<<endl;
}

{
    vector<int> findthis{3,4};
    auto res=find_end(v.begin(),v.end(),findthis.begin(),findthis.end());
    if(res!=v.end()){
        cout<<"Sequence found at "<<*res;
    }
}

{
    auto res=count(v.begin(),v.end(),2);
    cout<<" "<<res<<endl;
}
{
    vector<int> v2{1,2,3,4,5,6};
    auto res=equal(v2.begin(),v2.end()-1,v.begin());
    cout<<" "<<res<<endl;
}

{
    vector<int> findthis{3,4};
    auto res=search(v.begin(),v.end(),findthis.begin(),findthis.end());
    if(res!=v.end()){
        cout<<"Sequence found at "<<*res;
    }
}
}

void heap(){
    vector<int> v{1,2,3,5,6,8,23,45,12,14};
    make_heap(v.begin(),v.end());
    while(!v.empty()){
        cout<<v.front()<<" ";
        v.pop_back();
        pop_heap(v.begin(),v.end());
    }
}
string s;
int main(){
    heap();
    return 0;
}