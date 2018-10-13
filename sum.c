
	
	
	

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;
    int arr[100];
     int fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2],fd10[2];
     pipe(fd1);pipe(fd2);pipe(fd3);pipe(fd4);pipe(fd5);pipe(fd6);pipe(fd7);pipe(fd8);pipe(fd9);pipe(fd10);
     
     int cpid=fork();
    if(cpid==0){
            
          int i;
          
          int s=0;
          int e=100;
        
           for(i=s;i<e;i++){
              arr[i]=1;
              sum1=sum1+arr[i];
            
               }
  
          write(fd1[1],&sum1,sizeof(sum1));
             close (fd1[0]);
          }
     else{
           int cpid1=fork();
         if(cpid1==0){
           int i;
          
          int s=100;
          int e=200;
       
           for(i=s;i<e;i++){
            arr[i]=1;
              sum2=sum2+arr[i];
               }
  
          write(fd2[1],&sum2,sizeof(sum2));
             close (fd2[0]);
          }
          else{
           int cpid2=fork();
           if(cpid2==0){
           int i;
          
          int s=200;
          int e=300;
         
           for(i=s;i<e;i++){
            arr[i]=1;
              sum3=sum3+arr[i];
               }
              
          write(fd3[1],&sum3,sizeof(sum3));
              close (fd3[0]);
          }
           else{
           int cpid3=fork();
         if(cpid3==0){
           int i;
          
          int s=300;
          int e=400;
          
           for(i=s;i<e;i++){
            arr[i]=1;
              sum4=sum4+arr[i];
               }
               close (fd4[0]);
          write(fd4[1],&sum4,sizeof(sum4));
               close (fd4[0]);
          }
            else{
           int cpid4=fork();
         if(cpid4==0){
           int i;
          
          int s=400;
          int e=500;
         
           for(i=s;i<e;i++){
            arr[i]=1;
              sum5=sum5+arr[i];
               }
               
          write(fd5[1],&sum5,sizeof(sum5));
          close (fd5[0]);
          }
           else{
           int cpid5=fork();
         if(cpid5==0){
           int i;
          
          int s=500;
          int e=600;
       
           for(i=s;i<e;i++){
            arr[i]=1;
              sum6=sum6+arr[i];
               }
 
          write(fd6[1],&sum6,sizeof(sum6));
              close (fd6[0]);
          }
          else{
           int cpid6=fork();
         if(cpid6==0){
           int i;
          
          int s=600;
          int e=700;
         
           for(i=s;i<e;i++){
            arr[i]=1;
              sum7=sum7+arr[i];
               }
              
          write(fd7[1],&sum7,sizeof(sum7));
              close (fd7[0]);
          }
           else{
           int cpid7=fork();
         if(cpid7==0){
           int i;
          
          int s=700;
          int e=800;
        
           for(i=s;i<e;i++){
            arr[i]=1;
              sum8=sum8+arr[i];
               }
               
          write(fd8[1],&sum8,sizeof(sum8));
             close (fd8[0]);
          }
            else{
           int cpid8=fork();
         if(cpid8==0){
           int i;
          
          int s=800;
          int e=900;
     
           for(i=s;i<e;i++){
              arr[i]=1;
              sum9=sum9+arr[i];
               }
    
          write(fd9[1],&sum9,sizeof(sum9));
           close (fd9[0]);
          }
            else{
           int cpid9=fork();
         if(cpid9==0){
           int i;
          
          int s=900;
          int e=1000;
   
           for(i=s;i<e;i++){
              arr[i]=1;
              sum10=sum10+arr[i];
               }
  
          write(fd10[1],&sum10,sizeof(sum10));
             close (fd10[0]);
          }else{
            wait(NULL);wait(NULL);wait(NULL);wait(NULL);wait(NULL);wait(NULL);wait(NULL);wait(NULL);wait(NULL);wait(NULL);
             int sum;
            read(fd1[0],&sum1,sizeof(sum1));
         printf("child 1\n");
            
            read(fd2[0],&sum2,sizeof(sum2));
         printf("child 2\n");
            
            read(fd3[0],&sum3,sizeof(sum3));
        printf("child 3\n");
           
            read(fd4[0],&sum4,sizeof(sum4));
        printf("child 4\n");
           
            read(fd5[0],&sum5,sizeof(sum5));
        printf("child 5\n");
           
             read(fd6[0],&sum6,sizeof(sum6));
        printf("child 6\n");
            
            read(fd7[0],&sum7,sizeof(sum7));
               printf("child 7\n");
            
            read(fd8[0],&sum8,sizeof(sum8));
        printf("child 8\n");
            
            read(fd9[0],&sum9,sizeof(sum9));
        printf("child 9\n");
            
            read(fd10[0],&sum10,sizeof(sum10));
        printf("child 10\n");
            
            sum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
                   printf("parent\n");
           printf("s1:");
            printf("%d",sum1);
           close(fd1[1]);
             printf("s2:");
            printf("%d",sum2);close(fd2[1]);
              printf("s3:");
            printf("%d",sum3);close(fd3[1]);
             printf("s4:");
            printf("%d",sum4);close(fd4[1]);
             printf("s5:");
            printf("%d",sum5); close(fd5[1]);
            printf("s6:");
            printf("%d",sum6);close(fd6[1]);
             printf("s7:");
            printf("%d",sum7);close(fd7[1]);
              printf("s8:"); 
            printf("%d",sum8);close(fd8[1]);
             printf("s9:");
            printf("%d",sum9); close(fd9[1]);
             printf("s10:");
            printf("%d",sum10); close(fd10[1]);
       
            printf("sum:");
            printf("%d",sum);
            exit(0);
          }
            
       }}} }}} }}
           }
      return 0;}

