//A recurse is a function that can call itself

//STRUCTURE

#include <stdio.h>

void recurse () {

    //to prevent the function from calling itself infinitely, we use an if else condition

    if (/*condition*/)
    {
        //...
    }
    else {
        recurse();
    }

    /*recurse function body*/
    
}

int main() {
    //...
    recurse();
    //...
    return 0;
}