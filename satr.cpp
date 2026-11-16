#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> vac={1,2,4,5,66,0};

vector<int> vec (15,90);
cout<<vac[0]<<endl;
cout<<vac[1]<<endl;
cout<<vac[2]<<endl;
cout<<vac[3]<<endl;
cout<<vac[4]<<endl;
cout<<vac[5]<<endl;
cout<<"wm"<<endl;
for(int i:vec){
    cout<<i<<endl;
}
cout<<"size ="<<vac.size()<<endl;;

vac.push_back(23);

cout<<"size ="<<vac.size()<<endl;

 for(int i:vac){
    cout<<i<<endl;
}
vac.pop_back();
 for(int i:vac){
    cout<<i<<endl;
}
cout<<vac.at(3);

return 0;
}
