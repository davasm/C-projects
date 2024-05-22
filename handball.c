/*
Frustrated and discouraged with the results of its football team, the Super Brasileiro Clube (SBC) decided to invest in the handball team. 
To better evaluate the athletes, the coaches identified that it would be useful to analyze the regularity of the players. 
Specifically, they are interested in knowing how many players scored goals in every match.

As the volume of data is very large, they would like to have a computer program to perform this count.

Input
The first line of the input contains two integers N and M (1 ≤ N ≤ 100 and 1 ≤ M ≤ 100), respectively indicating the number of players and the number of matches. 
Each of the following N lines describes a player's performance: the ith line contains M integers Xj (0 ≤ match.

Exit
Your program must produce a single line, containing a single integer, the number of players who scored goals in all matches.
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
