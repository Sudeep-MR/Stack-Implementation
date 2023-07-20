#include <glut.h>
#include <stdio.h>
#include <math.h>

int top = -1, a = 0, n, b = 0;
char c[100], ele;
void option(int a);
void first_page();
void display();
void push();
void pop();
void init();
void keyboard(unsigned char, int, int);
void keyboard_1(unsigned char, int, int);
void keyboard_2(unsigned char, int, int);
void ABOUT();
void help();
void help1();
void println(float, float, float, void *, char[]);
void options(int);
void flowchart();
void backgorund();
void drawCircle(float ,float ,float );


void background() {
  glBegin(GL_POLYGON);
  glColor3f(1.0, 1.0, 1.0);
 glVertex2d(0, 0);
 glColor3f(0.0, 0.7, 0.0);
 glVertex2d(0, 1800);
 glColor3f(0.0, 1.0, 0.0);
 glVertex2d(2000, 1800);
 glColor3f(0.0, 1.0, 0.0);
 glVertex2d(2000,0);

  glEnd();
}

void drawCircle(float cx,float cy,float radius){
	int numSegments=100;
	glBegin(GL_LINE_LOOP);
	for(int i=0;i<numSegments;i++){
		float theta=2.0f*3.1415926f* float(i) / float(numSegments);
		float px=radius*cos(theta);
		float py=radius*sin(theta);
		glVertex2f(cx+px,cy+py);
	}
	glEnd();
}

