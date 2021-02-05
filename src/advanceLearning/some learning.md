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

# floating types


| Type Name	| 32–bit Size	|64–bit Size|
|--|--|--|
| float	 |4 bytes	        |4 bytes|
| double |	8 bytes	        |8 bytes|
| long double |	16 bytes	|16 bytes|

[source](https://docs.oracle.com/cd/E19253-01/817-6223/chp-typeopexpr-2/index.html)

# static

in c++ we use `static` for dont change the address of a memory how in this example
```c++
#include <iostream>
using namespace std;

int func(){
    static int i =0;
    return ++i ;

}
int main(){
    cout<<func() <<endl;
    cout<<func() <<endl;
    cout<<func() <<endl;
    cout<<func() <<endl;
    cout<<func() <<endl;
}
```

so the value every time we change the value, in the other variables that use it again the value will change( sorry for not communicating very well)


# structured data

If you programm with javascript,golang or python maybe you can see some 
similarities.First we need to define the structure
```c++
#include <iostream>
using namespace std;
struct helloworld{
    char hello[];
    char world[];
};
int main(){
    helloworld h ={"hello","world"}
    cout<<h.hello<<h.world<<endl;
    return 0;    
}
```
its base on position of the value

# bit fields

bit fields its more for structured data and for that kind of things

```c++
#include <iostream>
using namespace std;
struct day{
    bool good_day:1;
    int food:2;
};
int main(){
    day h;
    cout<<h.food<<h.good_day<<endl;
    return 0;    
}
```

# unions

The unions is for have a data structure who they gona have the same memory size
```c++
#include <iostream>
using namespace std;
union day{
    bool good_day;
    int food;
};
int main(){
    day h;
    h.good_day=true;
    h.food=14;
    cout<<h.food<<h.good_day<<endl;
    return 0;    
}
```
# typedef

It's a way to give a type a aleas
```c++
#include <iostream>
using namespace std;
typedef string word;
int main(){
    word hello="hello world";
    cout<<hello<<endl;
    return 0;    
}
```

# auto type

its for define a type of variable automatically
```c++
#include <iostream>
using namespace std;
int func(){
    return 14;
}
int main(){
    auto x = func();
    cout<<x<<endl;
    return 0;    
}
```

asd
this is a change