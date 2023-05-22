#include <bits/stdc++.h>
#include<string>
#include<unistd.h>
using namespace std;
class Team			//Creating Class
{
public:
  string TeamName;
  string PlayerName[3];

  int Runs ()			//Calculating Runs
  {
    int sum = 0;
    for (int i = 1; i < 7; i++)
      {
	int a = 0 + (rand () % 6);
	  cout << "Run Scored on " << i << " ball is " << a << endl;
	  sum = sum + a;
      }
    cout << "\nCalculating total runs scored....." << endl;
    usleep (2000000);
    cout << sum << endl;
    return sum;
  }
};

int currentBat, currentBow;	//Current BAtsmen and Bowler

void
welcome (Team t1, Team t2)	//Printing welcome msg and player details
{
  cout << "\t\tHeeeelllloooooo Everyone" << endl << endl;
  cout << "Todays match is between " << t1.TeamName << " and " << t2.
    TeamName << "\n" << endl;
  cout << "Players of " << t1.
    TeamName << " team are:\t\t\t\t\t Players of " << t2.
    TeamName << " team are:" << endl;
  cout << t1.PlayerName[0] << "                       \t\t\t\t\t" << t2.
    PlayerName[0] << endl;
  cout << t1.PlayerName[1] << "                    \t\t\t\t\t" << t2.
    PlayerName[1] << endl;
  cout << t1.PlayerName[2] << "                        \t\t\t\t\t" << t2.
    PlayerName[2] << endl;
  cout << "\n";
}

int
ranbat (int x, Team t1, Team t2)
{
  int currentBat = 0 + (rand () % 2);

  if (x == 1)
    cout << "Batsmen is " << t1.PlayerName[currentBat] << endl;
  else
    cout << "Batsmen is " << t2.PlayerName[currentBat] << endl;
  cout << " " << endl;
  return currentBat;
}

int
ranbow (int x, Team t1, Team t2)
{
  int currentBow = 0 + (rand () % 2);

  if (x == 1)
    cout << "Bowler is " << t2.PlayerName[currentBow] << endl;
  else
    cout << "Bowler is " << t1.PlayerName[currentBow] << endl;
  cout << " " << endl;
  return currentBow;
}

void
stats (int x, Team t1, Team t2, int a, int b)
{
  if (x == 1)
    {
      if (a == 0)
	{
	  cout << "Stats of " << t1.PlayerName[0] << " are:" << endl;
	  cout << "Innings Played: 75" << endl;
	  cout << "Runs Scored: 1256" << endl;
	  cout << "Average: 69.69" << endl;
	}
      else if (a == 1)
	{
	  cout << "Stats of " << t1.PlayerName[1] << " are:" << endl;
	  cout << "Innings Played: 63" << endl;
	  cout << "Runs Scored: 79" << endl;
	  cout << "Average: 4.78" << endl;
	}
      else
	{
	  cout << "Stats of " << t1.PlayerName[2] << " are:" << endl;
	  cout << "Innings Played: 35" << endl;
	  cout << "Runs Scored: 968" << endl;
	  cout << "Average: 49.87" << endl;
	}
      cout << "" << endl;
      if (b == 0)
	{
	  cout << "Stats of " << t2.PlayerName[0] << " are:" << endl;
	  cout << "Innings Played: 63" << endl;
	  cout << "Wickets Taken: 6" << endl;
	  cout << "Economy: 11.32" << endl;
	}
      else if (b == 1)
	{
	  cout << "Stats of " << t2.PlayerName[1] << " are:" << endl;
	  cout << "Innings Played: 53" << endl;
	  cout << "Wickets Taken: 100" << endl;
	  cout << "Economy: 5.78" << endl;
	}
      else
	{
	  cout << "Stats of " << t2.PlayerName[2] << " are:" << endl;
	  cout << "Innings Played: 73" << endl;
	  cout << "Wickets Taken: 136" << endl;
	  cout << "Economy: 8.37" << endl;
	}
      cout << "" << endl;
    }
  if (x == 2)
    {
      if (a == 0)
	{
	  cout << "Stats of " << t2.PlayerName[0] << " are:" << endl;
	  cout << "Innings Played: 75" << endl;
	  cout << "Runs Scored: 1256" << endl;
	  cout << "Average: 69.69" << endl;
	}
      else if (a == 1)
	{
	  cout << "Stats of " << t2.PlayerName[1] << " are:" << endl;
	  cout << "Innings Played: 63" << endl;
	  cout << "Runs Scored: 79" << endl;
	  cout << "Average: 4.78" << endl;
	}
      else
	{
	  cout << "Stats of " << t2.PlayerName[2] << " are:" << endl;
	  cout << "Innings Played: 35" << endl;
	  cout << "Runs Scored: 968" << endl;
	  cout << "Average: 49.87" << endl;
	}
      cout << "" << endl;
      if (b == 0)
	{
	  cout << "Stats of " << t1.PlayerName[0] << " are:" << endl;
	  cout << "Innings Played: 63" << endl;
	  cout << "Wickets Taken: 6" << endl;
	  cout << "Economy: 11.32" << endl;
	}
      else if (b == 1)
	{
	  cout << "Stats of " << t1.PlayerName[1] << " are:" << endl;
	  cout << "Innings Played: 53" << endl;
	  cout << "Wickets Taken: 100" << endl;
	  cout << "Economy: 5.78" << endl;
	}
      else
	{
	  cout << "Stats of " << t1.PlayerName[2] << " are:" << endl;
	  cout << "Innings Played: 73" << endl;
	  cout << "Wickets Taken: 136" << endl;
	  cout << "Economy: 8.37" << endl;
	}
      cout << "" << endl;
    }
}

void
Winner (int totRunA, int totRunB, Team t1, Team t2)
{
  cout << " " << endl;
  if (totRunA > totRunB)
    cout << t1.TeamName << " Wins" << endl;
  else if (totRunA < totRunB)
    cout << t2.TeamName << " Wins" << endl;
  else
    cout << "Match Drawn" << endl;
}

int
main ()
{
  Team t1, t2;

  t1.TeamName = "Punjab";
  t1.PlayerName[0] = "Mayank";
  t1.PlayerName[1] = "Arshdeep";
  t1.PlayerName[2] = "Liam";

  t2.TeamName = "RCB";
  t2.PlayerName[0] = "Virat";
  t2.PlayerName[1] = "Maxwell";
  t2.PlayerName[2] = "Siraj";

  welcome (t1, t2);
  int x, randomBowler, randomBatter;

  randomBatter = ranbat (x = 1, t1, t2);
  randomBowler = ranbow (x = 1, t1, t2);

  stats (x = 1, t1, t2, randomBatter, randomBowler);

  cout << "\nFirst Innings is going on....." << endl;
  usleep (2000000);

  int totRunA = t1.Runs ();

  randomBatter = ranbat (x = 2, t1, t2);
  randomBowler = ranbow (x = 2, t1, t2);

  stats (x = 2, t1, t2, randomBatter, randomBowler);

  cout << "\nSecond Innings is going on....." << endl;
  usleep (2000000);

  int totRunB = t2.Runs ();
  Winner (totRunA, totRunB, t1, t2);

  return 0;
}
