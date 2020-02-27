/**
 * \file main.c
 * \brief Main du checkers.
 * \author MONTAIGU Theo, ROUICHI Adil, MOMPI Emmanuel, BONNEROT Thomas
 * \version 1.0
 * \date 09 février 2020
 *
 * Main de toute l'application checkers.
 *
 */

#include "checkers.h"

/**
 * \fn prototype fonction
 * \brief blicblic
 *
 * \param bloublou
 * \return blabla
 */

int main(int argc, char** argv){

  game = initpieces(game);
  m = initMove(m);
  game.t = make_tree(game.t, game);
  tabl_piece_possible();

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(700,700);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Checkers");
  glutTimerFunc(1.0, animate, 0);
  glutDisplayFunc(display);
  glutKeyboardFunc(processNormalKeys);
  glutSpecialFunc(keyboardown);

  glutPostRedisplay();
  glutMainLoop();
 
}
