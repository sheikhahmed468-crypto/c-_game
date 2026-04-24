#include <iostream>
using namespace std;

int main()
{
  int a,b,c,d,e,f,g,num;
  int level;

  cout <<"***********************************|This is a game of charater named as harry jon.He is a charater who used to play game with there slave. |*********************************** "<<endl;
  cout <<"***********************************|If slave answer a write correct number harry release a slave. Harry have more than three hunderd slave.|*********************************** "<<endl;
  cout <<"***********************************|He used to play this game on sunday of mid week of month. Harry play this game with honest.            |*********************************** "<<endl;
  cout <<"***********************************|Harry jon flip a cion to decide if he gave one chance two chances or three chances to her slave        |*********************************** "<<endl;
  cout <<"                *******************|                              HE dont give second try to play game                                     |*************** "<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
  restart:
    cout <<"                                  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\            Enter 1 to start game              ////////////////////////////////////////////////////"<<endl<<endl<<endl;
    cout <<"                                   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\           Enter 2 to restart game           ///////////////////////////////////////////////////"<<endl<<endl<<endl;
    cout <<"                                    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\        Enter c to score of  game         ////////////////////////////////////////////////"<<endl<<endl<<endl;
    cout <<"                                     \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\      Enter d to graphics of game       //////////////////////////////////////////////"<<endl<<endl<<endl;
    cout <<"                                      \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   Enter e to audio setting of game   ///////////////////////////////////////////"<<endl<<endl<<endl;
   
    cin>> f;
    if(f==1)
    {
    cout << "Enter the level of difficulty (1 for hard, 2 for medium, 3 for easy): ";
  cin >> level;

  if (level == 1)
   {
    cout << "YOU HAVE ONLY ONE KEY TO ESCAPE" << endl;
  }
  else if (level == 2)
  {
    cout << "YOU HAVE TWO KEYS TO ESCAPE" << endl;
  }
  else if (level == 3)
  {
    cout << "YOU HAVE THREE KEYS TO ESCAPE" << endl;
  }
  else {
    cout << "Invalid level of difficulty. Please enter a value between 1 and 3." << endl;}
    for (int i = 0; i < level; i++) {

    cout <<"                                           |*************| |************| |************| |************| |************|"<<endl;
    cout <<"                                           |*************| |************| |************| |************| |************|"<<endl;
    cout <<"                                           |*******1*****| |******2*****| |******3*****| |*****4******| |*****5******|"<<endl;
    cout <<"                                           |*************| |************| |************| |************| |************|"<<endl;
    cout <<"                                           |*************| |************| |************| |************| |************|"<<endl;
    cin>>b;

    switch(b)
    {
    case 1:
    cout <<"***********************************************************Try again***************************************************" <<endl;
    break;
    case 2:
    cout<<"***********************************************************Try again***************************************************"<<endl;
    break;
    case 3:
    cout<<"***********************************************************Try again***************************************************"<<endl;
    break;
case 4:
    cout<<"***********************************************************YOU WIN PLEASE ENTER YOUR NAME***************************************************"<<endl;
    break;
case 5:
    cout<<"**********************************************************Try again***************************************************"<<endl;
    break;
    deflaut:
    cout<<"you enter in valid number";
}
}
}
cout<<"if you want to restart games press:1:";
cin>>g;
if(g==1)
{
goto restart;
}
    else if(f==2)
    {
    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Make sure you want to restart game/////////////////////////////////////////////////";
}
else if(f==3)
    {
    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\Name of game winner is 1) ahmed/////////////////////////////////////////////////";
}
else if(f==4)
    {
    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\set graphic 1) high  2) medium 3) low/////////////////////////////////////////////////";
}
else if(f==5)
{
cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\volume 1)high 2) low 3) medium/////////////////////////////////////////////////";
}
else
cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\enter number from 1 to 5/////////////////////////////////////////////////";
    return 0;

}


