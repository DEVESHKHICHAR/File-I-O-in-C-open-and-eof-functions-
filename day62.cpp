#include <iostream>
using namespace std;
template < class t>
class vectoro{
    public:
      t* p;
      int size;
      vectoro( int a){
        size=a;
        p= new t[size];
      }
      t dotproduct( vectoro &v){
        t d;
        for(int i=0; i<size; i++){
            d+= this->p[i] * v.p[i];
        }
        cout<<d<<endl;
        return d;
      }

};
int main() {
    vectoro<int> v(3);
    v.p[0]=1;
    v.p[1]=2;
    v.p[2]=0;
    vectoro<int> v2(3);
    v2.p[0]=4;
    v2.p[1]=5;
    v2.p[2]=6;
    v.dotproduct( v2);
    vectoro<float> v3(3);
    v3.p[0]=1.4;
    v3.p[1]=2.3;
    v3.p[2]=0;
    vectoro<float> v4(3);
    v4.p[0]=4.90;
    v4.p[1]=5.34;
    v4.p[2]=6.56;
    v3.dotproduct( v4);
    return 0;
}