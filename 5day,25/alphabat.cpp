//   write a program to check chartersic is alphabate or not 
//   if it is alphabate  so tell us it upper alphabte or lower alphabate 
 
 #include <iostream>
 using namespace std;

 int main (){
    cout<<"Enter the chater " <<endl;
    char n;
    cin>>n;
    //a to z -> 97 to 122
    //A to Z -> 65 to 91

    int a = (int)n;
   
    if ((a >= 97 && a<=122)||(a >= 65 && a <=91))
    {
      cout <<"it is a alphabate"<<endl;
      if (a >= 97 && a<=122)
      {
        cout <<"it is a  lower alphabate"<<endl;
      }
      if (a >= 65 && a <=91)
      {
        cout <<"it is a  upper alphabate"<<endl;
      }
    }
    
     

 }