void flowchart() {
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  background();

  glColor3f(0, 0, 1);
  println(180, 380, 0, GLUT_BITMAP_TIMES_ROMAN_24, "FLOWCHART");
  glColor3f(0, 0, 0);
  println(55, 365, 0, GLUT_BITMAP_TIMES_ROMAN_24, "PUSH");
  //glColor3f(0, 0, 0 );
  //println(55, 325, 0, GLUT_BITMAP_TIMES_ROMAN_24, "START");

  glColor3f(0,0,0);
  println(53.0,327.0,0.0,GLUT_BITMAP_TIMES_ROMAN_24,"START");
  glColor3f(0,0,0);
  drawCircle(65,330,14);

  /*glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(45, 340);
  glVertex2f(45, 320);
  glVertex2f(85, 320);
  glVertex2f(85, 340);
  glEnd();*/
    
  
  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(65, 316);
  glVertex2f(65, 290);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(63, 295);
  glVertex2f(65, 290);
  glVertex2f(67, 295);
  glEnd();

  glColor3f(0, 0, 0 );
  println(56, 278, 0, GLUT_BITMAP_TIMES_ROMAN_24, "Enter");
  println(53, 265, 0, GLUT_BITMAP_TIMES_ROMAN_24, "the");
  println(43, 253, 0, GLUT_BITMAP_TIMES_ROMAN_24, "element");

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(50, 290);
  glVertex2f(30, 250);
  glVertex2f(70, 250);
  glVertex2f(90, 290);
  glEnd();

  glBegin(GL_LINE_LOOP);
  glVertex2f(60, 250);
  glVertex2f(60, 220);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(58, 225);
  glVertex2f(60, 220);
  glVertex2f(62, 225);
  glEnd();

  glColor3f(0, 0, 0 );
  println(58, 200, 0, GLUT_BITMAP_TIMES_ROMAN_24, "if");
  println(48, 180, 0, GLUT_BITMAP_TIMES_ROMAN_24, "(top=max-1)");

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(60, 220);
  glVertex2f(25, 185);
  glVertex2f(60, 150);
  glVertex2f(95, 185);
  glEnd();

  glColor3f(0, 0, 0 );
  println(100, 190, 0, GLUT_BITMAP_TIMES_ROMAN_10, "F");
  println(56, 140, 0, GLUT_BITMAP_TIMES_ROMAN_10, "T");

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(95, 185);
  glVertex2f(130, 185);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(125, 190);
  glVertex2f(130, 185);
  glVertex2f(125, 180);
  glEnd();

  glColor3f(0, 0, 0 );
  println(145, 200, 0, GLUT_BITMAP_TIMES_ROMAN_24, "top++");
  println(131, 180, 0, GLUT_BITMAP_TIMES_ROMAN_24, "stack[top]=ele");

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(130, 215);
  glVertex2f(175, 215);
  glVertex2f(175, 175);
  glVertex2f(130, 175);
  glEnd();

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(60, 150);
  glVertex2f(60, 120);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(58, 125);
  glVertex2f(60, 120);
  glVertex2f(62, 125);
  glEnd();

  glColor3f(0, 0, 0 );
  println(57, 100, 0, GLUT_BITMAP_TIMES_ROMAN_24, "Stack");
  println(47, 80, 0, GLUT_BITMAP_TIMES_ROMAN_24, "OVERFLOW");

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(45, 120);
  glVertex2f(89, 120);
  glVertex2f(89, 65);
  glVertex2f(45, 65);
  glEnd();

  glBegin(GL_LINE_LOOP);
  glVertex2f(89, 95);
  glVertex2f(130, 95);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(125, 100);
  glVertex2f(130, 95);
  glVertex2f(125, 90);
  glEnd();

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(152.5, 175);
  glVertex2f(152.5, 105);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(154.5, 110);
  glVertex2f(152.5, 105);
  glVertex2f(150.5, 110);
  glEnd();

  glColor3f(0, 0, 0 );
  println(143, 90, 0, GLUT_BITMAP_TIMES_ROMAN_24, "STOP");

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINE_LOOP);
  glVertex2f(130, 105);
  glVertex2f(175, 105);
  glVertex2f(175, 85);
  glVertex2f(130, 85);
  glEnd();

  glColor3f(0, 0, 0);
  println(333, 365, 0, GLUT_BITMAP_TIMES_ROMAN_24, "POP");
  
 

  /*glColor3f(0.5, 0.5, 0.5);
  glBegin(GL_LINE_LOOP);
  glVertex2f(320, 340);
  glVertex2f(320, 320);
  glVertex2f(360, 320);
  glVertex2f(360, 340);
  glEnd();*/
  glColor3f(0,0,0);
  println(328, 325, 0, GLUT_BITMAP_TIMES_ROMAN_24, "START");
  glColor3f(0,0,0);
  drawCircle(340,330,14);

  glBegin(GL_LINES);
  glVertex2f(340, 316);
  glVertex2f(340, 270);
  glEnd();

 glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(338, 275);
  glVertex2f(340, 270);
  glVertex2f(342, 275);
  glEnd();

  glColor3f(0, 0, 0);
  println(338, 250, 0, GLUT_BITMAP_TIMES_ROMAN_24, "if");
  println(328, 230, 0, GLUT_BITMAP_TIMES_ROMAN_24, "(top<0)");

  glColor3f(0.5, 0.5, 0.5);
  glBegin(GL_LINE_LOOP);
  glVertex2f(340, 270);
  glVertex2f(305, 235);
  glVertex2f(340, 200);
  glVertex2f(375, 235);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(305, 235);
  glVertex2f(285, 235);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(290, 232);
  glVertex2f(285, 235);
  glVertex2f(290, 238);
  glEnd();

  glColor3f(0, 0, 0);
  println(300, 238, 0, GLUT_BITMAP_TIMES_ROMAN_10, "F");
  println(335, 195, 0, GLUT_BITMAP_TIMES_ROMAN_10, "T");
  println(255, 229, 0, GLUT_BITMAP_TIMES_ROMAN_24, "top--");

  glColor3f(0.5, 0.5, 0.5);
  glBegin(GL_LINE_LOOP);
  glVertex2f(240, 245);
  glVertex2f(285, 245);
  glVertex2f(285, 225);
  glVertex2f(240, 225);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(262.5, 225);
  glVertex2f(262.5, 105);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(264.5, 110);
  glVertex2f(262.5, 105);
  glVertex2f(260.5, 110);
  glEnd();

  glColor3f(0, 0, 0);
  println(255, 90, 0, GLUT_BITMAP_TIMES_ROMAN_24, "STOP");

  glColor3f(0.5, 0.5, 0.5);
  glBegin(GL_LINE_LOOP);
  glVertex2f(240, 105);
  glVertex2f(285, 105);
  glVertex2f(285, 85);
  glVertex2f(240, 85);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(340, 200);
  glVertex2f(340, 120);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(338, 125);
  glVertex2f(340, 120);
  glVertex2f(342, 125);
  glEnd();

  glColor3f(0.5, 0.5, 0.5 );
  glBegin(GL_LINES);
  glVertex2f(285, 95);
  glVertex2f(320, 95);
  glEnd();

  glColor3f(1, 0, 0 );
  glBegin(GL_POLYGON);
  glVertex2f(290, 100);
  glVertex2f(285, 95);
  glVertex2f(290, 90);
  glEnd();

  glColor3f(0, 0, 0);
  println(335, 100, 0, GLUT_BITMAP_TIMES_ROMAN_24, "Stack");
  println(322, 80, 0, GLUT_BITMAP_TIMES_ROMAN_24, "UNDERFLOW");

  glColor3f(0.5, 0.5, 0.5);
  glBegin(GL_LINE_LOOP);
  glVertex2f(320, 120);
  glVertex2f(370, 120);
  glVertex2f(370, 65);
  glVertex2f(320, 65);
  glEnd();
  glColor3f(0, 0, 0);
    

  
 // println(180.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
