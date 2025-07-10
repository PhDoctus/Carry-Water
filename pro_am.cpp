#include <iostream>



int main()


{
    
    int age;
    std::cout << "Age: ";
    std::cin >> age;
    
    if (age < 18)
    std::cout << "You will play on the Pro-Am team\n";
    
    else
    
    {
        
    char gender;
    std::cout << "Gender: ";
    std::cin >> gender;
    
    if (gender == 'm' || gender == 'M')
    std::cout << "You will play on the men's team.\n";
    
    else
    std::cout << "You will play on the women's team.\n";
    
    }
    
    return 0;
}