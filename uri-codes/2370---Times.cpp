#include <bits/stdc++.h>

 
#define MAX_PLAYERS 10010
#define MAX_TEAMS 1010
 
using namespace std;
 
struct players {
 
    string name;
    int hability;
    int team;
 
} players_info[MAX_PLAYERS];

bool compare (players first, players second) { return first.hability > second.hability; }

bool compare2 (players first, players second) { 

    if(first.team == second.team) return first.name < second.name;
    return first.team < second.team;
}
 
int main () {
 
    int number_players, number_teams, i, j;
    scanf("%d %d", &number_players, &number_teams);
 
    for(i=0; i < number_players; i++) {

