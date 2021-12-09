
/*
string Welcome = R'''(
          _____                    _____                    _____                    _____                    _____
         /\    \                  /\    \                  /\    \                  /\    \                  /\    \
        /::\    \                /::\____\                /::\    \                /::\    \                /::\    \
       /::::\    \              /:::/    /               /::::\    \              /::::\    \              /::::\    \
      /::::::\    \            /:::/    /               /::::::\    \            /::::::\    \            /::::::\    \
     /:::/\:::\    \          /:::/    /               /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \
    /:::/  \:::\    \        /:::/____/               /:::/__\:::\    \        /:::/__\:::\    \        /:::/__\:::\    \
   /:::/    \:::\    \      /::::\    \              /::::\   \:::\    \       \:::\   \:::\    \       \:::\   \:::\    \
  /:::/    / \:::\    \    /::::::\    \   _____    /::::::\   \:::\    \    ___\:::\   \:::\    \    ___\:::\   \:::\    \
 /:::/    /   \:::\    \  /:::/\:::\    \ /\    \  /:::/\:::\   \:::\    \  /\   \:::\   \:::\    \  /\   \:::\   \:::\    \
/:::/____/     \:::\____\/:::/  \:::\    /::\____\/:::/__\:::\   \:::\____\/::\   \:::\   \:::\____\/::\   \:::\   \:::\____\
\:::\    \      \::/    /\::/    \:::\  /:::/    /\:::\   \:::\   \::/    /\:::\   \:::\   \::/    /\:::\   \:::\   \::/    /
 \:::\    \      \/____/  \/____/ \:::\/:::/    /  \:::\   \:::\   \/____/  \:::\   \:::\   \/____/  \:::\   \:::\   \/____/
  \:::\    \                       \::::::/    /    \:::\   \:::\    \       \:::\   \:::\    \       \:::\   \:::\    \
   \:::\    \                       \::::/    /      \:::\   \:::\____\       \:::\   \:::\____\       \:::\   \:::\____\
    \:::\    \                      /:::/    /        \:::\   \::/    /        \:::\  /:::/    /        \:::\  /:::/    /
     \:::\    \                    /:::/    /          \:::\   \/____/          \:::\/:::/    /          \:::\/:::/    /
      \:::\    \                  /:::/    /            \:::\    \               \::::::/    /            \::::::/    /
       \:::\____\                /:::/    /              \:::\____\               \::::/    /              \::::/    /
        \::/    /                \::/    /                \::/    /                \::/    /                \::/    /
         \/____/                  \/____/                  \/____/                  \/____/                  \/____/
)''';

         */



/*if(Board[i]!='0'){
                  switch(Board[i]){
                        case 'P': cout<<Wpawn; break;
                        case 'N': cout<<Wknight; break;
                        case 'B': cout<<Wbishop; break;
                        case 'R': cout<<Wrook; break;
                        case 'Q': cout<<Wqueen; break;
                        case 'K': cout<<Wking; break;
                        case 'p': cout<<Bpawn; break;
                        case 'n': cout<<Bknight; break;
                        case 'b': cout<<Bbishop; break;
                        case 'r': cout<<Brook; break;
                        case 'q': cout<<Bqueen; break;
                        case 'k': cout<<Bking; break;
                  }
                  cout<<"|";
            }
            else{
                  cout<<"_|";
            }*/
#include<iostream>
#include<stdlib.h>
#include<inttypes.h>
#include<cstdlib>
#include<chrono>
#include<list>
using namespace std;

#define Nvalue 300
#define Bvalue 300
#define Rvalue 500
#define Qvalue 900
#define Kvalue 0

string empty[5] = {"           ","           ","           ","           ","           "};
string Wpawn[5] = {"           ","     ()    ","     )(    ","    /__\\   ","           "};
string Wknight[5] = {"           ","    _,,    ","   \"- \\~   ","    | |    ","   /___\\   "};
string Wbishop[5] = {"     .     ","    (/)    ","    | |    ","    | |    ","   /___\\   "};
string Wrook[5] = {"     _     ","   |_|_|   ","    | |    ","    | |    ","   /___\\   "};
string Wqueen[5]= {"    wWw    ","    \\ /    ","    | |    ","    | |    ","   /___\\   "};
string Wking[5]= {"    _+_    ","    ) (    ","    | |    ","    | |    ","   /___\\   "};
string Bpawn[5] = {"           ","     ()    ","     )(    ","    /XX\\   ","           "};
string Bknight[5] = {"           ","    _,,    ","   \"-X\\~   ","    |X|    ","   /XXX\\   "};
string Bbishop[5] = {"     .     ","    (/)    ","    |X|    ","    |X|    ","   /XXX\\   "};
string Brook[5] = {"     _     ","   |_|_|   ","    |X|    ","    |X|    ","   /XXX\\   "};
string Bqueen[5]= {"    wWw    ","    \\X/    ","    |X|    ","    |X|    ","   /XXX\\   "};
string Bking[5]= {"    _+_    ","    )X(    ","    |X|    ","    |X|    ","   /XXX\\   "};
string newLine = "      |___________|___________|___________|___________|___________|___________|___________|___________|\n";
string startLine = "       _____A_____ _____B_____ _____C_____ _____D_____ _____E_____ _____F_____ _____G_____ _____H_____ \n";
string endLine = "      |_____A_____|_____B_____|_____C_____|_____D_____|_____E_____|_____F_____|_____G_____|_____H_____|\n";

string Welcome =
"   ___  _                      \n"
"  / __\\| |__    ___  ___  ___  \n"
" / /   | '_ \\  / _ \\/ __|/ __| \n"
"/ /___ | | | ||  __/\\__ \\__ \\ \n"
"\\____/ |_| |_| \\___||___/|___/ \n";

string WelcomeText =
"Welcome to Chess \n\n"
"Instructions: \n\n"

"1)Resize the terminal font size to see pieces and board clearly.\n\n"

"2)To move a piece enter its starting coordinate and ending coordinates without spaces.\n\n"
"Like  by entering e2e4 - We mean to move the piece on e2 to e4.\nn"
"Entering d2d4 - We mean to move the piece on d2 to d4 and so on.\n\n"

"3)Pawn automatically promotes to Queen\n\n"

"5)Castling is a Kings Move to type 'e1g1' for King Side Castle and 'e1c1' for Long Side Castle."

"6)Computer will take around 8 seconds (15seconds max) to move. \n| Please Be Patient |.\n\n"

"7)You can type 'current' (without quotes and spaces) to see what moves are available.\n\n"

"8)Type 'eval' to see white and black material and position score.\n\n"

"9)Type  'exit' if you want to exit game.\n\n\n"

"    ########################################\n"
"    #                                      #\n"
"    #                                      #\n"
"    #                                      #\n"
"    #      Type 'Play' to Start Game       #\n"
"    #                                      #\n"
"    #                                      #\n"
"    #                                      #\n"
"    ########################################\n\n";

string goodLuck =
"▒█▀▀█ █▀▀█ █▀▀█ █▀▀▄  ▒█░░░ █░░█ █▀▀ █░█\n"
"▒█░▄▄ █░░█ █░░█ █░░█  ▒█░░░ █░░█ █░░ █▀▄\n"
"▒█▄▄█ ▀▀▀▀ ▀▀▀▀ ▀▀▀░  ▒█▄▄█ ░▀▀▀ ▀▀▀ ▀░▀\n\n"
"▒█░▒█ █▀▀█ ▀█░█▀ █▀▀  ▒█▀▀▀ █░░█ █▀▀▄  █\n"
"▒█▀▀█ █▄▄█ ░█▄█░ █▀▀  ▒█▀▀▀ █░░█ █░░█  ▀\n"
"▒█░▒█ ▀░░▀ ░░▀░░ ▀▀▀  ▒█░░░ ░▀▀▀ ▀░░▀  ▄\n";

string mate =

"\n░█▀▀█ █──█ █▀▀ █▀▀ █─█ ░█▀▄▀█ █▀▀█ ▀▀█▀▀ █▀▀\n"
"░█─── █▀▀█ █▀▀ █── █▀▄ ░█░█░█ █▄▄█ ──█── █▀▀\n"
"░█▄▄█ ▀──▀ ▀▀▀ ▀▀▀ ▀─▀ ░█──░█ ▀──▀ ──▀── ▀▀▀\n";

string stale =

"\n▒█▀▀▀█ ▀▀█▀▀ █▀▀█ █░░ █▀▀ ▒█▀▄▀█ █▀▀█ ▀▀█▀▀ █▀▀\n"
"░▀▀▀▄▄ ░░█░░ █▄▄█ █░░ █▀▀ ▒█▒█▒█ █▄▄█ ░░█░░ █▀▀\n"
"▒█▄▄▄█ ░░▀░░ ▀░░▀ ▀▀▀ ▀▀▀ ▒█░░▒█ ▀░░▀ ░░▀░░ ▀▀▀\n";
int Pvalue=100;
char Board[64];
int whiteMaterial=0, blackMaterial=0, whitePosition=0, blackPosition=0;
int64_t WP=0L,WK=0L,WB=0L,WN=0L,WQ=0L,WR=0L,BP=0L,BR=0L,BK=0L,BN=0L,BB=0L,BQ=0L;//BitBoards
int64_t BLACK_PIECES=0L, WHITE_PIECES=0L, EMPTY=0L, OCCUPIED=0L;//BitBoards
int64_t whiteAttackSquares=0L,blackAttackSquares=0L,checkMaskBlack = -1L,checkMaskWhite = -1L;
int whiteCheckers = 0, blackCheckers = 0;
int blackKingIndex = 0, whiteKingIndex = 0;
int64_t pinH=0L, pinV=0L, pinD=0L, pinAD=0L;
bool BlongCastle = true, BshortCastle = true, WlongCastle = true, WshortCastle = true;
bool canWshort=false, canWlong=false, canBshort=false, canBlong=false;
struct Move{
      int startIndex;
      int targetIndex;
      int64_t *ptr = NULL;
      const int *table;
};
bool generating = false;
bool black = false;
int AIdepth = 4;
//Constants
const int64_t FILE_H = -9187201950435737472L;
const int64_t FILE_A = 72340172838076673L;
const int64_t RANK_1 = 255L;
const int64_t RANK_8 = -72057594037927936L;
const int64_t RANK_4 = 4278190080L;
const int64_t RANK_5 = 1095216660480L;
const int64_t KNIGHT_RANGE = 345879119952L;
const int64_t KING_RANGE = 460039L;
const int64_t Wlong=2017612633061982208, Wshort=8070450532247928832,Blong=28,Bshort=112;
const int64_t VerticalMask[8] = {72340172838076673L,144680345676153346L,289360691352306692L,578721382704613384L,1157442765409226768L,2314885530818453536L,4629771061636907072L,-9187201950435737472L};
const int64_t HorizontalMask[8] = {255L,65280L,16711680L,4278190080L,1095216660480L,280375465082880L,71776119061217280L,-72057594037927936L};
const int64_t DiagonalMask[15] = {72057594037927936L,144396663052566528L,288794425616760832L,577588855528488960L,1155177711073755136L,2310355422147575808L,4620710844295151872L,-9205322385119247871L,
                                                36099303471055874L,141012904183812L,550831656968L,2151686160L,8405024L,32832L,128L};
