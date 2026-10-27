#include<stdio.h>

// int main(){
//            for(int i=1; i<=5; i++){
//                       for(int c=1; c<=5; c++){
//                                  printf("1");
//                       }
//                       printf("\n");
//            }
// }



// int main(){
//            for(int i=1; i<=5; i++){
//                       for(int c=1; c<=5; c++){
//                                  if(c==1 || c==3 || c==5){
//                                             printf("1");
//                                  }else{
//                                             printf("0");
//                                  }
//                       }
//                       printf("\n");
//            }
// }


// int main(){
//            for(int i=1; i<=5; i++){
//                       for(int c=1; c<=5; c++){
//                                  if((i+c)%2 == 0){
//                                             printf("1");
//                                  }else{
//                                             printf("0");
//                                  }
//                       }
//                       printf("\n");
//            }
// }


//patern - 9

// int main(){
//            for(int i=1; i<=5; i++){
//                       for(int c=1; c<=5; c++){
//                                  if((i==1 && (c==2 || c==3|| c==4)) || (i==5 && (c==2|| c==3 || c==4)) || (c==1 && (i==2 || i==3|| i==4))
//                       || (c==5 && (i==2 || i==3 || i==4))){
//                                             printf("1");
//                                  }else{
//                                             printf("0");
//                                  }
//                       }
//                       printf("\n");
//            }
// }


// Q - 11

// int main(){
//            for(int i=1; i<=5; i++){
//                       for(int c=1; c<=5; c++){
//                                  printf("%d",c);
//                       }
//                       printf("\n");
//            }
// }






int main(){
           for(int i=1; i<=5; i++){
                      for(int c=1; c<=5; c++){
                                 for(int i=1; i<10; i++){
                                            printf("%d",i);
                                 }
                      }
                      printf("\n");
           }
}