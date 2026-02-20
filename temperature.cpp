#include<iostream>

int main(){
    double const caltofah= 9.0/5.0;
    double const fahtocal= 5.0/9.0;
    int choice;
    float cel,fah;

    while(true){
        std::cout<<"1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Exit" ;
        std::cout<<"\nEnter your choice (1-3): ";
        std::cin>>choice;
        
        if(choice==1){
            std::cout<<"Enter temprature in Celsius: ";
            std::cin>>cel;
            fah=(cel*caltofah)+32;
            std::cout<<cel<<" C = "<<fah <<" F\n\n";
        }

        else if(choice==2){
            std::cout<<"Enter temperature in Fahrenheit: ";
            std::cin>>fah;
            cel=(fah-32)*fahtocal;
            std::cout<<fah<<"F = "<<cel<<"C\n\n";
        }

        else if(choice==3){
            std::cout<<"Exiting temperature converter.\n";
            return 0;
        }

        else{
            std::cout<<"Invalid choice. Please try again.\n\n";
        }
        
    }

}