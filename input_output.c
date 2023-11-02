/*============================output=================================
=====================================================================*/
#include <stdio.h>
void demo(void)
{ 
     unsigned int x = 80 ;
     int y = 50;
     if(y > 10 +x)
     { printf("Greater than 10"); 
     } 
    else 
    { printf("Less than or equals 10"); 
    }
}
int main() {
    demo();  //Less than or equals 10
    return 0;
}

/*============================output=================================
=====================================================================*/

// Online C compiler to run C program online
#include <stdio.h>
void demo(void)
{ 
     unsigned int x = 20 ;
     int y = -50;
     int z = x+y;
     if(z > 10)
     { printf("Greater than 10"); 
     } 
    else 
    { printf("Less than or equals 10"); 
    }
}
int main() {
    demo(); //Less than or equals 10
    return 0;
}

/*============================output=================================
=====================================================================*/
// Online C compiler to run C program online
#include <stdio.h>
void demo(void)
{ 
     unsigned int x = 20 ;
     int y = -50;
     if(x+y > 10)
     { printf("Greater than 10"); 
     } 
    else 
    { printf("Less than or equals 10"); 
    }
}
int main() {
    demo(); //Greater than 10
    return 0;
}
