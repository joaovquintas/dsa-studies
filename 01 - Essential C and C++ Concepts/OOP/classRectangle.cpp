#include <iostream>

using namespace std;

class Rectangle{

private:
    int len;
    int br;
public:

    Rectangle(){
        len = 0;
        br = 0;
    }
    Rectangle(int l, int b){
        len = l;
        br = b;
    }
    int area(){
        return len*br;
    }
    int perimeter(){
        return 2*(len+br);
    }
    void setLen(int l){
        len = l;
    }
    void setBr(int b){
        br = b;
    }
    int getLen(){
        return len;
    }
    int getBr(){
        return br;
    }
    ~Rectangle(){
        cout<<"Destructor";
    }




};

int main(){

    Rectangle r(10,2);

    cout<<"Area "<<r.area()<<endl;
    cout<<"Perimeter "<<r.perimeter()<<endl;

    return 0;
}