//          " Press  P to peek");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(260.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press b/B to go back");
  println(60.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press escape to go homepage");
  /*println(180.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press  P to peek");*/

  
  glutKeyboardFunc(keyboard_2);

  glFlush();
  glutSwapBuffers();
}

void options(int id) {
  if (id == 1) {
    if (top >= n - 1) {
      glColor3f(1.0, 0.0, 0.0);
      println(30.0, 180.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "Stack OVERFLOW!!!!!!!!");
      printf("Stack OVERFLOW!!!!!!!!\n");
      glutPostRedisplay();
    } else {
      {
        printf("Enter the element to be inserted : ");
        scanf(" %c", &ele);
        top++;
        c[top] = ele;
        push();

        glColor3f(0.0, 0.0, 0.0);
        glRasterPos3f(145.0, 90.0, 1.0);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[top]);

        println(150.0, 90.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
                " has been Succefully pushed into the stack");

        glColor3f(1, 1, 1);
        for (int j = 0; j <= top; j++) {
          glRasterPos3f(195.0, 157.0 + ((j)*20), 0.0);
          glutBitmapCharacter(GLUT_BITMAP_8_BY_13, c[j]);
        }
        printf("%c has been successfully pushed into the stack\n", c[top]);
        glutPostRedisplay();
      }
    }
  } else if (id == 2) {
    if (top > -1) {
      pop();

      glColor3f(0.0, 0.0, 0.0);
      glRasterPos3f(145.0, 90.0, 1.0);
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[top]);

      println(150.0, 90.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
              " has been Succefully popped from the stack");
      printf("%c has been successfully popped from the stack\n", c[top]);
      c[top] = ' ';
      glColor3f(1, 1, 1);
      for (int j = -1; j <= top; j++) {
        glRasterPos3f(195.0, 157.0 + ((j + 1) * 20), 0.0);
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, c[j + 1]);
      }
      top--;
      glFlush();
      glutPostRedisplay();
    } else {
      glColor3f(1.0, 0.0, 0.0);
      println(300.0, 180.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
              "Stack UNDERFLOW!!!!!!!!");
      printf("Stack UNDERFLOW!!!!!!!!\n");
      glutPostRedisplay();
    }
    glutPostRedisplay();
  } else if (id == 7) {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Stack Implementation-HELP");
    gluOrtho2D(0, 400.0, 0, 500.0);
    glutDisplayFunc(help1);
    glutPostRedisplay();
  } else if (id == 10) {
    glutDisplayFunc(ABOUT);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Back", 6);
  glutAddMenuEntry("Flowchart", 9);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (id == 11) {
    glutDisplayFunc(first_page);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Start", 3);
  glutAddMenuEntry("Help", 5);
  glutAddMenuEntry("Info", 4);
  glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutPostRedisplay();
  }
}

void println(float x, float y, float z, void *font, char str[]) {
  glRasterPos3f(x, y, z);
  for (int i = 0; str[i] != '\0'; i++) {
    glutBitmapCharacter(font, str[i]);
  }
}

void keyboard_2(unsigned char key, int x, int y) {
  if (key == 27) {
    glutDisplayFunc(first_page);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Start", 3);
  glutAddMenuEntry("Help", 5);
  glutAddMenuEntry("Info", 4);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  }
  if (key == 'b' || key == 'B') {
    glutDisplayFunc(ABOUT);
    //glutDestroyMenu(glutGetMenu());
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Back", 6);
  glutAddMenuEntry("Flowchart", 9);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  }
  if (key == 'f' || key == 'F') {
    glutDisplayFunc(flowchart);
  int menu = glutCreateMenu(options);
  glutAddMenuEntry("Back", 10);
  glutAddMenuEntry("HomePage", 11);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  }
}

