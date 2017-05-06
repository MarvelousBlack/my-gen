#include <stdio.h>
#include <time.h>          
#include <stdlib.h>
 
int main( void )
{
  int temresult[19];
  int temmun = -1;
  int result = -1;
  int i;
  
  srand( (unsigned)time( NULL ) );          //初始化随机数
     for( i = 0; i < 18;i++ )
		 temresult[i+1] =rand()%(1-0+1)+0;
	 for( i = 0; i < 6;i++ ){
		 temmun=temresult[i*3+1]+temresult[i*3+2]+temresult[i*3+3];
		  switch(temmun)

{

    case 0:

             printf("6");

            break;

    case 1:
            printf("8");

           break;

    case 2:

           printf("7");

          break;

		  
	case 3:
    
             printf("9");

            break;
	default:

           printf("default");

          break;

}
	 }
	printf("\n");
	return 0;
		  
}