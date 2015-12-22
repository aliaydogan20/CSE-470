
#include<iostream>

using namespace std;

void caesarEncrypt (std::string cipher, int shift);


int main() 
{

    
    std::string cipher;
    int shift;

    cout<<"Enter text to be encrypted"<<endl;
    getline(std::cin,cipher);

    cout<<"How many shifts do you prefer? 1-10 only: "<<endl;
    cin>>shift;

    caesarEncrypt(cipher,shift);
    
    return 0;
}


void caesarEncrypt (std::string cipher, int shift) 
{
  int i = 0;

  while (cipher[i] != '\0') {
    if ((cipher[i]) >= 65 && (cipher[i]+shift) <= 90
       ||((cipher[i]) >= 97 && (cipher[i]+shift) <= 122)){
      cipher[i] += (shift);
    } else {
      cipher[i] += (shift -25); 
    }
    
    i++;
  }
  
  cout<<cipher;
}
