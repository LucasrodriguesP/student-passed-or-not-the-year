
#include <iostream>


using namespace std;



int main()


{
    

double nota1, nota2, nota3, media;


    
    cout<<"insira sua nota 1:" ;
    
        cin>> (nota1);
    

        cout<<"insira sua nota 2:" ;
    
        cin>> (nota2);
    

       cout<<"insira sua nota 3:" ;
   
       cin>> (nota3);
    

    
       media = (nota3 + nota2 + nota1) / 3;
    
   
 
       if (media >= 6)
       
     
               cout <<"voce passou com:"<< media;

       
      else 
       
               cout<<"voce nao passou com:"<< media;
    
  
  
   
 return 0;

}