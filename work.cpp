#include <iostream>
#include<iomanip>
using namespace std;


int main() {
        float ans;
        float a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        ans=(a+b+c+d+e)/5;
        cout << fixed << setprecision(2) << ans ;
        return 0;
}