const int64_t AntiDiagonalMask[15] = {(-9223372036854775807L - 1L),4647714815446351872L,2323998145211531264L,1161999622361579520L,580999813328273408L,290499906672525312L,145249953336295424L,72624976668147840L,
                                                   283691315109952L,1108169199648L,4328785936L,16909320L,66052L,258L,1L};
const int pawnTable[64] = {0,  0,  0,  0,  0,  0,  0,  0,
                                       98, 134, 61, 95, 68, 126, 34, 50,
                                       10, 10, 20, 30, 30, 20, 10, 10,
                                       5,  5, 10, 25, 25, 10,  5,  5,
                                       0,  0,  0, 20, 20,  0,  0,  0,
                                       5, -5,-10,  0,  0,-10, -5,  5,
                                       5, 10, 10,-20,-20, 10, 10,  5,
                                       0,  0,  0,  0,  0,  0,  0,  0};
const int eg_pawn_table[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,
    178, 173, 158, 134, 147, 132, 165, 187,
     94, 100,  85,  67,  56,  53,  82,  84,
     32,  24,  13,   5,  -2,   4,  17,  17,
     13,   9,  -3,  -7,  -7,  -8,   3,  -1,
      4,   7,  -6,   1,   0,  -5,  -1,  -8,
     13,   8,   8,  10,  13,   0,   2,  -7,
      0,   0,   0,   0,   0,   0,   0,   0,
};
const int knightTable[64] = {-50,-40,-30,-30,-30,-30,-40,-50,
                                          -40,-20,  0,  0,  0,  0,-20,-40,
                                          -30,  0, 10, 15, 15, 10,  0,-30,
                                          -30,  5, 15, 20, 20, 15,  5,-30,
                                          -30,  0, 15, 20, 20, 15,  0,-30,
                                          -30,  5, 10, 15, 15, 10,  5,-30,
                                          -40,-20,  0,  5,  5,  0,-20,-40,
                                          -50,-40,-30,-30,-30,-30,-40,-50};
const int rookTable[64] = {0,  0,  0,  0,  0,  0,  0,  0,
                                           5, 10, 10, 10, 10, 10, 10,  5,
                                          -5,  0,  0,  0,  0,  0,  0, -5,
                                          -5,  0,  0,  0,  0,  0,  0, -5,
                                          -5,  0,  0,  0,  0,  0,  0, -5,
                                          -5,  0,  0,  0,  0,  0,  0, -5,
                                          -5,  0,  0,  0,  0,  0,  0, -5,
                                           0,  0,  0,  5,  5,  0,  0,  0};
const int bishopTable[64] = {-20,-10,-10,-10,-10,-10,-10,-20,
                                          -10,  0,  0,  0,  0,  0,  0,-10,
                                          -10,  0,  5, 10, 10,  5,  0,-10,
                                          -10,  5,  5, 10, 10,  5,  5,-10,
                                          -10,  0, 10, 10, 10, 10,  0,-10,
                                          -10, 10, 10, 10, 10, 10, 10,-10,
                                          -10,  5,  0,  0,  0,  0,  5,-10,
                                          -20,-10,-10,-10,-10,-10,-10,-20};
const int queenTable[64] = {-20,-10,-10, -5, -5,-10,-10,-20,
                                          -10,  0,  0,  0,  0,  0,  0,-10,
                                          -10,  0,  5,  5,  5,  5,  0,-10,
                                           -5,  0,  5,  5,  5,  5,  0, -5,
                                           0,  0,  5,  5,  5,  5,  0, -5,
                                          -10,  5,  5,  5,  5,  5,  0,-10,
                                          -10,  0,  5,  0,  0,  0,  0,-10,
                                          -20,-10,-10, -5, -5,-10,-10,-20};

const int kingTable[64] = {-30,-40,-40,-50,-50,-40,-40,-30,
                                          -30,-40,-40,-50,-50,-40,-40,-30,
                                          -30,-40,-40,-50,-50,-40,-40,-30,
                                          -30,-40,-40,-50,-50,-40,-40,-30,
                                          -20,-30,-30,-40,-40,-30,-30,-20,
                                          -10,-20,-20,-20,-20,-20,-20,-10,
                                          20, 20,  0,  0,  0,  0, 20, 20,
                                          20, 30, 10,  0,  0, 10, 30, 20};
const int nullTable[64]= {0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0,
                                          0,0,0,0,0,0,0,0};

const int *pT=&pawnTable[0], *nT=&knightTable[0], *rT=&rookTable[0], *bT=&bishopTable[0], *qT=&queenTable[0], *kkT=&kingTable[0];

void AImove();
int Search(bool,int);
void perftGenerationTest(bool, int);
int Evaluation();
int64_t* performMoveInternal(Move *move);
void undoMove(Move *move, int64_t *ptr);

bool checkLegalFEN(string Fen){
    if (Fen == "0"){
        return true;
    }
    string FEN = "";
    bool end = false;
    int FakeBoard[64];
    for(int i=0; Fen[i]!='\0'; i++){
        if(isspace(Fen[i])){
                end = true;
                continue;
        }
        if(!end){
                FEN += Fen[i];
        }
    }
    cout<<FEN;
        int j = 0;
        for(int i=0; i<FEN.size(); i++){
            if (FEN[i]=='/'){
                j++;
                continue;
            }
        }
        if (j!=7){
            return false;
        }
        return true;
}


void initiateChessBoard(string Fen){
      string after = "";
      string FEN = "";
      bool end = false;
      for(int i=0; Fen[i]!='\0'; i++){
            if(isspace(Fen[i])){
                  end = true;
                  continue;
            }
            if(!end){
                  FEN += Fen[i];
            }
            else if(isalpha(Fen[i])){
                  after += Fen[i];
            }
      }
      int position=0;
      for(int i=0; i<FEN.size();i++,position++){
            if(i>=FEN.size()){
                  break;
            }
            if(FEN[i] == '/'){
                  position--;
                  continue;
            }
            else if(isdigit(FEN[i])){
                  int n = (int)FEN[i]-48;
                  position+=n-1;
            }
            else{
                  Board[position] = FEN[i];
            }
      }
      for(int i=0; i<64; i++){
            switch(Board[i]){
                  case 'P': WP|=((uint64_t)1L<<i); whiteMaterial+=Pvalue; break;
                  case 'N': WN|=((uint64_t)1L<<i); whiteMaterial+=Nvalue; break;
                  case 'B': WB|=((uint64_t)1L<<i); whiteMaterial+=Bvalue; break;
                  case 'R': WR|=((uint64_t)1L<<i); whiteMaterial+=Rvalue; break;
                  case 'Q': WQ|=((uint64_t)1L<<i); whiteMaterial+=Qvalue; break;
                  case 'K': WK|=((uint64_t)1L<<i); whiteMaterial+=Kvalue; break;
                  case 'p': BP|=((uint64_t)1L<<i); blackMaterial+=Pvalue; break;
                  case 'n': BN|=((uint64_t)1L<<i); blackMaterial+=Nvalue; break;
                  case 'b': BB|=((uint64_t)1L<<i); blackMaterial+=Bvalue; break;
                  case 'r': BR|=((uint64_t)1L<<i); blackMaterial+=Rvalue; break;
                  case 'q': BQ|=((uint64_t)1L<<i); blackMaterial+=Qvalue; break;
                  case 'k': BK|=((uint64_t)1L<<i); blackMaterial+=Kvalue; break;
            }
      }
      for(int i=0; i<after.size(); i++){
            if(after[i]=='K'){
                  canWshort = true;
            }
            else if(after[i]=='k'){
                  canBshort = true;
            }
            else if(after[i]=='Q'){
                  canWlong = true;
            }
            else if(after[i]=='q'){
                  canBlong = true;
            }
            else if(after[i]=='b'){
                  black = true;
            }
      }
}

int trailing_zeros(uint64_t n){
      if (n == 0){
            return -1;
      }
      int count = 0;
      while (n % 2 == 0){
            count++;
            n = ((uint64_t)n)>>1;
      }
      return count;
}
int64_t ReverseBits(int64_t x){
      int64_t r = 0;
      for (int i = 63; i >= 0; i--){
      r |= ((((uint64_t)x) >> i) & 0x1L) << (63 - i);
      }
      return r;
}
bool contains(Move moveToCheck, list<Move> listToCheck){
      list<Move>::iterator it;
      for(it=listToCheck.begin(); it!=listToCheck.end();++it){
            if((*it).startIndex == moveToCheck.startIndex && (*it).targetIndex == moveToCheck.targetIndex) return true;
      }
      return false;
}

void CheckMate(bool win){
      cout<<mate;
      if(win){
            cout<<"\nGood Game, Well Played\n"
                  "       눈_눈          \n"
                  "   (Tukka Lag Gya)        \n";
      }
      else{
            cout<<"\nHaha, Ezzzzz Game, Noob   \n"
                  "\n    (ノಠ ∩ಠ)ノ彡( \\o°o)\\   \n"
                  "\n          ヾ(-_- )ゞ         \n";
      }
      cout<<"\nThanks For Playing!!!      ಥ﹏ಥ\n";
      cout<<"\nKoi pahucha bhi yaha tak ?\nKoi Yaha tak pahucha ho to batana ki Game Pura kiya hai  \n";
}
void StaleMate(){
      cout<<stale;
      cout<<"\nClose Game \n     (ಠ ʖ̯ ಠ)";
      cout<<"\nThanks For Playing!!!      ಥ﹏ಥ\n";
      cout<<"\nKoi pahucha bhi yaha tak ?\nKoi Yaha tak pahucha ho to batana ki Game Pura kiya hai  \n";
}
void printBoard(){
    cout<<"\n\n";
    cout<<startLine;
    for (int j=0,i=0; j<320; j++){
        int square = j%8 + 8*(j/40);
        //cout<<square;
        if(j%8==0){
            if(i!=2){
                cout<<"      |";
            }
            else{
                cout<<"      "<<(8-square/8);
            }
        }
        if(Board[square]!='0'){
            switch(Board[square]){
                case 'P': cout<<Wpawn[i]; break;
                case 'N': cout<<Wknight[i]; break;
                case 'B': cout<<Wbishop[i]; break;
                case 'R': cout<<Wrook[i]; break;
                case 'Q': cout<<Wqueen[i]; break;
                case 'K': cout<<Wking[i]; break;
                case 'p': cout<<Bpawn[i]; break;
                case 'n': cout<<Bknight[i]; break;
                case 'b': cout<<Bbishop[i]; break;
                case 'r': cout<<Brook[i]; break;
                case 'q': cout<<Bqueen[i]; break;
                case 'k': cout<<Bking[i]; break;
            }
        }
        else{
                cout<<empty[i];
        }
        cout<<"|";
        if(j%8==7){
            cout<<"\n";
            i++;
        }
        if(j%40==39){
            i=0;
            if(square!=63)
                cout<<newLine;
        }
    }
    cout<<endLine;
}

