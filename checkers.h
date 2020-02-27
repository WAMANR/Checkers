/**
 * \file checkers.c
 * \brief Fichier.h du checkers.
 * \author MONTAIGU Theo, ROUICHI Adil, MOMPI Emmanuel, BONNEROT Thomas
 * \version 1.0
 * \date 09 février 2020
 *
 * Contient les structures, variables globales et prototypes des fonctions.
 *
 */

#include <stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

//////////////////////////////////////////////////////////////////////STRUCTURES////////////////////////////////////////////////////////

/**
 * \struct tree_t
 * \brief Arbre de données coup.
 *
 * Tree_t est une arbre gérant tout les coups possibles.
 * L'arbre se termine par des fils du même type NULL.
 */

struct tree_t{

  int x;///< Coordonnée x de la case du noeud. 
  int y;///< Coordonnée y de la case du noeud. 
  int nbfils;///< Nombre de fils de cette case. 
  int score;///< Score de profondeur de ce chemin. 
  struct tree_t * fils[20];///< Les cases suivantes. 
};
typedef struct tree_t tree_t;

//////////////////////////////////////////////////////////////////////

/**
 * \struct move_t
 * \brief Objet chaîne de caractères.
 *
 * Str_t est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
 */

struct move_t{

  int x1;/*!< Coordonnée x */
  int y1;/*!< Chaîne avec  caractère null de fin de chaîne. */
  int x2;/*!< Chaîne avec  caractère null de fin de chaîne. */
  int y2;/*!< Chaîne avec  caractère null de fin de chaîne. */
  int type_piece;/*!< Chaîne avec  caractère null de fin de chaîne. */
  int prise;/*!< Chaîne avec  caractère null de fin de chaîne. */
  int x3;/*!< Chaîne avec  caractère null de fin de chaîne. */
  int y3;/*!< Chaîne avec  caractère null de fin de chaîne. */
};
typedef struct move_t move_t;

///////////////////////////////////////////////////////////////////////

/**
 * \struct Str_t
 * \brief Objet chaîne de caractères.
 *
 * Str_t est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
 */

struct checkers{

  int board[10][10];///< Chaîne avec  caractère null de fin de chaîne. 
  int player;///< Chaîne avec  caractère null de fin de chaîne. 
  int end;///< Chaîne avec  caractère null de fin de chaîne. 
  int stock1;///< Chaîne avec  caractère null de fin de chaîne. 
  int stock2;///< Chaîne avec  caractère null de fin de chaîne. 
  int queen1;///< Chaîne avec  caractère null de fin de chaîne. 
  int queen2;///< Chaîne avec  caractère null de fin de chaîne. 
  tree_t * t;///< Chaîne avec  caractère null de fin de chaîne. 
  int score;///< Chaîne avec  caractère null de fin de chaîne. 
};
typedef struct checkers checkers;


////////////////////////////////////////////////////////////PROTOTYPES FONCTIONS///////////////////////////////////////////////////////////////////

////////////////////////////fonctions.c///////////////////////////

move_t InitMove(move_t);
void Initboard();
void CreateQueen();
tree_t * BuildTree(tree_t *, checkers_t, int, int, int);
tree_t * MakeTree(tree_t *, checkers_t);
void Depth(tree_t *);
int PrintScore(tree_t);
int ChoicePiecePossible();
int Diago();
int QueenMove();
int ChooseMovePossible();
checkers_t InitPieces(checkers);
void ActualisationBoard();
void RemovePieces();
void ResetTabl();
void TablPiecePossible();
void TablMovePossible();
int Win();
int ChoicePiecePossibleCpy(int, int);


///////////////////////////display.c//////////////////////////////

void DisplayMenu();
void DisplayBoard(void);
void Rect();
void Animate(int);
void MovePiece();
void ShowPieces(checkers_t);
void Display();
void Init();
void KeyboarDown(int, int, int);
void ProcessNormalKeys(unsigned char, int, int);
void DisplayMessage();
void Crown();
void Show();



///////////////////////////////////////////////////////////VARIABLES GLOBALES///////////////////////////////////////////////////////// represent by _before;

extern int _xx;///<une chouette variable
extern int _yy;///<une chouette variable
extern checkers_t _game;///<une chouette variable
extern move_t _m;///<une chouette variable
extern int _max;///<une chouette variable
extern int _message;///<une chouette variable
extern int _menu;///<une chouette variable
extern int _hints;///<une chouette variable
extern int _selected;///<une chouette variable
extern int _selectedx;///<une chouette variable
extern int _selectedy;///<une chouette variable
extern int _developer_mode;///<une chouette variable
extern int _tabl_piece[10][10];///<une chouette variable