#include <iostream>

int main(){
    
    char play_again;

    do {
    
        int user = 0;
        int user_end = 0;
        
        // The Begining of the Story (Intro)
        std::cout << "The Carp and the Mountain of Dragons\n";

        std::cout << "In a small river nestled between towering cliffs, a humble carp named Koi gazed longingly at the distant mountaintop.\n";
        
        std::cout << "It was said that at the summit, a magical waterfall flowed—the Dragon's Gate. Any carp strong and brave enough to swim\n";
        
        std::cout << "through it would transform into a mighty dragon. Koi, tired of the quiet river life, decided to chase this dream.\n";
        
        std::cout << "With courage in its heart and scales glistening in the sunlight, Koi began its journey upstream toward the mountain.\n";

        std::cout << std::endl;
        
    //----------------------------------------------------------------------------------------------------------------------------------------------------------   
        //First Branch 
        std::cout << "As Koi swam against the current, it came across a large boulder blocking the river's path. Around the boulder, two routes emerged:\n";
        std::cout << "1. Go Over the Boulder: The way over seemed daunting, requiring a risky leap.\n";
        std::cout << "2. Go Around the Boulder: The calmer route was longer but appeared safer.\n";
        std::cout << std::endl;
        
        std::cout << "What will you choose? (Choose 1 for option 1 and 2 for option 2)\n";
        
        std::cin >> user;

        
        //First Branch Result  
        if (user == 1) { // Branch 1 choice 1 result 
            
            std::cout << std::endl;
            std::cout << "You chose to Go Over the Boulder:\n";
            std::cout << "Koi mustered all its strength and leapt over the boulder. It slipped and nearly fell back into the current,\n"; 
            std::cout << "but after several attempts, it made it over. Exhausted but determined, Koi gained confidence in its resolve.\n";
            std::cout << std::endl;

            user_end += 1;

        } else if (user == 2) { // Branch 1 choice 2 result 
            
            std::cout << std::endl;
            std::cout << "You chose to Go Around the Boulder:\n";
            std::cout << "Koi took the long way around. The water was calm, but a hungry heron appeared, spotting the carp in the open waters.\n"; 
            std::cout << "Koi darted through reeds, narrowly escaping the heron’s beak. Shaken but alive, Koi continued upstream.\n";
            std::cout << std::endl;
            user_end += 2;

        } else {

            std::cout << "Invalid Input.";

            return 0;
        }

    //---------------------------------------------------------------------------------------------------------------------------------------------------------- 
        // Second Branch 
        std::cout << "Further upstream, the river split into two paths:\n";
        std::cout << "1. Take the Shallow Stream: A shallow and rocky path where the current was stronger.\n";
        std::cout << "2. Take the Dark Tunnel: A deep, dark tunnel where the water disappeared into a cave.\n";
        std::cout << std::endl;

        std::cout << "What will you choose? (Choose 1 for option 1 and 2 for option 2)\n";

        std::cin >> user;


        // Second Branch Result 
        if (user == 1) { // Branch 2 Choice 1
            
            std::cout << std::endl;
            std::cout << "You chose to Take the Shallow Stream: \n";
            std::cout << "The shallow stream was harsh. Koi scraped its scales on sharp rocks and was nearly\n"; 
            std::cout << "swept backward. However, it discovered a small pool with glowing moss that healed its wounds and gave it renewed energy.\n";
            std::cout << std::endl;

            if (user_end == 1) {

                user_end += 2; // AA

            } else if (user_end == 2) {

                user_end += 8; // BA

            } else {
                
                return 1;

            }

        } else if (user == 2) { // Branch 2 Choice 2
            
            std::cout << std::endl;
            std::cout << "You chose to Take the Dark Tunnel\n";
            std::cout << "The tunnel was eerie, and Koi swam cautiously in the dim light. Deep within,\n"; 
            std::cout << "it encountered a blind catfish guardian who blocked the way. The catfish demanded a riddle be answered before Koi could pass:\n";
            std::cout << std::endl;
            std::cout << "\"What has no mouth but speaks, has no wings but flies, and no eyes but cries?\"\n";
            std::cout << std::endl;
            std::cout << "If Koi answered \"a river,\" the catfish allowed it to pass, praising its wisdom. If Koi failed, the catfish sent it back to the fork,\n"; 
            std::cout << "forcing it to choose the shallow stream.\n";
            std::cout << std::endl;

            if (user_end == 1) {

                user_end += 4; // AB

            } else if (user_end == 2) {

                user_end += 6; // BB

            } else {
                
                return 1;

            }

        } else {

            std::cout << "Invalid Input.";
            
            return 0;

        }
    //---------------------------------------------------------------------------------------------------------------------------------------------------------- 
        // Third Branch 
        std::cout << "Finally, Koi reached the base of the mountain where the Dragon’s Gate stood. The waterfall roared, pouring into a deep whirlpool.\n"; 
        std::cout << "At the edge, an old turtle approached Koi and said:\n";
        std::cout << std::endl;
        std::cout << "\"To pass through the Dragon’s Gate, you must prove your worth. I can grant you one boon, but you must choose wisely.\"\n";
        std::cout << std::endl;

        std::cout << "The turtle offered two options:\n";
        std::cout << "1. A Stronger Body: Koi would gain great strength to leap through the waterfall.\n"; 
        std::cout << "2. A Clearer Mind: Koi would gain heightened awareness and wisdom to find a way through.\n";

        std::cin >> user; 

        // Adding all the possibilities so it can be easier to sort the ending 
        if (user == 1) {

            std::cout << "You chose A Stronger Body: \n";
            
            if (user_end == 3)  {

                user_end += 3; // AAA

            } else if (user_end == 5 ) {

                user_end += 9; // ABA

            } else if (user_end == 10 ) {

                user_end += 21; // BAA

            } else if ( user_end == 8 ) {

                user_end += 15; // BBA

            } else {

                return 1;

            }


        } else if (user == 2){
            
            std::cout << "You chose A Clearer Mind: \n";
            
            if ( user_end == 3) {

                user_end += 6; // AAB

            } else if ( user_end == 5 ) {

                user_end += 12; // ABB

            } else if ( user_end == 10 ) {

                user_end += 24; // BAB

            } else if ( user_end == 8 ) {

                user_end += 18; // BBB

            } else {

                return 1;

            }


        } else {

            return 0;

        }

    //---------------------------------------------------------------------------------------------------------------------------------------------------------- 
        // Sorting Endings 
        if ( user_end == 6 || user_end == 23 ) { //First Ending 

            std::cout << std::endl;
            std::cout << "With newfound strength, Koi leapt into the raging waters. The current pushed it back again and again, but Koi’s determination matched\n"; 
            std::cout << "its physical power. After one final leap, it broke through the torrent and emerged on the other side—transformed into a radiant dragon.\n";
            std::cout << "Now a powerful dragon, Koi soared above the mountain and became a guardian of the rivers, ensuring no carp faced unnecessary challenges in their journeys.\n";
            std::cout << std::endl;

        } else if ( user_end == 9 || user_end == 26 ) { // Second Ending 

            std::cout << std::endl;
            std::cout << "With clarity of mind, Koi studied the waterfall carefully. It noticed a small crevice along the edge where the current was weaker.\n"; 
            std::cout << "Timing its movements perfectly, Koi swam through the crevice and reached the top—becoming a dragon through wit and strategy.\n";
            std::cout << "Now a wise dragon, Koi traveled the world, teaching other creatures that patience and observation can overcome even the mightiest obstacles.\n";
            std::cout << std::endl;

        } else if ( user_end == 14 || user_end == 31 ) { // Death Ending 
            
            std::cout << std::endl;
            std::cout << "Determined to rely solely on its willpower, Koi refuses the turtle's help. With courage blazing in its heart, Koi leaps toward the rushing waterfall.\n"; 
            std::cout << "The current is overwhelming, far more powerful than anything Koi has faced before. The waters crash down, slamming Koi into the rocks below. Weakened but refusing to give up,\n"; 
            std::cout << "Koi attempts the leap again and again, each time falling harder, until it can no longer move.\n";
            std::cout << std::endl;
            std::cout << "As Koi lies at the bottom of the river, its vision fading, it gazes up at the waterfall and whispers, \"Even if I failed, I tried.\"\n";
            std::cout << "The mountain river carries Koi's body downstream, its spirit becoming part of the flowing waters. Legend says that on quiet nights, the river murmurs encouragement to other carp attempting the journey, as if Koi’s spirit still cheers them on.\n";
            std::cout << std::endl;

        } else if ( user_end == 17 || user_end == 34 ) { // Third Ending 

            std::cout << std::endl;
            std::cout << "Koi, grateful but determined to rely only on its own strength, refused the turtle’s boon and attempted the waterfall unaided.\n"; 
            std::cout << "The current proved too strong, and Koi was swept back to the base of the mountain.However, instead of giving up, Koi chose to stay in the river,\n"; 
            std::cout << "guiding other young carp toward their dreams. Though it never became a dragon, Koi was remembered as a selfless hero who inspired countless others to reach for greatness.\n";
            std::cout << std::endl;

        } else {

            return 0;

        }

    //---------------------------------------------------------------------------------------------------------------------------------------------------------- 
        // Conclusion 

        std::cout << "Whether through power, wisdom, or sacrifice, Koi’s choices shaped its destiny. In each path,\n"; 
        std::cout << "Koi discovered that greatness is not only about reaching the summit but also about the journey and the lives touched along the way.\n";
        std::cout << std::endl;

        // Replay Option
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> play_again;

    } while ( play_again == 'y' || play_again == 'Y' );

    std::cout << "Thank You for reading!\n";
    

    
    
    
    
    return 0;
}