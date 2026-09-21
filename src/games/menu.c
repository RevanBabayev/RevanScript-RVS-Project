// C Standard Libraries
#include <stdio.h>
#include <stdbool.h>

// RevanScript (RVS) Core/Engine Libraries
#include "../../includes/rvsio.h"
#include "../../includes/rvstbl.h"

// RevanScript (RVS) Subsystem Libraries
#include "../../includes/games/menu.h"


// RevanScript (RVS) Game Mode Menu Function 
bool rvs_games_menu_init(void){
    struct RVSTBLConfig __rvs_game_table_config = {.rows=3, .cols=6, .width=20, .height=1};
    RVSTBL* __rvs_game_table = rvs_table_create(__rvs_game_table_config);
    if (!__rvs_game_table) return false;

    rvs_table_insert(__rvs_game_table, 18, 
        "Index", "Games", "Type",
        "1", "Guess the Number", "Console",
        "2", "Tic Tac Toe", "Console", 
        "3", "Minesweeper", "Console", 
        "4", "Sudoku", "Console", 
        "5", "Chess", "Console"); 
    
    printf("\n\t\t%s[RevanScript (RVS) <-(GAME MODE)->]%s\n\n", 
        RVS_COLOR_MAGENTA_ESCAPE_CODE, 
        RVS_COLOR_RESET_ESCAPE_CODE);

    rvs_standard_table_output(__rvs_game_table);
    rvs_table_delete(__rvs_game_table);
    return true;
}
