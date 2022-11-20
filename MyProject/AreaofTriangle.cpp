#include<iostream>

int trianglearea()
{
    int b,h,area;
    std::cout<<"Enter base and height";
    std::cin>>b>>h;
    area=float((b*h)/2);
    std::cout<<"Area of Triangle is: "<<(float)area;
    return 0;

}