int64_t HoriVerti(int index){
      int64_t Binary = ((uint64_t)1L)<<(index);
      int64_t possibleH = ((OCCUPIED-2*Binary)^(ReverseBits(ReverseBits(OCCUPIED)-2*ReverseBits(Binary))))&HorizontalMask[index/8];
      int64_t possibleV = (((OCCUPIED&VerticalMask[index%8])-2*Binary)^(ReverseBits(ReverseBits((OCCUPIED&VerticalMask[index%8])-Binary)-ReverseBits(Binary))))&VerticalMask[index%8];
      return possibleH|possibleV;
}
int64_t DiagAntiDiag(int index){
      int64_t Binary = ((uint64_t)1L)<<index;
      int64_t possibleDiag = (((OCCUPIED&DiagonalMask[7-(index/8-index%8)])-2*Binary)^(ReverseBits(ReverseBits(OCCUPIED&DiagonalMask[7-(index/8-index%8)])-2*ReverseBits(Binary))))&DiagonalMask[7-(index/8-index%8)];
      int64_t possibleAntiDiag = (((OCCUPIED&AntiDiagonalMask[14-(index/8+index%8)])-2*Binary)^(ReverseBits(ReverseBits(OCCUPIED&AntiDiagonalMask[14-(index/8+index%8)])-2*ReverseBits(Binary))))&AntiDiagonalMask[14-(index/8+index%8)];
      return possibleDiag|possibleAntiDiag;
}

int64_t afterPinMask(int64_t currentPossibility, int64_t location, int index){
      if((location&pinV)!=0) currentPossibility&=VerticalMask[index%8];
      if((location&pinH)!=0) currentPossibility&=HorizontalMask[index/8];
      if((location&pinD)!=0) currentPossibility&=DiagonalMask[7-(index/8-index%8)];
      if((location&pinAD)!=0) currentPossibility&=AntiDiagonalMask[14-(index/8+index%8)];
      return currentPossibility;
}

list <Move> WhitePawnMoves(int64_t WWP){
      list<Move> moveList;
      Move currentMove;
      currentMove.table = &pawnTable[0];
      if(blackMaterial<1100){
            currentMove.table = &eg_pawn_table[0];
      }
      int64_t possibility;
      int64_t PAWN_MOVES = (((uint64_t)WWP)>>7)&BLACK_PIECES&(~FILE_A)&checkMaskWhite;//capture left
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
            int i = trailing_zeros(possibility);
            if((possibility&afterPinMask(-1L,(uint64_t)possibility<<7,i+7))!=0){
                  currentMove.startIndex = i+7;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WP;
                  moveList.push_back(currentMove);
            }
            PAWN_MOVES &= ~possibility;
            possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      PAWN_MOVES = (((uint64_t)WWP)>>9)&BLACK_PIECES&(~FILE_H)&checkMaskWhite;//capture right
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
         int i = trailing_zeros(possibility);
         if((possibility&afterPinMask(-1L,(uint64_t)possibility<<9,i+9))!=0){
                  currentMove.startIndex = i+9;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WP;
                  moveList.push_back(currentMove);
            }
         PAWN_MOVES &= ~possibility;
         possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      PAWN_MOVES = (((uint64_t)WWP)>>8)&EMPTY&checkMaskWhite;//walk straight
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
            int i = trailing_zeros(possibility);
            if((possibility&afterPinMask(-1L,(uint64_t)possibility<<8,i+8))!=0){
                  currentMove.startIndex = i+8;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WP;
                  moveList.push_back(currentMove);
            }
            PAWN_MOVES &= ~possibility;
            possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      PAWN_MOVES = (((uint64_t)WWP>>16)&EMPTY&RANK_5)&((uint64_t)EMPTY>>8)&checkMaskWhite;//walk 2 steps straight
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
            int i = trailing_zeros(possibility);
            if((possibility&afterPinMask(-1L,(uint64_t)possibility<<16,i+16))!=0){
                  currentMove.startIndex = i+16;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WP;
                  moveList.push_back(currentMove);
            }
            PAWN_MOVES &= ~possibility;
            possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      return moveList;
}

list <Move> BlackPawnMoves(int64_t BBP){
      Move currentMove;
      currentMove.table = &pawnTable[0];
      if(whiteMaterial<1100){
            currentMove.table = &eg_pawn_table[0];
      }
      list<Move> moveList;
      int64_t possibility;
      int64_t PAWN_MOVES = ((uint64_t)BBP<<7)&WHITE_PIECES&(~FILE_H)&checkMaskBlack;//capture left
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
            int i = trailing_zeros(possibility);
            if((possibility&afterPinMask(-1L,(uint64_t)possibility>>7,i-7))!=0){
                  currentMove.startIndex = i-7;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BP;
                  moveList.push_back(currentMove);
            }
            PAWN_MOVES &= ~possibility;
            possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      PAWN_MOVES = ((uint64_t)BBP<<9)&WHITE_PIECES&(~FILE_A)&checkMaskBlack;//capture right
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
         int i = trailing_zeros(possibility);
         if((possibility&afterPinMask(-1L,(uint64_t)possibility>>9,i-9))!=0){
                  currentMove.startIndex = i-9;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BP;
                  moveList.push_back(currentMove);
            }
         PAWN_MOVES &= ~possibility;
         possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      PAWN_MOVES = ((uint64_t)BBP<<8)&EMPTY&checkMaskBlack;//walk straight
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
            int i = trailing_zeros(possibility);
            if((possibility&afterPinMask(-1L,(uint64_t)possibility>>8,i-8))!=0){
                  currentMove.startIndex = i-8;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BP;
                  moveList.push_back(currentMove);
            }
            PAWN_MOVES &= ~possibility;
            possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      PAWN_MOVES = (((uint64_t)BBP<<16)&EMPTY&RANK_4)&((uint64_t)EMPTY<<8)&checkMaskBlack;//walk 2 steps straight
      possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      while (possibility!=0){
            int i = trailing_zeros(possibility);
            if((possibility&afterPinMask(-1L,(uint64_t)possibility>>16,i-16))!=0){
                  currentMove.startIndex = i-16;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BP;
                  moveList.push_back(currentMove);
            }
            PAWN_MOVES &= ~possibility;
            possibility = PAWN_MOVES&~(PAWN_MOVES-1);
      }
      return moveList;
}

