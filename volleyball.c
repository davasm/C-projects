/*
A volleyball coach would like to keep statistics about his team.
 At each game, your assistant writes down how many attempted serves, 
 blocks and attacks each of your players made, as well as how many of those serves,
  blocks and attacks were successful (resulted in points). 
  Your program should show what percentage of the entire team's serves, 
  blocks and attacks were successful.

Input
The input is given by the number of players N (1 ≤ N ≤ 100), 
followed by the name of each player. Below each player's name, there are two lines
 with three integers each. In the first line S, B and A (0 ≤ S,B,A ≤ 10000) 
 represent the number of attempted serves, blocks and attacks and in the 
 second line, S1, B1 and A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) with the 
 number of successful serves, blocks and attacks by this player.

Exit
The output must contain the total percentage of serves, 
blocks and attacks by the entire team that resulted in points, 
as shown in the example.
*/

#include <stdio.h>

int main(void)
{
    int N_players, total_serves, total_blocks, total_attacks;
    int successful_serves, successful_blocks, successful_attacks;
    char player_name[50]; 
    float percent_successful_serves, percent_successful_blocks, percent_successful_attacks; 
    int sum_total_serves = 0, sum_total_blocks = 0, sum_total_attacks = 0;   
    int sum_successful_serves = 0, sum_successful_blocks = 0, sum_successful_attacks = 0; 

    scanf("%d", &N_players);

    for(int i = 0; i < N_players; i++){

        scanf(" %s", player_name);
        scanf("%d %d %d", &total_serves, &total_blocks, &total_attacks);
        scanf("%d %d %d", &successful_serves, &successful_blocks, &successful_attacks);

        sum_total_serves += total_serves;
        sum_total_blocks += total_blocks;
        sum_total_attacks += total_attacks;

        sum_successful_serves += successful_serves;
        sum_successful_blocks += successful_blocks;
        sum_successful_attacks += successful_attacks;
    }

    percent_successful_serves = (float)sum_successful_serves/sum_total_serves * 100;
    percent_successful_blocks = (float)sum_successful_blocks/sum_total_blocks * 100;
    percent_successful_attacks = (float)sum_successful_attacks/sum_total_attacks * 100;

    printf("Pontos de Saque: %.2f %%.\n", percent_successful_serves);
    printf("Pontos de Bloqueio: %.2f %%.\n", percent_successful_blocks);
    printf("Pontos de Ataque: %.2f %%.\n", percent_successful_attacks);

    return 0;
}