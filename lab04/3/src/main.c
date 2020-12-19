int main() {
  
  int a=7;
  int b=25;
  int c=21;
  int d;
  
 if (a<b && a<c) {
   a;
   } else if (a>b && a<c){
     d=a;
     a=b;
     b=a;
    } else if (a<b && a>c) {
       d=a;
       a=c;
       c=a;
      } else if (a>b && a>c){
         if (b>c){
          d=a;
          a=c;
          c=d;
         } else if (b<c){
            d=a;
            a=b;
            b=d;
           } 
        } if (b>c){
           d=c;
           c=b;
           b=d;
           
        } else {
   // error
        }
         if (a<b<c) {
          d=0;
        }
  return 0;
}

