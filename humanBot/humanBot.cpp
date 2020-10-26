

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <boost/algorithm/string.hpp>    
using namespace std;
string humanName;

int humanBot()
{
    cout << endl << "This is the human bot" << endl;
    cout << endl << "Press any key after each line to continue the story." << endl;

    cout << humanName + " wakes up." << endl;
    _getch();
    cout << humanName + " looks around the room." << endl;
    _getch();
    cout << humanName + " wonders what he should do." << endl;
    _getch();
    cout << humanName + " goes right to his computer chair, turns on the computer, and sits down." << endl;
    _getch();
    cout << humanName + " checks his email, checks social media, then comes to a point where he's bored." << endl;
    _getch();
    cout << humanName + " wonders if he should eat something, but then thinks about what homework he has to do, and what the deadline is" << endl;
    _getch();
    cout << humanName + " starts sporadically getting overwhelmed by the deadline, his lack of motivation, and his lack of escape from it all." << endl;
    _getch();
    cout << humanName + " does not smoke,drink, or have sex. His only desire is food." << endl;
    _getch();
    cout << humanName + " decides to go on a bike ride." << endl;
    _getch();
    cout << humanName + " gets back, and starts playing GTA 5." << endl;
    _getch();
    cout << humanName + " takes a shower, then gets something to eat, then drinks some water." << endl;
    _getch();
    cout << humanName + " is thinking about what to do next. He says hello to his family and hangs out with them for a bit." << endl;
    _getch();
    cout << humanName + " omes back to his room and wants to go to sleep. But he has homework due soon, so he does that." << endl;
    _getch();
    cout << humanName + " wonders what he can do as an escape. He usually plays league of legends but he has much worse than his peak for years, and has given up." << endl;
    _getch();
    cout << humanName + " is sad." << endl;
    _getch();
    cout << humanName + " wants to just go back to bed, put in headphones and drown out the world with white noise." << endl;
    _getch();
    cout << humanName + " does so. He wakes up and has a bunch of energy, but has no idea what to do. He family time boring, and personal time boring aswell." << endl;
    _getch();
    cout << humanName + " is lost." << endl;
    _getch();
    cout << humanName + " goes on his computer for a bit, plays games and surfs the web for a bit then reaches a point where he gets bored, as usual." << endl;
    _getch();
    cout << humanName + " feels guilty because maybe he isn't trying hard enough. He makes a note to try and be more engaged in the things he does so maybe he won't be bored" << endl;
    _getch();
    cout << humanName + " looks around the room." << endl;
    _getch();
    cout << humanName + " says goodnight to his family." << endl;
    _getch();
    cout << humanName + " closes his door, locks it, and turns on his fan for some drowning noise." << endl;
    _getch();
    cout << humanName + " goes into his bed, wraps himself in the covers, puts on his headphones, and heads on his phone." << endl;
    _getch(); 
    cout << humanName + " watches entourage on HBO max for 15 minutes before he gets tired of paying attention, and due to stress headaches from paying attention to the atmosphere around him, and how random things are." << endl;
    _getch();
    cout << humanName + " puts on white noise. He thinks of how he wants to masturbate, but how he is taking a break. He feels despair." << endl;
    _getch();
    cout << humanName + " looks around the room." << endl;
    _getch();
    cout << humanName + " starts reading the history of philosophy on his kindle." << endl;
    _getch();
    cout << humanName + " reads for 45 minutes before he gets tired of paying attention." << endl;
    _getch();
    cout << humanName + " puts down his kindle." << endl;
    _getch();
    cout << humanName + " takes a piss and brushes his teeth. He doesn't wash his hands." << endl;
    _getch();
    cout << humanName + " goes back to his bed. He starts meditating. He closes his eyes, and puts his attention on the tip of his nose." << endl;
    _getch();
    cout << humanName + "'s thoughts constantly consume his attention, and he immediately tries to go back to the tip of his nose" << endl;
    _getch();
    cout << humanName + " has a hard time with this, as once he changes the attention point, the last point feels unfulfilled. He feels despair, how he doesn't know why meditation is not working." << endl;
    _getch();
    cout << humanName + " remembers from all the books he read, that there is no right way to meditate, and maybe the stress headaches don't have to do with him constantly changing his attention." << endl;
    _getch();
    cout << humanName + " gets impatient and restless so he decides to go to bed." << endl;

    return 0;
}
int main()
{
    cout << "Welcome to the human bot. " << endl;
    _getch();
    
    cout << "What do you want your human to be named?";
    cout << endl;
    

    cin >> humanName;

    
    cout << "Do you want " + humanName + " to start the human simulation?";
    cout << endl;
    string x;

    cin >> x;

    boost::to_lower(x);

    if (x == "yes" || "yeah" || "yea")
    {
        humanBot();
    }
    else
    {
        return 0;
    }





}
