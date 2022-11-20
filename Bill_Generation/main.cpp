#include <iostream>

using namespace std;

int main()
{
    int pizza,puffs,drinks;
    int cost;
    cout<<"Enter no. of pizzas bought"<<endl;
    cin>>pizza;
    cout<<"Enter no. of puffs bought"<<endl;
    cin>>puffs;
    cout<<"Enter no. of cool drinks bought"<<endl;
    cin>>drinks;
    cout<<"Bill Details"<<endl;
    cout<<"No. of Pizza ="<<pizza<<endl;
    cout<<"No. of Puffs ="<<puffs<<endl;
    cout<<"No. of Cool drinks ="<<drinks<<endl;
    cost=pizza*100+puffs*20+drinks*10;
    cout<<"Total Price = "<<cost<<endl;
    cout<<"ENJOY THE SHOW!"<<endl;
    return 0;
}
