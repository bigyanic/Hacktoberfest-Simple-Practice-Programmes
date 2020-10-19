#include<iostream>
//#include<sushilgyawali.h>
int celi(float x);
int floor(float x);

using namespace std;
int check_no(float x);
int main(){
    float x;
    cout<<"input the no you like: "<<endl;
    cin>>x;
    cout<<"celi is: "<<celi(x)<<endl;
    cout<<"floor is : "<<floor(x)<<endl;
    

}

int celi(float x){
    if(x>0){
        if(check_no(x) == 1){
            return int(x);
        }
        else
        {
            return int(x)+1;
        }
        
    }
    else if(x == 0)
    {
        return 0;
    }
    else
    {
        if(check_no(x)==1){
            return x ;
        }
        else
        {
            return int(x);
        }
        
    }
    
    

}

int floor(float x){
    if(x>0){
        if(check_no(x) == 1){
            return int(x);
        }
        else
        {
            return x-(abs(x) - int(x));
        }
        
    }
    else if(x == 0)
    {
        return 0;
    }
    else
    {
        if(check_no(x)==1){
            return x ;
        }
        else
        {
            return x+(abs(x)-(int(abs(x))+1));
        }
        
    }
     
    
}


//check fucntion to check wether the no is float or integer
// i set if no is integer return 1, else 0
int check_no(float x)
{
    
    if((abs(int(x))-abs(x))==0){
        return 1;
        
    }
   
    else
    {
        return 0;
    }
    
}
