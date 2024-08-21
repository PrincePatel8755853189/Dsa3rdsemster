#include <iostream> 
using namespace std;
class player{
    private :
        int health;
        int age ;
        int score;
        bool alive ;

    public :

    int gethealth(){
    return health;
}

    int getage(){
    return age;
}

    int getscore(){
    return score;
}
    int IsAlive(){
    return alive;
}

 
    void setage(int age ){
    this->age =  age;
}

    void setscore(int score ){
    this ->score = score;
}

   void sethealth(int health) {
            this->health = health;
        }

    void setIsAlive(bool alive ){
    this ->alive = alive;

    }


};


// void add(int a, int b){
//     cout<<a+b;
// }
 
   void addscore(player a , player b){
    return a.getscore()  + b.getscore();

   }
int main (){

    player nithesh ; //object is creation , satatically 
    player neeraj ; 

    nithesh.setage(21);
     nithesh.setscore(100);
      nithesh.setIsAlive(true);
       nithesh.sethealth(70);

 neeraj.setage(22);
     neeraj.setscore(22);
      neeraj.setIsAlive(true);
       neeraj.sethealth(100);

  cout << addscore(nithesh , neeraj);
}