list<Move> WhiteRookMoves(int64_t WWR){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &rookTable[0];
      int64_t BinPlace = WWR&~(WWR-1);
      int64_t possibility;
      while(BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            possibility = HoriVerti(index)&checkMaskWhite;
            possibility = afterPinMask(possibility,BinPlace,index);
            possibility &=(~WHITE_PIECES);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WR;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            WWR &= ~BinPlace;
            BinPlace = WWR&~(WWR-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}
list<Move> WhiteBishopMoves(int64_t WWB){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &bishopTable[0];
      int64_t BinPlace = WWB&~(WWB-1);
      int64_t possibility;
      while(BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            possibility = DiagAntiDiag(index)&checkMaskWhite;
            possibility = afterPinMask(possibility,BinPlace,index);
            possibility &=(~WHITE_PIECES);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WB;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            WWB &= ~BinPlace;
            BinPlace = WWB&~(WWB-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}
list<Move> WhiteQueenMoves(int64_t WWQ){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &queenTable[0];
      int64_t BinPlace = WWQ&~(WWQ-1);
      int64_t possibility;
      while(BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            possibility = ((DiagAntiDiag(index)|HoriVerti(index))&checkMaskWhite);
            possibility = afterPinMask(possibility,BinPlace,index);
            possibility &=(~WHITE_PIECES);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WQ;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            WWQ &= ~BinPlace;
            BinPlace = WWQ&~(WWQ-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}
list<Move> WhiteKnightMoves(int64_t WWN){
      list<Move> moveList;
      //list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &knightTable[0];
      int64_t BinPlace = WWN&~(WWN-1);
      int64_t possibility = 0;
      while (BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            if (index >= 21){
                  possibility = (uint64_t)KNIGHT_RANGE<<(index-21);
            }
            else{
                  possibility = (uint64_t)KNIGHT_RANGE>>(21-index);
            }
            if (index%8 < 4){
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else{
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            possibility &=(~WHITE_PIECES)&checkMaskWhite;
            possibility = afterPinMask(possibility,BinPlace,index);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WN;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            WWN &= ~BinPlace;
            BinPlace = WWN&~(WWN-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}

list<Move> WhiteKingMoves(int64_t WWK){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &kingTable[0];
      int64_t BinPlace = WWK&~(WWK-1);
      int64_t possibility = 0;
      while (BinPlace != 0)
      {
            int index = trailing_zeros(BinPlace);
            if (index >= 9){
                  possibility = (uint64_t)KING_RANGE<<(index-9);
            }
            else{
                  possibility = (uint64_t)KING_RANGE>>(9-index);
            }
            if (index%8 < 4){
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else{
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            possibility &=~(WHITE_PIECES|blackAttackSquares);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &WK;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            WWK &= ~BinPlace;
            BinPlace = WWK&~(WWK-1);
      }
      if(whiteKingIndex==60&(canWshort)&(6917529027641081856&(OCCUPIED|blackAttackSquares))==0&(blackAttackSquares&WK)==0&(WR&(-9223372036854775807-1))!=0){
            currentMove.ptr = &WK;
            currentMove.startIndex = 60;
            currentMove.targetIndex = 62;
            moveList.push_back(currentMove);
      }
      if(whiteKingIndex==60&(canWlong)&(1008806316530991104&(OCCUPIED))==0&(blackAttackSquares&2017612633061982208)==0&(WR&72057594037927936)!=0){
            currentMove.ptr = &WK;
            currentMove.startIndex = 60;
            currentMove.targetIndex = 58;
            moveList.push_back(currentMove);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}

list<Move> BlackRookMoves(int64_t BBR){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &rookTable[0];
      int64_t BinPlace = BBR&~(BBR-1);
      int64_t possibility;
      while(BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            possibility = HoriVerti(index)&checkMaskBlack;
            possibility = afterPinMask(possibility,BinPlace,index);
            possibility &=(~BLACK_PIECES);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BR;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            BBR &= ~BinPlace;
            BinPlace = BBR&~(BBR-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}
list<Move> BlackBishopMoves(int64_t BBB){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &bishopTable[0];
      int64_t BinPlace = BBB&~(BBB-1);
      int64_t possibility;
      while(BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            possibility = DiagAntiDiag(index)&checkMaskBlack;
            possibility = afterPinMask(possibility,BinPlace,index);
            possibility &=(~BLACK_PIECES);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BB;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            BBB &= ~BinPlace;
            BinPlace = BBB&~(BBB-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}
list<Move> BlackQueenMoves(int64_t BBQ){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &queenTable[0];
      int64_t BinPlace = BBQ&~(BBQ-1);
      int64_t possibility;
      while(BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            possibility = ((DiagAntiDiag(index)|HoriVerti(index))&checkMaskBlack);
            possibility = afterPinMask(possibility,BinPlace,index);
            possibility &=(~BLACK_PIECES);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BQ;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            BBQ &= ~BinPlace;
            BinPlace = BBQ&~(BBQ-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}
list<Move> BlackKnightMoves(int64_t BBN){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &knightTable[0];
      int64_t BinPlace = BBN&~(BBN-1);
      int64_t possibility = 0;
      while (BinPlace != 0){
            int index = trailing_zeros(BinPlace);
            if (index >= 21){
                  possibility = (uint64_t)KNIGHT_RANGE<<(index-21);
            }
            else{
                  possibility = (uint64_t)KNIGHT_RANGE>>(21-index);
            }
            if (index%8 < 4){
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else{
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            possibility &=(~BLACK_PIECES)&checkMaskBlack;
            possibility = afterPinMask(possibility,BinPlace,index);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BN;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            BBN &= ~BinPlace;
            BinPlace = BBN&~(BBN-1);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}

list<Move> BlackKingMoves(int64_t BBK){
      list<Move> moveList;
      list<Move>::iterator it;
      Move currentMove;
      currentMove.table = &kingTable[0];
      int64_t BinPlace = BBK&~(BBK-1);
      int64_t possibility = 0;
      while (BinPlace != 0)
      {
            int index = trailing_zeros(BinPlace);
            if (index >= 9){
                  possibility = (uint64_t)KING_RANGE<<(index-9);
            }
            else{
                  possibility = (uint64_t)KING_RANGE>>(9-index);
            }
            if (index%8 < 4){
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else{
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            possibility &=~(BLACK_PIECES|whiteAttackSquares);
            int64_t square = possibility&~(possibility-1);
            while (square != 0){
                  int i = trailing_zeros(square);
                  currentMove.startIndex = index;
                  currentMove.targetIndex = i;
                  currentMove.ptr = &BK;
                  moveList.push_back(currentMove);
                  possibility &= ~square;
                  square = possibility&~(possibility-1);
            }
            BBK &= ~BinPlace;
            BinPlace = BBK&~(BBK-1);
      }
      if(blackKingIndex==4&canBshort&(96&OCCUPIED)==0 & (112&whiteAttackSquares)==0 & (BR&128)!=0){
            currentMove.ptr = &BK;
            currentMove.startIndex = 4;
            currentMove.targetIndex = 6;
            moveList.push_back(currentMove);
      }
      if(blackKingIndex==4&canBlong&(14&OCCUPIED)==0 & (28&whiteAttackSquares)==0 & (BR&1)!=0){
            currentMove.ptr = &BK;
            currentMove.startIndex = 4;
            currentMove.targetIndex = 2;
            moveList.push_back(currentMove);
      }
      /*for(it=moveList.begin(); it!=moveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      return moveList;
}

int64_t generateQueenMask(int KI,int index, int64_t Queen, int64_t King){
      int64_t mask = 0L;
      if(KI>index){
            mask = (King-Queen)&VerticalMask[KI%8]&VerticalMask[index%8];
            mask |= (King-Queen)&HorizontalMask[KI/8]&HorizontalMask[index/8];
            mask |= (King-Queen)&DiagonalMask[7-(KI/8-KI%8)]&DiagonalMask[7-(index/8-index%8)];
            mask |= (King-Queen)&AntiDiagonalMask[14-(KI/8+KI%8)]&AntiDiagonalMask[14-(index/8+index%8)];
      }
      else{
            mask = (Queen-King)&VerticalMask[KI%8]&VerticalMask[index%8];
            mask |= (Queen-King)&HorizontalMask[KI/8]&HorizontalMask[index/8];
            mask |= (Queen-King)&DiagonalMask[7-(KI/8-KI%8)]&DiagonalMask[7-(index/8-index%8)];
            mask |= (Queen-King)&AntiDiagonalMask[14-(KI/8+KI%8)]&AntiDiagonalMask[14-(index/8+index%8)];
      }
      mask |= Queen;
      return mask;
}
int64_t generateBishopmask(int KI, int index, int64_t Bishop, int64_t King){
      int64_t mask = 0;
      if(KI>index){
            mask |= (King-Bishop)&DiagonalMask[7-(KI/8-KI%8)]&DiagonalMask[7-(index/8-index%8)];
            mask |= (King-Bishop)&AntiDiagonalMask[14-(KI/8+KI%8)]&AntiDiagonalMask[14-(index/8+index%8)];
      }
      else{
            mask |= (Bishop-King)&DiagonalMask[7-(KI/8-KI%8)]&DiagonalMask[7-(index/8-index%8)];
            mask |= (Bishop-King)&AntiDiagonalMask[14-(KI/8+KI%8)]&AntiDiagonalMask[14-(index/8+index%8)];
      }
      mask|=Bishop;
      return mask;
}
int64_t generateRookMask(int KI, int index, int64_t Rook, int64_t King){
      int64_t mask = 0L;
      if(KI > index){
            mask = (King-Rook)&VerticalMask[KI%8]&VerticalMask[index%8];
            mask |= (King-Rook)&HorizontalMask[KI/8]&HorizontalMask[index/8];
      }
      else{
            mask = (Rook-King)&VerticalMask[KI%8]&VerticalMask[index%8];
            mask |= (Rook-King)&HorizontalMask[KI/8]&HorizontalMask[index/8];
      }
      mask |= Rook;
      return mask;
}

void generateWhiteAtackingSquares(int64_t WWP,int64_t WWK,int64_t WWB,int64_t WWN,int64_t WWQ,int64_t WWR,int64_t BBP,int64_t BBR,int64_t BBK,int64_t BBN,int64_t BBB,int64_t BBQ){
      checkMaskBlack = -1L;
      whiteCheckers = 0;
      whiteAttackSquares = 0L;
      EMPTY = ~(BBP|BBN|BBB|BBR|BBQ|WWP|WWK|WWN|WWB|WWR|WWQ);
      OCCUPIED = ~EMPTY;
      int64_t WHITE_PAWN_ATTACK = (((uint64_t)WWP>>7)&(~RANK_8)&(~FILE_A))|(((uint64_t)WWP>>9)&(~RANK_8)&(~FILE_H));//capture left and right
      whiteAttackSquares = WHITE_PAWN_ATTACK;
      if((((uint64_t)BBK<<7)&WWP)!=0){
            checkMaskBlack = (uint64_t)BBK<<7;
            whiteCheckers++;
      }
      if((((uint64_t)BBK<<9)&WWP)!=0){
            checkMaskBlack = (uint64_t)BBK<<9;
            whiteCheckers++;
      }
      int64_t BinPlace = 0L;
      int64_t possibility;
      //Bishop attacks
      BinPlace = WWB&~(WWB-1);
      while(BinPlace!=0){
            int index = trailing_zeros(BinPlace);
            possibility = DiagAntiDiag(index);
            whiteAttackSquares |= possibility;
            if((possibility&BBK) != 0) {
                  checkMaskBlack = generateBishopmask(blackKingIndex,index,BinPlace,BBK);
                  whiteCheckers++;
            }
            WWB &= ~BinPlace;
            BinPlace = WWB&~(WWB-1);
      }
      //Queen attacks
      BinPlace = WWQ&~(WWQ-1);
      while(BinPlace!=0){
            int index = trailing_zeros(BinPlace);
            possibility = DiagAntiDiag(index)|HoriVerti(index);
            whiteAttackSquares |= possibility;
            if((possibility&BBK) != 0) {
                  checkMaskBlack = generateQueenMask(blackKingIndex,index,BinPlace,BBK);
                  whiteCheckers++;
            }
            WWQ &= ~BinPlace;
            BinPlace = WWQ&~(WWQ-1);
      }
      //Rook Attacks
      BinPlace = WWR&~(WWR-1);
      while(BinPlace!=0){
            int index = trailing_zeros(BinPlace);
            possibility = HoriVerti(index);
            whiteAttackSquares |= possibility;
            if((possibility&BBK) != 0) {
                  checkMaskBlack = generateRookMask(blackKingIndex,index,BinPlace,BBK);
                  whiteCheckers++;
            }
            WWR &= ~BinPlace;
            BinPlace = WWR&~(WWR-1);
      }
      //Knight Attacks
      BinPlace = WWN&~(WWN-1);
      possibility = 0;
      while (BinPlace != 0)
      {
            int index = trailing_zeros(BinPlace);
            if (index >= 21)
            {
                  possibility = (uint64_t)KNIGHT_RANGE<<(index-21);
            }
            else
            {
                  possibility = (uint64_t)KNIGHT_RANGE>>(21-index);
            }
            if (index%8 < 4)
            {
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else
            {
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            if((possibility&BBK) != 0) {
                  checkMaskBlack = BinPlace;
                  whiteCheckers++;
            }
            whiteAttackSquares |= possibility;
            WWN &= ~BinPlace;
            BinPlace = WWN&~(WWN-1);
      }
      //King Attacks
      BinPlace = WWK&~(WWK-1);
      possibility = 0;
      while (BinPlace != 0)
      {
            int index = trailing_zeros(BinPlace);
            if (index >= 9)
            {
                  possibility = (uint64_t)KING_RANGE<<(index-9);
            }
            else
            {
                  possibility = (uint64_t)KING_RANGE>>(9-index);
            }
            if (index%8 < 4)
            {
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else
            {
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            whiteAttackSquares |= possibility;
            WWK &= ~BinPlace;
            BinPlace = WWK&~(WWK-1);
      }
}

void generateBlackAtackingSquares(int64_t WWP,int64_t WWK,int64_t WWB,int64_t WWN,int64_t WWQ,int64_t WWR,int64_t BBP,int64_t BBR,int64_t BBK,int64_t BBN,int64_t BBB,int64_t BBQ){
      checkMaskWhite = -1L;
      blackCheckers = 0;
      blackAttackSquares = 0L;
      EMPTY = ~(BBP|BBN|BBB|BBR|BBQ|WWP|BBK|WWN|WWB|WWR|WWQ);
      OCCUPIED = ~EMPTY;
      int64_t BLACK_PAWN_ATTACK = (((uint64_t)BBP<<7)&(~RANK_8)&(~FILE_H))|((((uint64_t)BBP)<<9)&(~RANK_8)&(~FILE_A));//capture left and right
      blackAttackSquares = BLACK_PAWN_ATTACK;
      if((((uint64_t)WWK>>7)&BBP)!=0){
            checkMaskWhite = (uint64_t)WWK>>7;
            blackCheckers++;
      }
      if((((uint64_t)WWK>>9)&BBP)!=0){
            checkMaskWhite = (uint64_t)WWK>>9;
            blackCheckers++;
      }
      int64_t BinPlace = 0L;
      int64_t possibility;
      //Bishop attacks
      BinPlace = BBB&~(BBB-1);
      while(BinPlace!=0){
            int index = trailing_zeros(BinPlace);
            possibility = DiagAntiDiag(index);
            blackAttackSquares |= possibility;
            if((possibility&WWK) != 0) {
                  checkMaskWhite = generateBishopmask(whiteKingIndex,index,BinPlace,WWK);
                  blackCheckers++;
            }
            BBB &= ~BinPlace;
            BinPlace = BBB&~(BBB-1);
      }
      //Queen attacks
      BinPlace = BBQ&~(BBQ-1);
      while(BinPlace!=0){
            int index = trailing_zeros(BinPlace);
            possibility = DiagAntiDiag(index)|HoriVerti(index);
            blackAttackSquares |= possibility;
            if((possibility&WWK) != 0){
                  checkMaskWhite = generateQueenMask(whiteKingIndex,index,BinPlace,WWK);
                  blackCheckers++;
            }
            BBQ &= ~BinPlace;
            BinPlace = BBQ&~(BBQ-1);
      }
      //Rook Attacks
      BinPlace = BBR&~(BBR-1);
      while(BinPlace!=0){
            int index = trailing_zeros(BinPlace);
            possibility = HoriVerti(index);
            blackAttackSquares |= possibility;
            if((possibility&WWK) != 0) {
                  checkMaskWhite = generateRookMask(whiteKingIndex,index,BinPlace,WWK);
                  blackCheckers++;
            }
            BBR &= ~BinPlace;
            BinPlace = BBR&~(BBR-1);
      }
      //Knight Attacks
      BinPlace = BBN&~(BBN-1);
      possibility = 0;
      while (BinPlace != 0)
      {
            int index = trailing_zeros(BinPlace);
            if (index >= 21)
            {
                  possibility = (uint64_t)KNIGHT_RANGE<<(index-21);
            }
            else
            {
                  possibility = (uint64_t)KNIGHT_RANGE>>(21-index);
            }
            if (index%8 < 4)
            {
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else
            {
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            if((possibility&WWK) != 0) {
                  checkMaskWhite = BinPlace;
                  blackCheckers++;
            }
            blackAttackSquares |= possibility;
            BBN &= ~BinPlace;
            BinPlace = BBN&~(BBN-1);
      }
      //King Attacks
      BinPlace = BBK&~(BBK-1);
      possibility = 0;
      while (BinPlace != 0)
      {
            int index = trailing_zeros(BinPlace);
            if (index >= 9)
            {
                  possibility = (uint64_t)KING_RANGE<<(index-9);
            }
            else
            {
                  possibility = (uint64_t)KING_RANGE>>(9-index);
            }
            if (index%8 < 4)
            {
                  possibility &= ~(FILE_H|4629771061636907072L);
            }
            else
            {
                  possibility &= ~(FILE_A|144680345676153346L);
            }
            blackAttackSquares |= possibility;
            BBK &= ~BinPlace;
            BinPlace = BBK&~(BBK-1);
      }
}

void pinnedPiecesWhite(){
      pinV = 0L;
      pinH = 0L;
      pinD = 0L;
      pinAD = 0L;
      int64_t Binary = WK;
      int index = whiteKingIndex;
      int64_t possibleV = (BLACK_PIECES)&(VerticalMask[index%8]);
      int64_t possibleH = (BLACK_PIECES)&(HorizontalMask[(index/8)]);
      int64_t possibleD = (BLACK_PIECES)&(DiagonalMask[7-(index/8-index%8)]);
      int64_t possibleAD = (BLACK_PIECES)&(AntiDiagonalMask[14-(index/8+index%8)]);
      int64_t topV = ((possibleV-Binary)^(possibleV))&possibleV;
      int64_t bottomV = ReverseBits(ReverseBits(possibleV)-ReverseBits(Binary)^(ReverseBits(possibleV)))&possibleV;
      int64_t rightH = ((possibleH-Binary)^(possibleH))&possibleH;
      int64_t leftH = ReverseBits((ReverseBits(possibleH)-ReverseBits(Binary))^(ReverseBits(possibleH)))&possibleH;
      int64_t topD = ((possibleD-Binary)^(possibleD))&possibleD;
      int64_t bottomD = ReverseBits(ReverseBits(possibleD)-ReverseBits(Binary)^(ReverseBits(possibleD)))&possibleD;
      int64_t topAD = ((possibleAD-Binary)^(possibleAD))&possibleAD;
      int64_t bottomAD = ReverseBits(ReverseBits(possibleAD)-ReverseBits(Binary)^(ReverseBits(possibleAD)))&possibleAD;
      int64_t pinnedT = ((WHITE_PIECES)&(VerticalMask[index%8]))&(topV-Binary)&(~Binary);
      int64_t pinnedB = ((WHITE_PIECES)&(VerticalMask[index%8]))&(Binary-bottomV)&(~Binary);
      int64_t pinnedR = ((WHITE_PIECES)&(HorizontalMask[index/8]))&(rightH-Binary)&(~Binary);
      int64_t pinnedL = ((WHITE_PIECES)&(HorizontalMask[index/8]))&(Binary-leftH)&(~Binary);
      int64_t pinnedTD = ((WHITE_PIECES)&(DiagonalMask[7-(index/8-index%8)]))&(topD-Binary)&(~Binary);
      int64_t pinnedBD = ((WHITE_PIECES)&(DiagonalMask[7-(index/8-index%8)]))&(Binary-bottomD)&(~Binary);
      int64_t pinnedTAD = ((WHITE_PIECES)&(AntiDiagonalMask[14-(index/8+index%8)]))&(topAD-Binary)&(~Binary);
      int64_t pinnedBAD = ((WHITE_PIECES)&(AntiDiagonalMask[14-(index/8+index%8)]))&(Binary-bottomAD)&(~Binary);
      if(((topV&(BR|BQ))!=0)&(((pinnedT)&(pinnedT-1))==0)){
            pinV |= pinnedT;
      }
      if(((bottomV&(BR|BQ))!=0)&(((pinnedB)&(pinnedB-1))==0)){
            pinV |= pinnedB;
      }
      if(((rightH&(BR|BQ))!=0)&(((pinnedR)&(pinnedR-1))==0)){
            pinH |= pinnedR;
      }
      if(((leftH&(BR|BQ))!=0)&(((pinnedL)&(pinnedL-1))==0)){
            pinH |= pinnedL;
      }
      if(((topD&(BB|BQ))!=0)&(((pinnedTD)&(pinnedTD-1))==0)){
            pinD |= pinnedTD;
      }
      if(((topAD&(BB|BQ))!=0)&(((pinnedTAD)&(pinnedTAD-1))==0)){
            pinAD |= pinnedTAD;
      }
      if(((bottomD&(BB|BQ))!=0)&(((pinnedBD)&(pinnedBD-1))==0)){
            pinD |= pinnedBD;
      }
      if(((bottomAD&(BB|BQ))!=0)&(((pinnedBAD)&(pinnedBAD-1))==0)){
            pinAD |= pinnedBAD;
      }
}

void pinnedPiecesBlack(){
      pinV = 0L;
      pinH = 0L;
      pinD = 0L;
      pinAD = 0L;
      int64_t Binary = BK;
      int index = blackKingIndex;
      int64_t possibleV = (WHITE_PIECES)&(VerticalMask[index%8]);
      int64_t possibleH = (WHITE_PIECES)&(HorizontalMask[(index/8)]);
      int64_t possibleD = (WHITE_PIECES)&(DiagonalMask[7-(index/8-index%8)]);
      int64_t possibleAD = (WHITE_PIECES)&(AntiDiagonalMask[14-(index/8+index%8)]);
      int64_t topV = ((possibleV-Binary)^(possibleV))&possibleV;
      int64_t bottomV = ReverseBits(ReverseBits(possibleV)-ReverseBits(Binary)^(ReverseBits(possibleV)))&possibleV;
      int64_t rightH = ((possibleH-Binary)^(possibleH))&possibleH;
      int64_t leftH = ReverseBits((ReverseBits(possibleH)-ReverseBits(Binary))^(ReverseBits(possibleH)))&possibleH;
      int64_t topD = ((possibleD-Binary)^(possibleD))&possibleD;
      int64_t bottomD = ReverseBits(ReverseBits(possibleD)-ReverseBits(Binary)^(ReverseBits(possibleD)))&possibleD;
      int64_t topAD = ((possibleAD-Binary)^(possibleAD))&possibleAD;
      int64_t bottomAD = ReverseBits(ReverseBits(possibleAD)-ReverseBits(Binary)^(ReverseBits(possibleAD)))&possibleAD;
      int64_t pinnedT = ((BLACK_PIECES)&(VerticalMask[index%8]))&(topV-Binary)&(~Binary);
      int64_t pinnedB = ((BLACK_PIECES)&(VerticalMask[index%8]))&(Binary-bottomV)&(~Binary);
      int64_t pinnedR = ((BLACK_PIECES)&(HorizontalMask[index/8]))&(rightH-Binary)&(~Binary);
      int64_t pinnedL = ((BLACK_PIECES)&(HorizontalMask[index/8]))&(Binary-leftH)&(~Binary);
      int64_t pinnedTD = ((BLACK_PIECES)&(DiagonalMask[7-(index/8-index%8)]))&(topD-Binary)&(~Binary);
      int64_t pinnedBD = ((BLACK_PIECES)&(DiagonalMask[7-(index/8-index%8)]))&(Binary-bottomD)&(~Binary);
      int64_t pinnedTAD = ((BLACK_PIECES)&(AntiDiagonalMask[14-(index/8+index%8)]))&(topAD-Binary)&(~Binary);
      int64_t pinnedBAD = ((BLACK_PIECES)&(AntiDiagonalMask[14-(index/8+index%8)]))&(Binary-bottomAD)&(~Binary);
      if(((topV&(WR|WQ))!=0)&(((pinnedT)&(pinnedT-1))==0)){
            pinV |= pinnedT;
      }
      if(((bottomV&(WR|WQ))!=0)&(((pinnedB)&(pinnedB-1))==0)){
            pinV |= pinnedB;
      }
      if(((rightH&(WR|WQ))!=0)&(((pinnedR)&(pinnedR-1))==0)){
            pinH |= pinnedR;
      }
      if(((leftH&(WR|WQ))!=0)&(((pinnedL)&(pinnedL-1))==0)){
            pinH |= pinnedL;
      }
      if(((topD&(WB|WQ))!=0)&(((pinnedTD)&(pinnedTD-1))==0)){
            pinD |= pinnedTD;
      }
      if(((topAD&(WB|WQ))!=0)&(((pinnedTAD)&(pinnedTAD-1))==0)){
            pinAD |= pinnedTAD;
      }
      if(((bottomD&(WB|WQ))!=0)&(((pinnedBD)&(pinnedBD-1))==0)){
            pinD |= pinnedBD;
      }
      if(((bottomAD&(WB|WQ))!=0)&(((pinnedBAD)&(pinnedBAD-1))==0)){
            pinAD |= pinnedBAD;
      }
}

list<Move> sortMoves(bool white, list<Move> &moves){
      const int size = moves.size();
      list <Move> goodMoves;
      if(white){
            int score[size];
            list<Move>::iterator it;
            int i=0;
            for(it=moves.begin(),i=0; it!=moves.end();++it,i++){
                  Move currentMove = *it;
                  int tempWM = whiteMaterial;
                  int tempWP = whitePosition;
                  int tempBM = blackMaterial;
                  int tempBP = blackPosition;
                  bool tempShort = canWshort;
                  bool tempLong = canWlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  score[i]= -Evaluation();
                  undoMove(&currentMove,ptr);
                  canWshort = tempShort;
                  canWlong = tempLong;
                  whiteMaterial = tempWM;
                  whitePosition = tempWP;
                  blackPosition = tempBP;
                  blackMaterial = tempBM;
            }
            for (i=0; i<min(5,size);i++){
                  int max = -100000, location = 0;
                  for(int j=0; j<moves.size();j++){
                        if(score[j]>max){
                              max = score[j];
                              location = j;
                        }
                  }
                  list<Move>::iterator it;
                  it = moves.begin();
                  advance(it,location);
                  Move goodMove = *it;
                  moves.erase(it);
                  goodMoves.push_back(goodMove);
                  score[location] = -10000;
            }
      }
      else{
            int score[moves.size()];
            list<Move>::iterator it;
            int i=0;
            for(it=moves.begin(),i=0; it!=moves.end();++it,i++){
                  Move currentMove = *it;
                  int tempWM = whiteMaterial;
                  int tempWP = whitePosition;
                  int tempBM = blackMaterial;
                  int tempBP = blackPosition;
                  bool tempShort = canBshort;
                  bool tempLong = canBlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  score[i]= Evaluation();
                  undoMove(&currentMove,ptr);
                  canBshort = tempShort;
                  canBlong = tempLong;
                  whiteMaterial = tempWM;
                  whitePosition = tempWP;
                  blackPosition = tempBP;
                  blackMaterial = tempBM;
            }
            for (i=0; i<min(5,size);i++){
                  int max = -100000, location = 0;
                  for(int j=0; j<moves.size();j++){
                        if(score[j]>max){
                              max = score[j];
                              location = j;
                        }
                  }
                  list<Move>::iterator it;
                  it = moves.begin();
                  advance(it,location);
                  Move goodMove = *it;
                  moves.erase(it);
                  goodMoves.push_back(goodMove);
                  score[location] = -10000;
            }
      }
      moves.splice(moves.begin(),goodMoves);
      return moves;
}
list<Move> possibleWhiteMoves(){
      std::list<Move> whiteMoveList;
      list<Move>::iterator it;
      BLACK_PIECES = (BP|BN|BB|BR|BQ|BK);
      WHITE_PIECES = (WP|WN|WB|WR|WQ|WK);
      whiteKingIndex = trailing_zeros(WK);
      EMPTY = ~(BP|BN|BB|BR|BQ|WP|WK|WN|WB|WR|WQ);
      OCCUPIED = ~EMPTY;
      generateBlackAtackingSquares(WP,WK,WB,WN,WQ,WR,BP,BR,BK,BN,BB,BQ);
      EMPTY = ~(BP|BN|BB|BR|BQ|WP|WK|WN|WB|WR|WQ|BK);
      OCCUPIED = ~EMPTY;
      if(blackCheckers>=2){
            list<Move> kingMoves = WhiteKingMoves(WK);
            copy(kingMoves.rbegin(), kingMoves.rend(), front_inserter(whiteMoveList));
            return whiteMoveList;
      }
      pinnedPiecesWhite();
      list<Move> pawnMoves = WhitePawnMoves(WP);
      list<Move> bishopMoves = WhiteBishopMoves(WB);
      list<Move> knightMoves = WhiteKnightMoves(WN);
      list<Move> rookMoves = WhiteRookMoves(WR);
      list<Move> queenMoves = WhiteQueenMoves(WQ);
      list<Move> kingMoves = WhiteKingMoves(WK);
      copy(pawnMoves.rbegin(), pawnMoves.rend(), front_inserter(whiteMoveList));
      copy(knightMoves.rbegin(), knightMoves.rend(), front_inserter(whiteMoveList));
      copy(bishopMoves.rbegin(), bishopMoves.rend(), front_inserter(whiteMoveList));
      copy(rookMoves.rbegin(), rookMoves.rend(), front_inserter(whiteMoveList));
      copy(queenMoves.rbegin(), queenMoves.rend(), front_inserter(whiteMoveList));
      copy(kingMoves.rbegin(), kingMoves.rend(), front_inserter(whiteMoveList));
      whiteMoveList = sortMoves(true,whiteMoveList);
      /*for(it=whiteMoveList.begin(); it!=whiteMoveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }
      cout<<"RealSIze = "<<whiteMoveList.size()<<"\n";*/
      return whiteMoveList;
}

list<Move> possibleBlackMoves(){
      list<Move> blackMoveList;
      list<Move>::iterator it;
      BLACK_PIECES = (BP|BN|BB|BR|BQ|BK);
      WHITE_PIECES = (WP|WN|WB|WR|WQ|WK);
      blackKingIndex = trailing_zeros(BK);
      EMPTY = ~(BP|BN|BB|BR|BQ|WP|BK|WN|WB|WR|WQ);
      OCCUPIED = ~EMPTY;
      generateWhiteAtackingSquares(WP,WK,WB,WN,WQ,WR,BP,BR,BK,BN,BB,BQ);
      EMPTY = ~(BP|BN|BB|BR|BQ|WP|WK|WN|WB|WR|WQ|BK);
      OCCUPIED = ~EMPTY;
      if(whiteCheckers>=2){
            list<Move> kingMoves = BlackKingMoves(BK);
            copy(kingMoves.rbegin(), kingMoves.rend(), front_inserter(blackMoveList));
            return blackMoveList;
      }
      pinnedPiecesBlack();
      list<Move> pawnMoves = BlackPawnMoves(BP);
      list<Move> bishopMoves = BlackBishopMoves(BB);
      list<Move> knightMoves = BlackKnightMoves(BN);
      list<Move> rookMoves = BlackRookMoves(BR);
      list<Move> queenMoves = BlackQueenMoves(BQ);
      list<Move> kingMoves = BlackKingMoves(BK);
      copy(kingMoves.rbegin(), kingMoves.rend(), front_inserter(blackMoveList));
      copy(rookMoves.rbegin(), rookMoves.rend(), front_inserter(blackMoveList));
      copy(queenMoves.rbegin(), queenMoves.rend(), front_inserter(blackMoveList));
      copy(knightMoves.rbegin(), knightMoves.rend(), front_inserter(blackMoveList));
      copy(bishopMoves.rbegin(), bishopMoves.rend(), front_inserter(blackMoveList));
      copy(pawnMoves.rbegin(), pawnMoves.rend(), front_inserter(blackMoveList));
      /*for(it=whiteMoveList.begin(); it!=whiteMoveList.end();++it){
            cout<<(*it).startIndex<<" ";
            cout<<(*it).targetIndex<<" | ";
      }*/
      blackMoveList = sortMoves(false,blackMoveList);
      return blackMoveList;
}

int endGameEvaluation(){
      if(whiteMaterial<250 & blackMaterial<250){
        AIdepth = 5;
      }
      else{
        AIdepth = 4;
      }
      if(whiteMaterial<250 || blackMaterial<250){
            Pvalue=300;
            int blackKingX = blackKingIndex%8, blackKingY = blackKingIndex/8;
            int whiteKingX = whiteKingIndex%8, whiteKingY = whiteKingIndex/8;
            int blackKingScore = 8-max(3-blackKingX, blackKingX-4)+max(3-blackKingY, blackKingY-4);
            int whiteKingScore = max(3-whiteKingX, whiteKingX-4)+max(3-whiteKingY, whiteKingY-4);
            int evaluation = whiteKingScore*3;
            int distanceBetweenKings = (abs(blackKingX-whiteKingX)+abs(blackKingY-whiteKingY))*3 + blackKingScore;
            evaluation += 14-distanceBetweenKings;
            return (int)evaluation*25;
      }
      else if(whiteMaterial<1100||blackMaterial<1100){
            Pvalue=200;
            int blackKingX = blackKingIndex%8, blackKingY = blackKingIndex/8;
            int whiteKingX = whiteKingIndex%8, whiteKingY = whiteKingIndex/8;
            int blackKingScore = 8-max(3-blackKingX, blackKingX-4)+max(3-blackKingY, blackKingY-4);
            int whiteKingScore = max(3-whiteKingX, whiteKingX-4)+max(3-whiteKingY, whiteKingY-4);
            int evaluation = whiteKingScore;
            int distanceBetweenKings = abs(blackKingX-whiteKingX)+abs(blackKingY-whiteKingY);
            evaluation += 14-distanceBetweenKings;
            return evaluation*20;
      }
      else{
        Pvalue = 100;
      }
      return 0;
}


int Evaluation(){
      int score;
      int material = blackMaterial-whiteMaterial;
      int position = blackPosition-whitePosition;
      int endgame = endGameEvaluation();
      score = material+position+endgame;
      return score;
}

void performMove(Move *move){
      int start = move->startIndex;
      int end = move->targetIndex;
      int64_t bitStart = ((uint64_t)1L<<start);
      int64_t bitEnd = ((uint64_t)1L<<end);
      *(move->ptr)&=~(bitStart);
      *(move->ptr)|= (bitEnd);
      switch(Board[end]){
            case '0': break;
            case 'P':WP&=~(bitEnd); break;
            case 'K':WK&=~(bitEnd); break;
            case 'B':WB&=~(bitEnd); break;
            case 'N':WN&=~(bitEnd); break;
            case 'Q':WQ&=~(bitEnd); break;
            case 'R':WR&=~(bitEnd); break;
            case 'p':BP&=~(bitEnd); break;
            case 'k':BK&=~(bitEnd); break;
            case 'b':BB&=~(bitEnd); break;
            case 'n':BN&=~(bitEnd); break;
            case 'q':BQ&=~(bitEnd); break;
            case 'r':BR&=~(bitEnd); break;
      }
      return;
}

int64_t* performMoveInternal(Move *move){
      int64_t startIndex = (((uint64_t)1L)<<(move->startIndex));
      int64_t targetIndex = (((uint64_t)1L)<<(move->targetIndex));
      int64_t *ptrr=NULL;
      int const *tablePtr = (move->table);
      if((BLACK_PIECES&startIndex)!=0){
            blackPosition -= *(tablePtr+63-move->startIndex);
            blackPosition += *(tablePtr+63-move->targetIndex);
      }
      else{
            whitePosition -= *(tablePtr+move->startIndex);
            whitePosition += *(tablePtr+move->targetIndex);
      }
      if((targetIndex&BP)!=0){
            BP&=~(targetIndex);
            blackMaterial -= Pvalue;
            ptrr = &BP;
            blackPosition -= pawnTable[63-move->targetIndex];
      }
      else if((targetIndex&BB)!=0){
            BB&=~(targetIndex);
            blackMaterial -= Bvalue;
            ptrr = &BB;
            blackPosition -= bishopTable[63-move->targetIndex];
      }
      else if((targetIndex&BR)!=0){
            BR&=~(targetIndex);
            blackMaterial -= Rvalue;
            ptrr = &BR;
            blackPosition -= rookTable[63-move->targetIndex];
      }
      else if((targetIndex&BQ)!=0){
            BQ&=~(targetIndex);
            blackMaterial -= Qvalue;
            ptrr = &BQ;
            blackPosition -= queenTable[63-move->targetIndex];
      }
      else if((targetIndex&BN)!=0){
            BN&=~(targetIndex);
            blackMaterial -= Nvalue;
            ptrr = &BN;
            blackPosition -= knightTable[63-move->targetIndex];
      }
      if((targetIndex&WP)!=0){
            WP&=~(targetIndex);
            whiteMaterial -= Pvalue;
            ptrr = &WP;
            whitePosition -= pawnTable[move->targetIndex];
      }
      else if((targetIndex&WB)!=0){
            WB&=~(targetIndex);
            whiteMaterial -= Bvalue;
            ptrr = &WB;
            whitePosition -= bishopTable[move->targetIndex];
      }
      else if((targetIndex&WR)!=0){
            WR&=~(targetIndex);
            whiteMaterial -= Rvalue;
            ptrr = &WR;
            whitePosition -= rookTable[move->targetIndex];
      }
      else if((targetIndex&WQ)!=0){
            WQ&=~(targetIndex);
            whiteMaterial -= Qvalue;
            ptrr = &WQ;
            whitePosition -= queenTable[move->targetIndex];
      }
      else if((targetIndex&WN)!=0){
            WN&=~(targetIndex);
            whiteMaterial -= Nvalue;
            ptrr = &WN;
            whitePosition -= knightTable[move->targetIndex];
      }
      if((move->startIndex==60 & move->targetIndex==62 & *(move->ptr)==WK)&(WR&(-9223372036854775807-1))!=0){
            *(move->ptr)&=~(startIndex);
            *(move->ptr)|= (targetIndex);
            WR &= ~(-9223372036854775807-1);
            //cout<<"Castle";
            WR |= 2305843009213693952;
            canWshort = false;
            canWlong = false;
            ptrr = &WK;
            return ptrr;
      }
      else if(move->startIndex==60 & move->targetIndex==58 & *(move->ptr)==WK & (WR&72057594037927936)!=0){
            *(move->ptr)&=~(startIndex);
            *(move->ptr)|= (targetIndex);
            WR &= ~(72057594037927936);
            //cout<<"Castle";
            WR |= (576460752303423488);
            ptrr = &WK;
            canWlong = false;
            canWshort = false;
            return ptrr;
      }
      else if(move->startIndex==4 & move->targetIndex==6 & *(move->ptr)==BK & (BR&128)!=0){
            *(move->ptr)&=~(startIndex);
            *(move->ptr)|= (targetIndex);
            BR &= ~(128);
            //cout<<"Castle";
            BR |= (32);
            ptrr = &BK;
            canBshort = false;
            canBlong = false;
            return ptrr;
      }
      else if(move->startIndex==4 & move->targetIndex==2&*(move->ptr)==BK & (BR&1)!=0){
            *(move->ptr)&=~(startIndex);
            *(move->ptr)|= (targetIndex);
            BR &= ~(1);
            //cout<<"Castle";
            BR |= (8);
            ptrr = &BK;
            canBlong = false;
            canBshort = false;
            return ptrr;
      }
      if(move->ptr==&WK){
            canWlong=false;
            canWshort=false;
      }
      else if(move->ptr==&BK){
            canBlong=false;
            canBshort=false;
      }
      else if(move->ptr==&WR&move->startIndex==56){
            canWlong=false;
      }
      else if(move->ptr==&WR&move->startIndex==63){
            canWshort=false;
      }
      else if(move->ptr==&BR&move->startIndex==0){
            canBlong=false;
      }
      else if(move->ptr==&BR&move->startIndex==7){
            canBshort=false;
      }
      if(move->ptr==&WP & move->targetIndex<8){
            *(move->ptr)&=~(startIndex);
            WQ|=targetIndex;
            whiteMaterial+=Qvalue;
            whiteMaterial-=Pvalue;
            return ptrr;
      }
      else if(move->ptr==&BP & move->targetIndex>=56){
            *(move->ptr)&=~(startIndex);
            BQ|=targetIndex;
            blackMaterial+=Qvalue;
            blackMaterial-=Pvalue;
            return ptrr;
      }
      *(move->ptr)&=~(startIndex);
      *(move->ptr)|= (targetIndex);
      generating = false;
      return ptrr;
}

void undoMove(Move *move, int64_t *ptr){
      int64_t startIndex = ((uint64_t)1L<<(move->startIndex));
      int64_t targetIndex = ((uint64_t)1L<<(move->targetIndex));
      *(move->ptr)|=(startIndex);
      *(move->ptr)&=~(targetIndex);
      if(ptr == &WK){
            if(move->targetIndex==62){
                  WR |= (-9223372036854775807-1);
                  WR &= ~(2305843009213693952);
                  canWlong = true;
                  canWshort = true;
                  return;
            }
            else{
                  WR |= (72057594037927936);
                  WR &= ~(576460752303423488);
                  canWlong = true;
                  canWshort = true;
                  return;
            }
      }
      if(ptr == &BK){
            if(move->targetIndex==6){
                  BR |= (128);
                  BR &= ~(32);
                  canBshort = true;
                  canBlong = true;
                  return;
            }
            else{
                  BR |= (1);
                  BR &= ~(8);
                  canBshort = true;
                  canBlong = true;
                  return;
            }
      }
      if(move->ptr==&WP & move->targetIndex<8){
            WQ&= ~(targetIndex);
      }
      else if(move->ptr==&BP & move->targetIndex>=56){
            BQ&= ~(targetIndex);
      }
      if(ptr == NULL){
            return;
      }
      *ptr|=(targetIndex);
}

string takeInput(list <Move> canDo){
      cout<<"INPUT YOUR MOVE (Starting and Ending Coordinates of the piece): ";
      list<Move>::iterator it;
      string inputMove;
      bool legalMove = false;
      int startIndex = -1;
      int targetIndex = -1;
      Move currentMove;
      currentMove.startIndex = startIndex;
      currentMove.targetIndex = targetIndex;
      while(inputMove!="0" && !legalMove){
            canDo = possibleWhiteMoves();
            if(canDo.size()==0){
                  if(blackCheckers!=0){
                        CheckMate(false);
                  }
                  else{
                        StaleMate();
                  }
                  return "0";
            }
            cin>>inputMove;
            startIndex = ((int)inputMove[0]-97)+8*(8-((int)inputMove[1]-48));
            targetIndex = ((int)inputMove[2]-97)+8*(8-((int)inputMove[3]-48));
            for(it=canDo.begin(); it!=canDo.end();++it){
                  if((*it).startIndex == startIndex && (*it).targetIndex == targetIndex){
                        currentMove = *it;
                        legalMove = true;
                        break;
                  }
            }
            if(inputMove == "test"){
                  int depth;
                  bool white = true;
                  cout<<"Depth: ";
                  cin>>depth;
                  cout<<"White?: ";
                  cin>>white;
                  perftGenerationTest(white,depth);
            }
            else if(inputMove == "current"){
                  for(it=canDo.begin(); it!=canDo.end();++it){
                        Move toPrint = *it;
                        int sx = toPrint.startIndex%8;
                        int sy = (7-toPrint.startIndex/8)+1;
                        int tx = toPrint.targetIndex%8;
                        int ty = (7-toPrint.targetIndex/8)+1;
                        char Sx = char(sx+97);
                        char Tx = char(tx+97);
                        cout<<Sx<<sy<<Tx<<ty<<", ";
                  }
                  cout<<endl;
            }
            else if(inputMove == "bit"){
                  cout<<"\nWP=*"<<WP<<"*\n";
                  cout<<"\nWN=*"<<WN<<"*\n";
                  cout<<"\nWB=*"<<WB<<"*\n";
                  cout<<"\nWR=*"<<WR<<"*\n";
                  cout<<"\nWQ=*"<<WQ<<"*\n";
                  cout<<"\nWK=*"<<WK<<"*\n";
                  cout<<"\nBP=*"<<BP<<"*\n";
                  cout<<"\nBN=*"<<BN<<"*\n";
                  cout<<"\nBB=*"<<BB<<"*\n";
                  cout<<"\nBR=*"<<BR<<"*\n";
                  cout<<"\nBQ=*"<<BQ<<"*\n";
                  cout<<"\nBK=*"<<BK<<"*\n";
                  cout<<"\npinH=*"<<pinH<<"*\n";
                  cout<<"\npinV=*"<<pinV<<"*\n";
                  cout<<"\npinD=*"<<pinD<<"*\n";
                  cout<<"\npinAD=*"<<pinAD<<"*\n";
                  cout<<"\nBlack=*"<<BLACK_PIECES<<"*\n";
                  //cout<<(((uint64_t)WP>>7)&BLACK_PIECES);
            }
            else if(inputMove == "eval"){
                  cout<<"WEval= "<<(whiteMaterial+whitePosition)<<"\n";
                  cout<<"BEval= "<<(blackMaterial+blackPosition)<<"\n";
                  cout<<"EndGame= "<<endGameEvaluation()<<"\n";
            }
            else if(inputMove=="exit"){
                  cout<<"Lol Beech me hi chod rahe, Vaise bhi haarna hi tha \n\n"
                        "                   ᕦ(ò_óˇ)ᕤ                        \n";
                  cout<<"\nThanks For Playing!!! ಥ﹏ಥ\n";
                  return "0";
            }
            if(!legalMove) cout<<"Enter Legal Move: ";
      }
      if(inputMove!="0"){
            performMoveInternal(&currentMove);
      }
      if(Board[startIndex] == 'K'){
            if(currentMove.startIndex==60 && currentMove.targetIndex==62){
                  Board[61] = Board[63];
                  Board[63] = '0';
            }
            else if(currentMove.startIndex==60 && currentMove.targetIndex==58){
                  Board[59] = Board[56];
                  Board[56] = '0';
            }
            canWshort = false;
            canWlong = false;
      }
      else if(startIndex == 63){
            canWshort = false;
      }
      else if(startIndex == 56){
            canWlong = false;
      }
      if(currentMove.targetIndex==0){
            canBlong=false;
      }
      else if(currentMove.targetIndex==7){
            canBshort=false;
      }
      Board[targetIndex] = Board[startIndex];
      if(currentMove.targetIndex<8 & currentMove.ptr==&WP){
            Board[currentMove.targetIndex]='Q';
      }
      Board[startIndex] = '0';
      return inputMove;
}

int MoveGenerationTest(bool white, int depth){
      if(depth <= 0){
            return 1;
      }
      int numPositions = 0;
      string currentMove="";
      if(white){
            list <Move> moveList = possibleWhiteMoves();
            list<Move>::iterator it;
            for(it=moveList.begin(); it!=moveList.end();++it){
                  Move currentMove = *it;
                  int tempWM = whiteMaterial;
                  int tempWP = whitePosition;
                  int tempBM = blackMaterial;
                  int tempBP = blackPosition;
                  bool tempShort = canWshort;
                  bool tempLong = canWlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  numPositions += MoveGenerationTest(false,depth-1);
                  undoMove(&currentMove,ptr);
                  canWshort = tempShort;
                  canWlong = tempLong;
                  whiteMaterial = tempWM;
                  whitePosition = tempWP;
                  blackPosition = tempBP;
                  blackMaterial = tempBM;
            }
      }
      else{
            list <Move> moveList = possibleBlackMoves();
            list<Move>::iterator it;
            for(it=moveList.begin(); it!=moveList.end();++it){
                  Move currentMove = *it;
                  int tempWM = whiteMaterial;
                  int tempWP = whitePosition;
                  int tempBM = blackMaterial;
                  int tempBP = blackPosition;
                  bool tempShort = canBshort;
                  bool tempLong = canBlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  numPositions += MoveGenerationTest(true,depth-1);
                  undoMove(&currentMove,ptr);
                  canBshort = tempShort;
                  canBlong = tempLong;
                  whiteMaterial = tempWM;
                  whitePosition = tempWP;
                  blackPosition = tempBP;
                  blackMaterial = tempBM;
            }
      }
      return numPositions;
}

void perftGenerationTest(bool white, int depth){
      int totalMoves=0;
      if(white){
            list <Move> moveList = possibleWhiteMoves();
            list<Move>::iterator it;
            for(it=moveList.begin(); it!=moveList.end();++it){
                  Move currentMove = *it;
                  bool tempShort = canWshort;
                  bool tempLong = canWlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  int sx = currentMove.startIndex%8;
                  int sy = (7-currentMove.startIndex/8)+1;
                  int tx = currentMove.targetIndex%8;
                  int ty = (7-currentMove.targetIndex/8)+1;
                  char Sx = char(sx+97);
                  char Tx = char(tx+97);
                  int afterMoves=MoveGenerationTest(false,depth-1);
                  cout<<Sx<<sy<<Tx<<ty<<" : "<<afterMoves<<endl;
                  undoMove(&currentMove,ptr);
                  canWshort = tempShort;
                  canWlong = tempLong;
                  totalMoves+=afterMoves;
            }
      }
      else{
            list <Move> moveList = possibleBlackMoves();
            list<Move>::iterator it;
            for(it=moveList.begin(); it!=moveList.end();++it){
                  Move currentMove = *it;
                  bool tempShort = canBshort;
                  bool tempLong = canBlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  int sx = currentMove.startIndex%8;
                  int sy = (7-currentMove.startIndex/8)+1;
                  int tx = currentMove.targetIndex%8;
                  int ty = (7-currentMove.targetIndex/8)+1;
                  char Sx = char(sx+97);
                  char Tx = char(tx+97);
                  int afterMoves=MoveGenerationTest(true,depth-1);
                  cout<<Sx<<sy<<Tx<<ty<<" : "<<afterMoves<<endl;
                  undoMove(&currentMove,ptr);
                  canBshort = tempShort;
                  canBlong = tempLong;
                  totalMoves += afterMoves;
            }
      }
      cout<<"Total moves = "<<totalMoves<<endl;
}

int Search(bool white, int depth, int alpha, int beta){
      if(depth <= 0){
            return Evaluation();
      }
      int bestEval;
      if(white){
            bestEval = 10000;
            list <Move> moveList = possibleWhiteMoves();
            generateBlackAtackingSquares(WP,WK,WB,WN,WQ,WR,BP,BR,BK,BN,BB,BQ);
            if(moveList.size()==0){
                  if(blackCheckers!=0){
                        return 999999;
                  }
                  if(Evaluation()>0){
                        return -999999;
                  }
                  return 0;
            }
            list<Move>::iterator it;
            for(it=moveList.begin(); it!=moveList.end();++it){
                  Move currentMove = *it;
                  int tempWM = whiteMaterial;
                  int tempWP = whitePosition;
                  int tempBM = blackMaterial;
                  int tempBP = blackPosition;
                  bool tempShort = canWshort;
                  bool tempLong = canWlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  int evaluation = Search(false,depth-1,alpha,beta);
                  bestEval = min(bestEval,evaluation);
                  beta = min(evaluation,beta);
                  undoMove(&currentMove,ptr);
                  canWshort = tempShort;
                  canWlong = tempLong;
                  whiteMaterial = tempWM;
                  whitePosition = tempWP;
                  blackPosition = tempBP;
                  blackMaterial = tempBM;
                  if(beta<=alpha){
                        break;
                  }
            }
      }
      else{
            bestEval = -10000;
            list <Move> moveList = possibleBlackMoves();
            if(moveList.size()==0){
                  return -999999;
            }
            list<Move>::iterator it;
            for(it=moveList.begin(); it!=moveList.end();++it){
                  Move currentMove = *it;
                  int tempWM = whiteMaterial;
                  int tempWP = whitePosition;
                  int tempBM = blackMaterial;
                  int tempBP = blackPosition;
                  bool tempShort = canBshort;
                  bool tempLong = canBlong;
                  int64_t *ptr = performMoveInternal(&currentMove);
                  int evaluation = Search(true,depth-1,alpha,beta);
                  bestEval = max(bestEval,evaluation);
                  alpha = max(evaluation,alpha);
                  undoMove(&currentMove,ptr);
                  canBshort = tempShort;
                  canBlong = tempLong;
                  whiteMaterial = tempWM;
                  whitePosition = tempWP;
                  blackPosition = tempBP;
                  blackMaterial = tempBM;
                  if(beta<=alpha){
                        break;
                  }
            }
      }
      return bestEval;
}

void AImove(){
      auto start = chrono::steady_clock::now();
      generating = true;
      list <Move> moveList = possibleBlackMoves();
      if(moveList.size()==0){
            generateWhiteAtackingSquares(WP,WK,WB,WN,WQ,WR,BP,BR,BK,BN,BB,BQ);
            if(whiteCheckers!=0){
                  CheckMate(true);
            }
            else{
                  cout<<"StaleMate";
            }
            exit(0);
      }
      Move bestMove = *moveList.begin();
      list<Move>::iterator it;
      int bestEval = -10000;
      for(it=moveList.begin(); it!=moveList.end();++it){
            Move currentMove = *it;
            int tempWM = whiteMaterial;
            int tempWP = whitePosition;
            int tempBM = blackMaterial;
            int tempBP = blackPosition;
            bool tempShort = canBshort;
            bool tempLong = canBlong;
            int64_t *ptr = performMoveInternal(&currentMove);
            int evaluation = Search(true,AIdepth,-10000,10000);
            if(evaluation>bestEval){
                  bestEval = evaluation;
                  bestMove = currentMove;
            }
            undoMove(&currentMove,ptr);
            canBshort = tempShort;
            canBlong = tempLong;
            whiteMaterial = tempWM;
            whitePosition = tempWP;
            blackPosition = tempBP;
            blackMaterial = tempBM;
      }
      performMoveInternal(&bestMove);
      //cout<<bestMove.targetIndex;
      Board[bestMove.targetIndex] = Board[bestMove.startIndex];
      if(bestMove.targetIndex == 63) canWshort = false;
      if(bestMove.targetIndex == 56) canWlong = false;
      if(Board[bestMove.startIndex]=='k'){
            canBshort = false;
            canBlong = false;
            if(bestMove.targetIndex==2 & bestMove.startIndex==4){
                  Board[0] = '0';
                  Board[3] = 'r';
            }
            else if(bestMove.targetIndex==6 & bestMove.startIndex==4){
                  Board[7] = '0';
                  Board[5] = 'r';
            }
      }
      if(bestMove.targetIndex==56){
            canWlong=false;
      }
      else if(bestMove.targetIndex==63){
            canWshort=false;
      }
      Board[bestMove.startIndex] = '0';
      if(bestMove.targetIndex>=56&bestMove.ptr==&BP){
            Board[bestMove.targetIndex] = 'q';
      }
      printBoard();
      auto end = chrono::steady_clock::now();
      double elapsedTime = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
      cout<<"Time Elapesd = "<<elapsedTime/1e9<<"seconds       ";
      //cout<<"posEnd="<<(bestMove.table[63-bestMove.targetIndex])<<endl;
      //cout<<"posStart="<<(bestMove.table[63-bestMove.startIndex])<<endl;
      cout<<"Computer Moved : ";
      int sx = bestMove.startIndex%8;
      int sy = (7-bestMove.startIndex/8)+1;
      int tx = bestMove.targetIndex%8;
      int ty = (7-bestMove.targetIndex/8)+1;
      char Sx = char(sx+97);
      char Tx = char(tx+97);
      cout<<Sx<<sy<<Tx<<ty<<"\n";
      generating=false;
}
int main(){
      cout<<Welcome<<"\n\n";
      cout<<WelcomeText;
      cout<<goodLuck;
      string entry = "";
      cout<<"Input: ";
      while(entry!="Play"){
            getline(cin,entry);
      }
      for(int i=0; i<64;i++) Board[i]='0';
      string defaultFEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
      string customFEN;
      bool white = true;
      cout<<"Enter FEN string (If default game type(0)): ";
      getline(cin,customFEN);
      //system("clear");
      while(checkLegalFEN(customFEN)==false){
        cout<<"\nEnter Legal FEN or Type '0' if NEW GAME: ";
        getline(cin,customFEN);
      }
      if(customFEN != "0") defaultFEN = customFEN;
      initiateChessBoard(defaultFEN);
      blackKingIndex = trailing_zeros(BK);
      whiteKingIndex = trailing_zeros(WK);
      printBoard();
      if(black){
            AImove();
      }
      list<Move> currentPossible = possibleWhiteMoves();
      white = !white;
      while(takeInput(currentPossible)!="0"){
            printBoard();
            if(!generating){
                  currentPossible = possibleWhiteMoves();
            }
            AImove();
      }
      /*char inp;
      cout<<"Run test[Y/N]: ";
      cin>>inp;
      while(inp!='N'&&inp!='n'){
            auto start = chrono::steady_clock::now();
            perftGenerationTest(true,5);
            auto end = chrono::steady_clock::now();
            double elapsedTime = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
            cout<<"Time Elapesd = "<<elapsedTime/1e9<<"seconds";
            cout<<"Run test[Y/N]: ";
            cin>>inp;
      }
      cout<<"White m,p = "<<whiteMaterial<<" "<<whitePosition<<endl;
      cout<<"Black m,p = "<<blackMaterial<<" "<<blackPosition<<endl;*/
      return 0;
}