void keyboard_1(unsigned char key, int x, int y) {
  if (key == 'p' || key == 'P') {
    if (top >= n - 1) {
      glColor3f(1.0, 0.0, 0.0);
      println(30.0, 180.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "Stack OVERFLOW!!!!!!!!");
      printf("Stack OVERFLOW!!!!!!!!\n");
      glutPostRedisplay();
    } else {
      {
        printf("Enter the element to be inserted : ");
        scanf(" %c", &ele);
        top++;
        c[top] = ele;
        push();

        glColor3f(0.0, 0.0, 0.0);
        glRasterPos3f(145.0, 90.0, 1.0);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[top]);

        println(150.0, 90.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
                " has been Succefully pushed into the stack");
        printf("%c has been successfully pushed into the stack\n", c[top]);
        glColor3f(1, 1, 1);
        for (int j = -1; j <= top; j++) {
          glRasterPos3f(195.0, 157.0 + ((j + 1) * 20), 0.0);
          glutBitmapCharacter(GLUT_BITMAP_8_BY_13, c[j + 1]);
        }
        glutPostRedisplay();
      }
    }
  } else if (key == 'r' || key == 'R') {
    if (top > -1) {
      pop();

      glColor3f(0.0, 0.0, 0.0);
      glRasterPos3f(145.0, 90.0, 1.0);
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[top]);

      println(150.0, 90.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
              " has been Succefully popped from the stack");
      printf("%c has been successfully popped from the stack\n", c[top]);
      c[top] = ' ';
      glColor3f(1, 1, 1);
      for (int j = -1; j <= top; j++) {
        glRasterPos3f(195.0, 157.0 + ((j + 1) * 20), 0.0);
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, c[j + 1]);
      }
      top--;
      glFlush();
      glutPostRedisplay();
    } else {
      glColor3f(1.0, 0.0, 0.0);
      println(300.0, 180.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
              "Stack UNDERRFLOW!!!!!!!!");
      printf("Stack UNDERFLOW!!!!!!!!\n");
      glutPostRedisplay();
    }
    glutPostRedisplay();
    glutSwapBuffers();
  } else if (key == 27) {
    glutDisplayFunc(display);
  int menu = glutCreateMenu(options);
  glutAddMenuEntry("PUSH", 1);
  glutAddMenuEntry("POP", 2);
  glutAddMenuEntry("Help", 7);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
  glutKeyboardFunc(keyboard_1);
    glutPostRedisplay();
  } else if (key == 'h' || key == 'H') {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Stack Implementation-HELP");
    glutInitWindowSize(1800, 600);
    init();
    glutDisplayFunc(help1);
    glutPostRedisplay();
  }
}

void keyboard(unsigned char keys, int x, int y) {


  if (keys == 'H' || keys == 'h') {
    glutDisplayFunc(help);
     glutDetachMenu(GLUT_RIGHT_BUTTON);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Back", 8);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (keys == 'M' || keys == 'm') {
    glutDisplayFunc(ABOUT);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Back", 6);
  glutAddMenuEntry("Flowchart", 9);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (keys == 27) {
    glutDisplayFunc(first_page);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Start", 3);
  glutAddMenuEntry("Help", 5);
  glutAddMenuEntry("Info", 4);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (keys == 13) {
    glClear(GL_COLOR_BUFFER_BIT);
    printf("Enter the size of the stack (<6) : ");
    scanf("%d", &n);
    if (n > 6) {
      printf("Maximum size is 6 : ");
      scanf("%d", &n);
    }

    glutDisplayFunc(display);
  int menu = glutCreateMenu(options);
  glutAddMenuEntry("PUSH", 1);
  glutAddMenuEntry("POP", 2);
  glutAddMenuEntry("Help", 7);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glFlush();
    glutPostRedisplay();
  }
}

int stack_outline(int size) {
  glColor3f(0, 0, 0);
  glLineWidth(1.8);
  glBegin(GL_LINE_LOOP);
  if (top < n) {
    for (int i = -1; i < top; i++) {
      glVertex2i(170, 150 + b);
      glVertex2i(220, 150 + b);
      glVertex2i(220, 170 + b);
      glVertex2i(170, 170 + b);
      b = b + 20;
    }
    b = 0;
  }

  glEnd();

  glFlush();
  return 0;
}

void display() {
  glClearColor(1.0, 1.0, 1.0, 1.0);

  stack_outline(n);

  glColor3f(1, 0, 0);
  for (int j = 0; j <= top; j++) {
    glRasterPos3f(160.0, 158.0 + (j * 20), 1.0);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13, j + '0');
  }

  glColor3f(0.0f, 0.0f, 0.0f);
  println(150.0, 350.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "STACK IMPLEMENTATION");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(290.0, 30.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "For Help Click H/h");

  glColor3f(0, 0, 0);
  println(300.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "Top : ");

  if (top == -1) {
    println(317.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "-1");
  } else {
    glRasterPos3f(317.0, 300.0, 1.0);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, top + '0');
  }

  glColor3f(0, 0, 0);
  println(30.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "Top most element : ");

  if (top == -1) {
    println(87.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "   Empty");
  } else {
    glRasterPos3f(90.0, 300.0, 1.0);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[top]);
  }
  glFlush();
  
  glutKeyboardFunc(keyboard_1);
  glutSwapBuffers();
}

