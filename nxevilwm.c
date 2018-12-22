



#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
    printf( "HELLO EVILWM \n" ); 
    system( "pkill -9 jwm ; pkill -9 xbindkeys ; sleep 1s ; screen -d -m evilwm -fn fixed -bw 10 " ); 
    return 0; 
}  




