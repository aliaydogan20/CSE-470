
#include<iostream>


using namespace std;

void caesarDecrypt (std::string cipher, int shift);

int main() 
{
    std::string cipher;
    int shift;

    cout<<"Enter text to be decrypted"<<endl;
    getline(std::cin,cipher);
    
    
    cout<<"How many shifts do you prefer? 1-10 only:"<<endl;
    cin>>shift;
    
    caesarDecrypt(cipher,shift);
    
    return 0;
}


void caesarDecrypt (std::string cipher, int shift) 
{
  int i = 0;

  while (cipher[i] != '\0') {
    if ((cipher[i]-shift) >= 65 && (cipher[i]) <= 90
       ||((cipher[i]-shift)>= 97 && (cipher[i]) <= 122)) 
    {
      cipher[i] -= (shift);
    } else {
      cipher[i] += (26-shift); 
    }
    
    i++;
  }
  
  cout<<cipher;
}
