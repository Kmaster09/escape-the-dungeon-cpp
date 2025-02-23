#include <iostream> 

struct Player{
    std::string name;  
    int health;        
    int xp;           
};


int main()
{
    std::cout << "Welcome to Escape the Dungeon You find yourself trapped in a dark dungeon. Your mission is to find a way out!" << std::endl;

    
    Player player;
    player.health = 100; 


    std::cout << "Please enter your name: ";
    std::cin >> player.name;

    
    std::cout << "Welcome " << player.name << " to The Dungeon" << std::endl;

    
    int choice;
    
    int nestedChoice;

    
    bool exploring = true;
    
    while(exploring) {

        
        std::cout << "Where will our Great " << player.name << " go next?" << std::endl;
        std::cout << "1. Move left" << std::endl;
        std::cout << "2. Move Right" << std::endl;
        std::cout << "3. Go Downstars" << std::endl;
        std::cout << "Please enter your choice: ";
        
        std::cin >> choice;

        
        switch(choice) {
            
            case 1:
                std::cout << "You went to the left in the dark with a lighter but suddley a bear apperd and have devored you." << std::endl;
                break;
            
            case 2:
                std::cout << "You went to the Right and found a deadend you went back where you started." << std::endl;
                break;
            
            case 3:
                std::cout << player.name << " Went down stars. Despite feeling scared " << player.name << " have found the light a door so they went to the door but there are traps in the way. Whats your move: " << std::endl;
                std::cout << "1. Goes back? " << std::endl;
                std::cout << "2. Go for the Door and jump over the traps? " << std::endl;
                std::cout << "0? " << std::endl;
                std::cout << "Please Make your Desion Great One: ";

                
                std::cin >> nestedChoice;

            
                if (nestedChoice == 1)
                {
                    std::cout << "So you went back to find another way to escape but there was a bear it jump at, " << player.name << "Making it a game over " << std::endl;
                }
                
                else if (nestedChoice == 2)
                {
                    std::cout << "So our Great " << player.name
                            << " Jumps over and doges every trap. They made it and have escape the dungeon "
                            << std::endl;
                }
                if (nestedChoice == 0 )
                {
                    std::cout << "....Oh Hi you found this path " << player.name << "So you want something?.... Go watch my favorite animal channel the urben rescue ranch it's where i get my profile in github its nothing bad just a dude name uncle ben taking care all kinds of animals. " << std::endl;
                }
                break;
            
            case 4:
                exploring = false;
                break;
            
            default:
                std::cout << "You did not enter the number that was available Please enter the number that can be typed" << std::endl;
                continue; 
        }
    }

    return 0;
}


    





































