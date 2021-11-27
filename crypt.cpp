#include <iostream>
using namespace std;

int main(){
int shift;

    int choice;
    cout<<"pls select crypt/decrypt/brute force(1/2/3 ?)";
    cin>> choice;
        switch(choice){
        case 1:
        {
        cout<<"pls enter the key: ";
        cin>>shift;
        string cry;
        cout<<"pls enter what you want to crypt: ";
        cin>>cry;
            for(int i=0;i<cry.length();i++)
            {
                int last=(((int)toupper(cry[i])-65+shift)%26+65);
                cout<<(char)last;
            }
        }
            break;

        case 2:
        {
        cout<<"pls enter the key: ";
        cin>>shift;
        string decry;
        cout<<"pls enter what you want to decrypt: ";
        cin>> decry;    
            for(int i=0;decry[i]!='\0';i++){
                int dlast=(((int)toupper(decry[i])-65-shift+26)%26+65);
                cout<<(char)dlast;

            }
        }
            break;
        
        case 3:
        {       string brute;
        cout<<"pls enter what you want to brute force: ";
        cin>> brute;    
            int bshift=1;
                for(int i=0;i<26;i++){
                for(int j=0;brute[j]!='\0';j++){
                int dblast=(((int)toupper(brute[j])-65+bshift)%26+65);
                cout<<(char)dblast;
            }
            cout<<" "<<bshift<<".try "<<endl;  
            cout<<endl<<endl;
            bshift=bshift+1;
            
           
            }
        break;    
        }
        
        }


    return 0;
}