#include <iostream>
#include <string>

using namespace std;

char* a(const char* str);

int main()
{
    const char* str = "2654jj?7";
    //                 01234567
    
    a(str);
		
return 0;


}

char* a(const char* str){
    int ftr[6]={7,7,7,7,7,7};
    char fin[6]={'7','7','7','7','7','7'};
    ftr[0]=(int)str[0];
  for (int i=0; str[i] != '\0'; i++){ 
     ftr[i]=(int)str[i]-i;
     cout << (char)ftr[i];    
   }
   return fin;
}
 
