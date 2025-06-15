#include <stdio.h>
#include <string.h>

struct Game {
    char player_name[50];
    char team_name[50];
    int max_score;
    int i;
};

int main() {
    struct Game Player[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Player %d:\n", i + 1);

        printf("Enter Player Name: ");
        scanf("%s", Player[i].player_name);

        printf("Enter Team Name: ");
        scanf("%s", Player[i].team_name);

        printf("Enter Maximum Score: ");
        scanf("%d", &Player[i].max_score);
    }

    printf("\n--- Team-wise Player Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("Team: %s   | Player: %s   | Maximum Score: %d\n", 
               Player[i].team_name, Player[i].player_name, Player[i].max_score);
    }

    return 0;
}

