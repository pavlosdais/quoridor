typedef struct player player;
typedef struct stacknode *stackptr;

void print_name(char *p);
void known_command(void);
void list_commands();
void update_boardsize(int* boardsize, int* prev_boardsize, char*** wall_matrix, player* white, player* black, stackptr* history, int* totalmoves);
void clear_board(int boardsize, char** wall_matrix, player white, player black, stackptr* history, int* totalmoves);
void update_walls(player* white, player* black, int* number_of_walls);
void playmove(char* buff, player* white, player* black, char** wall_matrix, int boardsize, stackptr* history, int* totalmoves);
void playwall(char* buff, player* white, player* black, char** wall_matrix, int boardsize, stackptr* history, int* totalmoves);
void genmove(player* white, player* black, char** wall_matrix, int boardsize, stackptr* lastaddr, int* totalmoves);
void undo(char** wall_matrix, player* white, player* black, stackptr* last, int* totalmoves);
void winner(player white, player black, int boardsize);
void showboard(char** wall_matrix, int boardsize, player* white, player* black);
char command_num(char* ans);
void command_preprocess(char* buff);
void reset_pawns(int boardsize, player* white, player *black);
char **allocate_memory(int boardsize);
void free_array(char** A, int boardsize);
void unsuccessful_response(char* msg);
void successful_response(char* msg);
