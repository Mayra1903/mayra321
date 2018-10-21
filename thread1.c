#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define tsize 10
#define arrsize 1000


int  array[arrsize];
int tmp[tsize];
 int i,j,s;
  
void *sum(void* arg){


     for(i=0;i<tsize;i++){
         s=0;
         for(j=i*100;j<(i+1)*100;j++){
          s= s+array[j];
                   }
             tmp[i]=s;
      
       }
}


 int main(){
    
  pthread_t thread_t[tsize];
  int s1;
    for(i=0;i<arrsize;i++){
       array[i]=i;
 }
    s1=0;
    for(i=0;i<tsize;i++){
       pthread_create(&thread_t[i],NULL,sum,(void*)NULL);
       }
    for(i=0;i<tsize;i++){
       pthread_join(thread_t[i],NULL);
       }
    for(i=0;i<tsize;i++){
       s1=tmp[i];
      
       printf("%d(subsum)",s1);
   }
      s1=0;
    for(i=0;i<tsize;i++){
       s1=s1+tmp[i];
      }
      printf("\n");
      printf("%d(toal sum)",s1);


return 0;
   
}







