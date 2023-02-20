#include <iostream>
#include <string>
#include <array>

using namespace std;

/*#5
 * int main(){
    string text;
    std::getline(std::cin,text);
    for (int i=0; i<text.length(); i++){
        if ((text[i]=='r') && (text[i+1]=='a') && (text[i+2]=='z')){
            std::cout<<"da"<<std::endl;
            break;
        }
        if (i==text.length()-1)
            std::cout<<"net"<<std::endl;
      }
    return 0;
}
*/

/*#9
 * int main(){
    int numb;
    string day;
    std::cin>>numb;
    if (numb>31)
        std::cout<<"Perehochesh";
    else{
        while(numb>7){
            numb-=7;
        }
        switch(numb){
            case 1:{
                std::cout<<"Ponedelnik";
                break;
            }
            case 2:{
                std::cout<<"Vtornik";
                break;
            }
            case 3:{
                std::cout<<"Sreda";
                break;
            }
            case 4:{
                std::cout<<"Chetverg";
                break;
        }
            case 5:{
                std::cout<<"Pytnizha";
                break;
        }
            case 6:{
                std::cout<<"Subbota";
                break;
        }
            case 7:{
                std::cout<<"Voskresenie";
                break;
        }

        }
    }
    return 0;
}
*/

/*#18
 * int main(){
    std::string text;
    std::getline(std::cin,text);
    int k;
    std::cin>>k;
    text.erase(k-1,1);
    std::cout<<text;
    return 0;
}
*/

int main(){
    string text;
    std::getline(std::cin,text);
    if ((text[0]=='a') && (text[1]=='b') && (text[2]=='c'))
        text.replace(0,3,"www");
    else
        text.append("zzz");
    std::cout<<text;
    return 0;
}

