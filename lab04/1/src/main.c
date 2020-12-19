int main(){
  int r=8;
  char sym='s';
  float rez;
  #define pi 3.14
 
    switch (sym) {
       case 'l' : rez= 2*pi*r;
         break;
       case 's': rez= pi*r*r;
         break;
       case 'v': rez= 4/3*pi*r*r*r;
         break;
      }
      
  return 0;
  }    
