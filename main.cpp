#include <iostream>
#include <cstdlib>
#include <ctime>

int generateNumber() {
   return rand();
}

std::string passowrdGenerator(int length){
std::string password = "";
std::string allLetters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
for(int i = 0; i < length; i++){
 int randomIndex= generateNumber() % allLetters.length();
 password.push_back(allLetters[randomIndex]);  
}
return password;

}
int main(){
    srand(time(0));
    std::string newPassword = passowrdGenerator(12);
    std::cout<<"your new password is "<<newPassword << std::endl;
    return 0;
}

