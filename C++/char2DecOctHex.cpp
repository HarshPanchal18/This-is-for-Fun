#include<iostream>

using namespace std;

int main(){
    for(char c;cin>>c;)
    {
        cout<<"Decimal: "<<dec<<(int)c<<endl;
        cout<<"Octal: "<<oct<<(int)c<<endl;
        cout<<"Hex: "<<hex<<(int)c<<endl;
        cout<<endl;
    }

    /* // Int2Char
       for (int i; std::cin >> i;)
       std::cout << (char)i << '\n';
       */
}