void push() {
  glColor3f(1, 0, 0);
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  glVertex2i(170, 150);
  glVertex2i(220, 150);
  glVertex2i(220, 170 + a);
  glVertex2i(170, 170 + a);
  a = a + 20;
  glEnd();

  glFlush();
}

void pop() {
  a = a - 20;
  glColor3f(1, 0, 0);
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  glVertex2i(170, 150);
  glVertex2i(220, 150);
  glVertex2i(220, 150 + a);
  glVertex2i(170, 150 + a);
  glEnd();

  glFlush();
}

void option(int id) {
  if (id == 3) {
    glClear(GL_COLOR_BUFFER_BIT);
    printf("Enter the size of the stack : ");
    scanf("%d", &n);
    if (n > 6) {
      printf("Maximum size is 7 : ");
      scanf("%d", &n);
    }

  glutDisplayFunc(display);
  int menu = glutCreateMenu(options);
  glutAddMenuEntry("PUSH", 1);
  glutAddMenuEntry("POP", 2);
  glutAddMenuEntry("Help", 7);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glFlush();
    glutPostRedisplay();
  } else if (id == 4) {
    glutDisplayFunc(ABOUT);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Back", 6);
  glutAddMenuEntry("Flowchart", 9);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (id == 5) {
    glutDisplayFunc(help);
    glutDetachMenu(GLUT_RIGHT_BUTTON);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Back", 8);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (id == 8 || id == 6) {
    glutDisplayFunc(first_page);
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Start", 3);
  glutAddMenuEntry("Help", 5);
  glutAddMenuEntry("Info", 4);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  } else if (id == 9) {
    glutDisplayFunc(flowchart);
  int menu = glutCreateMenu(options);
  glutAddMenuEntry("Back", 10);
  glutAddMenuEntry("HomePage", 11);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutPostRedisplay();
  }

  glutPostRedisplay();
  glutSwapBuffers();
}

void first_page() {
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  background();
  glLoadIdentity();
  glColor3f(0, 0, 1);
  println(110.0, 370.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " *    SDM INSTITUTE OF TECHNOLOGY UJIRE-574240    *");

  glColor3f(0, 0, 0);
  println(98.0, 350.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");

  glColor3f(1, 0.5, 0);
  println(80.0, 330.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "COMPUTER GRAPHICS LABORATORY WITH MINI PROJECT(18CSL67) ");

  glColor3f(1, 0.5, 0);
  println(170.0, 310.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24, "A MINI PROJECT ON");

  glColor3f(0, 0, 0);
  println(157.0, 290.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "STACK IMPLEMENTATION");

  glColor3f(1, 0.5, 0);
  println(25.0, 120.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24, "BY:");
  println(25.0, 120.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24, "___");

  glColor3f(0.9, 0.4, 0.5);
  println(25.0, 100.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Sudeep M R           (4SU20CS110)");

  glColor3f(0.9, 0.4, 0.5);
  println(25.0, 80.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Swamy B C            (4SU20CS114)");

  glColor3f(0.9, 0.4, 0.5);
  println(25.0, 60.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Tirumalesha E       (4SU20CS116)");

  glColor3f(0.9, 0.4, 0.5);
  println(25.0, 40.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Uthsav K                (4SU20CS117)");

  glColor3f(1, 0.5, 0);
  println(330.0, 120.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24, "GUIDE:");
  

  glColor3f(0.9, 0.4, 0.5);
  println(330.0, 100.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Mr.Arjun.K");
  println(330.0, 80.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Asst.Professor");
    println(330.0, 60.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Dept. of CSE");

  glColor3f(0, 0, 0);
  println(162.0, 240.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "START          : Press Enter");

  glColor3f(0, 0, 0);
  println(162.0, 220.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "HELP             : Press H/h");

  glColor3f(0, 0, 0);
  println(162.0, 200.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "MORE INFO : Press M/m");

  glutKeyboardFunc(keyboard);
  glFlush();
  glutPostRedisplay();
  glutSwapBuffers();
}

void ABOUT() {
  glClearColor(1, 1, 1, 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  background();

  glColor3f(0.0f, 0.0f, 0.0f);
  println(170.0, 370.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "STACK  IMPLEMENTATION");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(50.0, 330.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " STACK :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 330.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " 1) STACK is one of the Linear 'DATA STRUCTURE' ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 310.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " 2) It is used to organise and store the data . ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 290.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " 3) Stack has  TOP .");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 270.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " 4) Both insertion and deletion takes place from the 'TOP' . ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 250.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " 5) Initially the stack is empty top=-1 .");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 230.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " 6) For Push opretation, first the value of top is increased");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 210.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " by 1 and then the new element is pushed at the position ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(90.0, 190.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " of top . ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(50.0, 160.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " OPERATION:- ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(105.0, 160.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "There are two  main operation. ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(120.0, 140.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " 1) PUSH ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(120.0, 120.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " 2) POP ");



  glColor3f(0.0f, 0.0f, 0.0f);
  println(50.0, 80.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " 1)PUSH:- ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(85.0, 80.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " It is used to insert an element . ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(50.0, 60.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, " 2)POP   :- ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(85.0, 60.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " It is used to delete an element .");

   

  glColor3f(0.0f, 0.0f, 0.0f);
  println(260.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press escape to go back");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(60.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press F/f for flowchart");

 

  

  glFlush();
  glutKeyboardFunc(keyboard_2);
  glutSwapBuffers();
}

void help1() {
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  background();

  glColor3f(0.0f, 0.0f, 0.0f);
  println(160.0, 360.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "*******Instructions******** ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(60.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Keyboard Functions  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(140.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press P/p to PUSH  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(140.0, 280.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press R/r to POP  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(60.0, 250.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "Mouse Functions  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(140.0, 250.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Press ENTER to start the Stack Operation:-");

  glColor3f(0, 0, 0);
  println(140.0, 230.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Right mouse click to show the Menu Bar");

  glColor3f(0, 0, 0);
  println(140.0, 215.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "(Only after entering the Stack Operation)");

  glColor3f(1, 0, 0);
  println(60.0, 180.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "There are three options in menu bar  :-");

  glColor3f(0, 0, 0);
  println(140.0, 150.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "1.PUSH ");

  glColor3f(0, 0, 0);
  println(140.0, 130.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "2.POP ");

  /*glColor3f(0, 0, 0);
  println(140.0, 110.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "3.PEEK ");*/
  glFlush();
  glutPostRedisplay();
  glutSwapBuffers();
}

void help() {
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  background();

  glColor3f(0.0f, 0.0f, 0.0f);
  println(160.0, 360.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "*******Instructions******** ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(60.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Keyboard Functions  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(140.0, 300.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press P/p to PUSH  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(140.0, 280.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press R/r to POP  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(60.0, 250.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "Mouse Functions  :-");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(140.0, 250.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Press ENTER to start the Stack Operation:-");

  glColor3f(0, 0, 0);
  println(140.0, 230.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "Right mouse click to show the Menu Bar");

  glColor3f(0, 0, 0);
  println(140.0, 215.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "(Only after entering the Stack Operation)");

  glColor3f(1, 0, 0);
  println(60.0, 180.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          "There are two options in menu bar  :-");

  glColor3f(0, 0, 0);
  println(140.0, 150.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "1.PUSH ");

  glColor3f(0, 0, 0);
  println(140.0, 130.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24, "2.POP ");

  glColor3f(0.0f, 0.0f, 0.0f);
  println(260.0, 20.0, 1.0, GLUT_BITMAP_TIMES_ROMAN_24,
          " Press escape to go back");
 

  glutKeyboardFunc(keyboard);
  glFlush();
  glutPostRedisplay();
  glutSwapBuffers();
}

void init() {
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(10.0, 400.0, 10.0, 400.0);
  glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1800, 600);
  glutCreateWindow("Stack Implementation");
  glutDisplayFunc(first_page);
  init();
  int menu = glutCreateMenu(option);
  glutAddMenuEntry("Start", 3);
  glutAddMenuEntry("Help", 5);
  glutAddMenuEntry("Info", 4);
  glutAttachMenu(GLUT_RIGHT_BUTTON);


  glutMainLoop();
  return 0;
}