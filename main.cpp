#include <iostream>
class chess_bishop {
	public:
		// Chess piece 
		std::string k = "♔"; // white king
		std::string q = "♕"; // white queen
		std::string c = "♖"; // white castle
		std::string e = "♗"; // white bishop
		std::string h = "♘"; // white knight
		std::string s = "♙"; // white pawn
		std::string K = "♚"; // black king
		std::string Q = "♛"; // black queen
		std::string E = "♝"; // black bishop
		std::string C = "♜"; // black castle
		std::string H = "♞"; // black knight
		std::string S = "♟"; // black bishop
};

void chess_desk(int a , int b,)
{
	chess_bishop bishop;

	b += 1;
	std::string arr[a][b];
	int z = 8;
	for (int i = 0; i < a; i++) {
		std::cout << z;
		z = z - 1;
		for (int j = 0; j < b; j++) { 
			if ( i < 2 || i > 5) { 
				arr[0][0] = "|" + bishop.C;                    
                		arr[0][1] = "|" + bishop.H;                    
                		arr[0][2] = "|" + bishop.E;                    
                		arr[0][3] = "|" + bishop.Q;                    
                		arr[0][4] = "|" + bishop.K;                    
                		arr[0][5] = "|" + bishop.E;                    
                		arr[0][6] = "|" + bishop.H;
                		arr[0][7] = "|" + bishop.C;
                		arr[1][j] = "|" + bishop.S;
				arr[0][8] = "";
				arr[1][8] = "";
             			arr[7][0] = "|" + bishop.c;
                		arr[7][1] = "|" + bishop.h;
                		arr[7][2] = "|" + bishop.e;
                		arr[7][3] = "|" + bishop.q;     
                		arr[7][4] = "|" + bishop.k;   
                		arr[7][5] = "|" + bishop.e;
               	 		arr[7][6] = "|" + bishop.h;
                		arr[7][7] = "|" + bishop.c;
                		arr[6][j] = "|" + bishop.s;
				arr[6][8] = "";
				arr[7][8] = "";
			}else {
				if ( j % 2 == 0 ) {
					arr[i][j] = "|#";
				} else { 
					arr[i][j] = "| ";
				}
				if (i % 2 == 0) {
					arr[i][0] = arr[i][1];
				} else {
					arr[i][b - 1] = "";
				}
			}
			
			std::cout << arr[i][j];
		}
		std::cout<<"|"<< std::endl;
	}
	std::cout << "  A B C D E F G H\n";
}
void piece_move(){
	std::string piece,move;
	std::cout << "Please input the piece cordination in the desk and named place where it will be move(LIKE A2 A4)";
	std::cin >> piece;
	std::cin >> move;
	//std::cout << piece << "\n" << move;
	if (piece == "A2") {
		if (move == "A3" ) { 
			int x = 1;
			int m = 2;
			chess_desk(x, m);
		}else if (move == "A4"){
			if (arr[3][0] == "|#"){
				std::string symbol = arr[3][0]; 
				arr[3][0] == arr[1][0];
				arr[1][0] == symbol;
			}else if (arr[2][0] == "|#") {
				std::string symbol = arr[2][0]; 
				arr[2][0] == arr[1][0];
				arr[1][0] == symbol;
			}else {
				std::cout << ":("<<std::endl;
			}
			
		}
	}
	
}
int main() {
	chess_desk("" ,"" );
//	piece_move();
	return 0;
}
