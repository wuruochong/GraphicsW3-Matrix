#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;

  edges = new_matrix(4, 4);
  //edges->m[3][3] = 1.0;
  printf("new matrix\n");
  print_matrix(edges);

  printf("testing identity function\n");
  ident(edges);
  print_matrix(edges);

  printf("testing scalar mult function\n");
  scalar_mult(3.0,edges);
  print_matrix(edges);
/*
  printf("testing matrix mult function\n");
  struct matrix *identity;
  identity = new_matrix(4,4);
  ident(identity);
  matrix_mult(ident, edges);
  print_matrix(edges);


  struct matrix *one;
  struct matrix *two;
  one = new_matrix(4,4);
  two = new_matrix(4,5);
  one->m[0][0] = 1;
  one->m[0][1] = 2;
  one->m[0][2] = 3;
  one->m[0][3] = 4;
  one->m[1][0] = 5;
  one->m[1][1] = 6;
  one->m[1][2] = 7;
  one->m[1][3] = 8;
  one->m[2][0] = 9;
  one->m[2][1] = 10;
  one->m[2][2] = 11;
  one->m[2][3] = 12;
  one->m[3][0] = 13;
  one->m[3][1] = 14;
  one->m[3][2] = 15;
  one->m[3][3] = 16;

  print_matrix(one);
  printf("\n");
  two->m[0][0] = 1;
  two->m[0][1] = 2;
  two->m[0][2] = 3;
  two->m[0][3] = 4;
  two->m[0][4] = 5;

  two->m[1][0] = 6;
  two->m[1][1] = 7;
  two->m[1][2] = 8;
  two->m[1][3] = 9;
  two->m[1][4] = 10;

  two->m[2][0] = 11;
  two->m[2][1] = 12;
  two->m[2][2] = 13;
  two->m[2][3] = 14;
  two->m[2][4] = 15;

  two->m[3][0] = 16;
  two->m[3][1] = 17;
  two->m[3][2] = 18;
  two->m[3][3] = 19;
  two->m[3][4] = 20;
  print_matrix(two);
  printf("\n");

  matrix_mult(one,two);
  print_matrix(two); */

  /*printf("\ntesting add_point function\n");
  // add_point(edges, 1,2,3);
  // print_matrix(edges);

  struct matrix *nedges = new_matrix(4,5);
  print_matrix(nedges);
  printf("\n");
  add_point(nedges, 1,2,3);
  printf("\n");
  print_matrix(nedges);

  printf("\n");
  add_point(nedges, 3,4,5);
  printf("\n");
  print_matrix(nedges);

  printf("\n");
  add_point(nedges, 4,5,6);
  printf("\n");
  print_matrix(nedges);

  printf("\n");
  add_point(nedges, 7,8,9);
  printf("\n");
  print_matrix(nedges);

  printf("\n");
  add_point(nedges, 10,11,12);
  printf("\n");
  print_matrix(nedges);

  printf("\n");
  add_point(nedges, 13,14,15);
  printf("\n");
  print_matrix(nedges);

  printf("\n");
  add_point(nedges, 14,15,16);
  printf("\n");
  print_matrix(nedges); */

  /*printf("\ntesting add_edge function\n");
  struct matrix * n1edges = new_matrix(4,4);
  add_edge(n1edges, 1,2,3,4,5,6);
  print_matrix(n1edges);

  printf("\n");
  add_edge(n1edges, 7,8,9,10,11,12);
  print_matrix(n1edges);

  printf("\n");
  add_edge(n1edges, 13,14,15,16,17,18);
  print_matrix(n1edges);

  printf("\n");
  add_edge(n1edges, 19,20,21,22,23,24);
  print_matrix(n1edges); */
  struct matrix * n2edges;
  n2edges = new_matrix(4,2);
  add_edge(n2edges,0,0,0,150,125,0);
  add_edge(n2edges,0,0,0,375,500,0);
  add_edge(n2edges,150,125,0,300,50,0);
  add_edge(n2edges,150,125,0,200,0,0);
  add_edge(n2edges,500,0,0,125,500,0);
  add_edge(n2edges,500,0,0,350,125,0);
  add_edge(n2edges,350,125,0,200,50,0);
  add_edge(n2edges,350,125,0,300,0,0);
  add_edge(n2edges,250,0,0,250,500,0);
  add_edge(n2edges,0,250,0,500,250,0);
  color c;
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  draw_lines(n2edges,s,c);
  display(s);
  save_extension(s,"lines.png");

  free_matrix( edges );
}
