# references 
we use references for change the value of the variable
```c++
#include <cstdio>
using namespace std;
int main(){
    
    int x = 14;
    int &y=x;// the value dont supose to change

    printf("the value of x is %d\n",x);// obviously the value is 14
    
    y=12;
    
    // but see this , what happend ? 
    printf("the value of x is %d\n",x);
    printf("the value of y is %d\n",y);
    
    return 0 ;   
}
```

# primitive array


```c++
#include <cstdio>
using namespace std;
int main(){
    
    int a[5];
    a[0]=1;// we change the value
    *a=1;//this asign the value 1 to the posicion 0

    int *a2=a;//we asign the address of the array
    ++a2=a;//this increment the pointer  
    *a2=12;// this asign the value 12 to the posicion 1
    // and we can reduce that in this
    *(++a2)=13;
    return 0 ;   
}
```

# conditionals


So , in c++ we can use different types of forms for compare something like this example.

```c++
#include <iostream>

using namespace std;
int main(){
    int x = 1;
    int y = 0;
    cin >> x;
    cin >> y;
    if (true)
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



```
And it basically function because in c++ we can use `0` or  any number more greater than zero as if it were `true` or 'false`

And this part of the code `printf("%s\n",14>1 ? "hello":"world");` its another form to use a conditional and it basically funcions something like this
```
<condition> ? <true return this>: <else return this>
```

# integer types

|Type |	Storage size |	Value range |
|--|--|--|
|char	|1 byte	|-128 to 127 or 0 to 255|
|unsigned  char|	1 byte|	0 to 255|
|signed char	|1 byte |	-128 to 127|
|int	|2 or 4 bytes |	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647|
|unsigned int |	2 or 4 bytes	| 0 to 65,535 or 0 to 4,294,967,295|
|short	| 2 bytes	| -32,768 to 32,767|
|unsigned short |	2 bytes |	0 to 65,535|
|long	| 8 bytes or (4bytes for 32 bit OS)|	-9223372036854775808 to 9223372036854775807|
|unsigned long |	8 bytes	| 0 to 18446744073709551615|


[source](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)