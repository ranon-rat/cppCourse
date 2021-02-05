#include <iostream>

using namespace std;
int main(){
    int x = 1;
    int y = 0;
    cin >> x;
    cin >> y;
    if (x>y)
    {
        cout << "x is more bigger than y"<<endl;
    }
    else
    {
        cout << "x is more smaller than y" << endl;
    }

    if(1){//do some stuff
    }else{
        // do other things
    }
      
    // another form to do a conditional
    cout<<(x<y ? "y is more bigger":"x is more bigger") << endl;
    return 0 ; 
}