/*
A volleyball coach would like to keep statistics about his team. 
At each game, your assistant writes down how many attempted serves, 
blocks and attacks each of your players made, as well as how many of those serves, 
blocks and attacks were successful (resulted in points). 
Your program should show what percentage of the entire team's serves, blocks and attacks were successful.

Input
The input is given by the number of players N (1 ≤ N ≤ 100), followed by the name of each player. 
Below each player's name, there are two lines with three integers each. 
In the first line S, B and A (0 ≤ S,B,A ≤ 10000) represent the number of attempted serves, 
blocks and attacks and in the second line, S1, B1 and A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) 
with the number of successful serves, blocks and attacks by this player.

Exit
The output must contain the total percentage of serves, 
blocks and attacks by the entire team that resulted in points, as shown in the example.
*/

#include <stdio.h>

void returnScorers(int N_players, int M_matches){
    int goals_in_match, scored_in_match = 0, countScoredInAll = 0;

    for(int i = 0; i < N_players; i++){
        for(int j = 0; j < M_matches; j++){
            scanf("%d", &goals_in_match);

            if(goals_in_match > 0)
             scored_in_match++;
        }

        if(scored_in_match >= M_matches)
         countScoredInAll++;

        scored_in_match = 0;
    }
    printf("%d\n", countScoredInAll);
}

int main(void)
{
    int N_players, M_matches;
   
    scanf("%d %d", &N_players, &M_matches); 

    returnScorers(N_players, M_matches);
}