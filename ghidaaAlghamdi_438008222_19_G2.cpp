#include <GL\glew.h>  // A cross-platform open-source C/C++ extension loading library 

/*
///////////////////////////////////
using namespace std;
GLfloat angleR = 45.0f;
GLfloat angle;
GLchar value = 'h';
char chose;
int refreshmill = 1;
////////////////////////////////////////

void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(refreshmill, timer, 0);
}

void lineSegment(){
	glColor3f(1,1,1);  //Set line colour 
	glBegin(GL_LINE_LOOP);    //Specify line segment geometry
	glVertex2f(-0.20, 0.15);
	glVertex2f(0,1);
	glVertex2f(0.20, 0.15);
	glVertex2f(-0.3, 0.68);
	glVertex2f(0.3, 0.68);
	glVertex2f(-0.20, 0.15);
	glEnd();
}

void circle(GLfloat col1, GLfloat col2, GLfloat col3) {
	float x1, x2, y1, y2;
	double rad = 0.15;
	x1 = 0.0;
	y1 = 0.0;
	glColor3f(col1,col2,col3);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0; angle < 360.0f; angle++) {
		x2 = x1 + sin(angle) * rad;
		y2 = y1 + cos(angle) * rad;
		glVertex2f(x2, y2);
	}
	glEnd();

}

void halfCircle(GLfloat col1, GLfloat col2, GLfloat col3) {
	float PI = 3.14;
	float rad, x1, x2, y1, y2, angle;
	double radius = 0.15;
	x1 = 0.0;
	y1 = 0.0;
	glColor3f(col1, col2, col3);
	glBegin(GL_TRIANGLE_FAN);
	for (angle = 180.0f; angle <= 360; angle++) {
		rad = PI * angle / 180;
		x2 = x1 + radius * cos(rad);
		y2 = y1 + radius * sin(rad);
		glVertex2f(x2, y2);

	}
	glEnd();
}

void halfCirclrLine(GLfloat col1, GLfloat col2, GLfloat col3) {
	float PI = 3.14;
	float rad, x1, x2, y1, y2;
	double radius = 0.085;
	x1 = 0.0;
	y1 = 0.0;
	glColor3f(col1, col2,col3);
	glBegin(GL_LINE_STRIP);
	for (angle = 0.0f; angle <= 180; angle++) {
		rad = PI * angle / 180;
		x2 = x1 + radius * cos(rad);
		y2 = y1 + radius * sin(rad);
		glVertex2f(x2, y2);

	}
	glEnd();

	}

void background()
{
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.086, 0.043, 0.435);
	glVertex2f(1, -1);
	glVertex2f(-1, -1);
	glColor3f(0, 0, 0);
	glVertex2f(1, 1);
	glVertex2f(-1, 1);

    glEnd();
	////////////////////////////////////////// some point////////////////////////////////////////////////////

	float xstar, ystar,zstar;
	int i = 0;
	
	while ( i <= 600)
	{
	xstar= (2 * (float)rand() / ((float)RAND_MAX)) - 1;
	ystar= (2 * (float)rand() / ((float)RAND_MAX)) - 1;
	zstar= (2 * (float)rand() / ((float)RAND_MAX)) - 1;
	    glColor3f(1,1, 1);
		glBegin(GL_POINTS);
		glVertex3f(xstar,ystar,zstar);
		i += 1;
	}
	glEnd();

	/////////////////////////////////////////// some star///////////////////////////////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(-0.7, 0.6, 0.0);
	glRotatef(30.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	/////////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(0.7, -0.8, 0.0);
	glRotatef(-30.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	////////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(-0.6, 0.0, 0.0);
	glRotatef(30.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	//////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(-0.8, -0.8, 0.0);
	glRotatef(-45.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	//////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(0.0, 0.8, 0.0);
	glRotatef(-30.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	//////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(0.0, -0.8, 0.0);
	glRotatef(45.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	///////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(0.8, 0.6, 0.0);
	glRotatef(30.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();
	////////////////////////////
	glPushMatrix();
	glLineWidth(1.0f);
	glTranslatef(0.8, 0.0, 0.0);
	glRotatef(30.0, .0, 0.0, 1.0);
	glScalef(0.25, 0.15, 1.0);
	lineSegment();
	glPopMatrix();

}

void drawText(float x, float y, std::string text) {
	glRasterPos2f(x,y);
	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)text.c_str());
	
}

void shapeOFmoon(GLfloat col1, GLfloat col2, GLfloat col3) {

	/////////////////////////////////////////////////////shape of moon//////////////////////////////////////
	glPushMatrix();
	glScalef(3.5, 3.5, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
}

void cavity(GLfloat col1, GLfloat col2, GLfloat col3) {
	////////////////////////////////////////////////////cavity of the moon/////////////////////////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.4, -0.2, 0.0);
	glScalef(.37, .37, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.4, 0.2, 0.0);
	glScalef(.37, .37, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	///////////////////////////////
	glPushMatrix();
	glTranslatef(-0.14, 0.44, 0.0);
	glScalef(.3, .3, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	//////////////////////////////
	glPushMatrix();
	glTranslatef(0.14, 0.44, 0.0);
	glScalef(.3, .3, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	////////////////////////////////
	glPushMatrix();
	glTranslatef(0.38, 0.032, 0.0);
	glScalef(.23, .23, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.25, 0.4, 0.0);
	glScalef(.23, .23, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	/////////////////////////////////
	glPushMatrix();
	glTranslatef(0.4, 0.2, 0.0);
	glScalef(.3, .3, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	/////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.42, -0.14, 0.0);
	glScalef(.34, .34, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	/////////////////////////////////
	glPushMatrix();
	glTranslatef(0.21, -0.27, 0.0);
	glScalef(.23, .23, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	/////////////////////////
	glPushMatrix();
	glTranslatef(0.04, -0.46, 0.0);
	glScalef(.3, .3, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	//////////////////////////
	glPushMatrix();
	glTranslatef(0.27, 0.29, 0.0);
	glScalef(.23, .23, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	//////////////////////////////
	glPushMatrix();
	glTranslatef(-0.10, 0.30, 0.0);
	glScalef(.19, .19, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
	//////////////////////////////
	glPushMatrix();
	glTranslatef(-0.4, -0.02, 0.0);
	glScalef(.19, .19, 1.0);
	circle(col1, col2, col3);
	glPopMatrix();
}

void RightEyesOfMoon() {
	glPushMatrix();
	glTranslatef(0.19, 0.09, 0.0);
	glScalef(.6, .6, 1.0);
	circle(0, 0, 0);
	glPopMatrix();
	/////////////////////////////
	glPushMatrix();
	glTranslatef(0.19, 0.09, 0.0);
	glScalef(.55, .55, 1.0);
	circle(1, 1, 1);
	glPopMatrix();
	/////////////////////////////
	glPushMatrix();
	glTranslatef(0.19, 0.09, 0.0);
	glScalef(.4, .4, 1.0);
	circle(0.192, 0.062, 0.819);
	glPopMatrix();
	//////////////////////////////
	glPushMatrix();
	glTranslatef(0.19, 0.09, 0.0);
	glScalef(.25, .25, 1.0);
	circle(0, 0, 0);
	glPopMatrix();
	//////////////////////////////
	glPushMatrix();
	glTranslatef(0.2, 0.11, 0.0);
	glScalef(.07, .07, 1.0);
	circle(1, 1, 1);
	glPopMatrix();
	//////////////////////////////
	glPushMatrix();
	glTranslatef(0.17, 0.089, 0.0);
	glScalef(.05, .05, 1.0);
	circle(1, 1, 1);
	glPopMatrix();
}

void LeftEyesOfMoon() {
	glPushMatrix();
	glRotatef(180.0, 0.0, 1.0, 0.0);
	RightEyesOfMoon();
	glPopMatrix();
}

void happyMouth() {
	glPushMatrix();
	glTranslatef(0.0, -0.1, 0.0);
	glScalef(0.95, 0.95, 1.0);
	halfCircle(0.0f, 0.0f, 0.0f);
	glPopMatrix();
	//////////////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.0, -0.1, 0.0);
	glScalef(0.9, 0.9, 1.0);
	halfCircle(0.709f, 0.129f, 0.329f);
	glPopMatrix();
	///////////////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.0, -0.234, 0.0);
	glScalef(0.3, 0.3, 1.0);
	glRotatef(180.0, 1.0, 0.0, 0.0);
	halfCircle(0.949f, 0.431f, 0.478f);
	glPopMatrix();
	///////////////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.0, -0.099, 0.0);
	glScalef(0.9, 0.3, 1.0);
	halfCircle(1, 1, 1);
	glPopMatrix();
	/////////////////////////////////////////////////
	glLineWidth(2.0f);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-0.146, -0.1);
	glColor3f(0, 0, 0);
	glVertex2f(0.146, -0.1);
	glEnd();
}

void sadMouth() {
	glPushMatrix();
	glTranslatef(0.0, -0.2, 0.0);
	glLineWidth(2.5f);
	glScalef(0.9, 0.7, 1.0);
	halfCirclrLine(0, 0, 0);
	glPopMatrix();
}

void  surpriseMouth() {
	glPushMatrix();
	glTranslatef(0.0, -0.2, 0.0);
	glScalef(0.6, 0.7, 1.0);
	circle(0, 0, 0);
	glPopMatrix();
	////////////////////
	glPushMatrix();
	glTranslatef(0.0, -0.2, 0.0);
	glScalef(0.55, 0.65, 1.0);
	circle(0.709f, 0.129f, 0.329f);
	glPopMatrix();
}

void shapeOFRIGTcloud() {
	glPushMatrix();
	glTranslatef(0.39, -0.27, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.27, -0.4, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	/////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.38, -0.55, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	/////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.56, -0.55, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	/////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.68, -0.4, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.56, -0.27, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.45, -0.4, 0.0);
	circle(1, 1, 1);
	glPopMatrix();
	//////////////////////////////////////// eyes of right cloud //////////////////////////////////
	glPushMatrix();
	glTranslatef(0.38, -0.35, 0.0);
	glScalef(0.28, 0.28, 1.0);
	circle(0, 0, 0);
	glPopMatrix();
	////////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.59, -0.35, 0.0);
	glScalef(0.28, 0.28, 1.0);
	circle(0, 0, 0);
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.37, -0.35, 0.0);
	glScalef(0.09, 0.09, 1.0);
	glColor3f(0, 0, 0);
	circle(1, 1, 1);
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.58, -0.35, 0.0);
	glScalef(0.09, 0.09, 1.0);
	glColor3f(0, 0, 0);
	circle(1, 1, 1);
	glPopMatrix();
	//////////////////////////////////////
}

void shapeOFleftcloud() {
	glPushMatrix();
	glRotatef(180.0, 0.0, 1.0, 0.0);
	shapeOFRIGTcloud();
	glPopMatrix();

}

void HappyMouthCLOUD() {
	glPushMatrix();
	glTranslatef(0.49, -0.4, 0.0);
	glScalef(0.5, .5, 1.0);
	happyMouth();
	glPopMatrix();
	////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.49, -0.4, 0.0);
	glScalef(0.5, .5, 1.0);
	happyMouth();
	glPopMatrix();
	/////////////////////////////////
}

void sadMouthCLOUD() {
	glPushMatrix();
	glTranslatef(0.49, -0.4, 0.0);
	glScalef(0.5, .5, 1.0);
	sadMouth();
	glPopMatrix();
	////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.49, -0.4, 0.0);
	glScalef(0.5, .5, 1.0);
	sadMouth();
	glPopMatrix();
}

void surpriseMouthCLOUD() {
	glPushMatrix();
	glTranslatef(0.49, -0.4, 0.0);
	glScalef(0.5, .5, 1.0);
	surpriseMouth();
	glPopMatrix();
	////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.49, -0.4, 0.0);
	glScalef(0.5, .5, 1.0);
	surpriseMouth();
	glPopMatrix();

}

void happy() {
	shapeOFmoon(0.678, 0.729, 0.882);
	cavity(0.443, 0.482, 0.596);
	RightEyesOfMoon();
	LeftEyesOfMoon();
	shapeOFRIGTcloud();
	shapeOFleftcloud();
	happyMouth();
	HappyMouthCLOUD();
	
}

void sad() {
	shapeOFmoon(0.529, 0.568, 0.690);
	cavity(0.443, 0.482, 0.596);
	RightEyesOfMoon();
	LeftEyesOfMoon();
	shapeOFRIGTcloud();
	shapeOFleftcloud();
	sadMouth();
	sadMouthCLOUD();
	////////////////////////////////////// other details ////////////////////////////////////
	glBegin(GL_TRIANGLES);
	glColor3f(0.262, 0.631, 0.937);
	glVertex2f(-0.19, -0.00);
	glColor3f(0.262, 0.631, 0.937);
	glVertex2f(-0.24, -0.09);
	glColor3f(0.262, 0.631, 0.937);
	glVertex2f(-0.14, -0.09);
	glEnd();
	////////////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.19, -0.1, 0.0);
	glScalef(0.3, 0.3, 1.0);
	circle(0.262, 0.631, 0.937);
	glPopMatrix();
	/////////////////////////////////////////
	glPushMatrix();
	glTranslatef(0.25, 0.25, 0.0);
	glRotatef(180.0, 1.0, 0.0, .0);
	glRotatef(30.0, .0, 0.0, 1.0);
	glScalef(0.7, 0.4, 1.0);
	glLineWidth(2.5f);
	halfCirclrLine(0, 0, 0);
	glPopMatrix();
	////////////////////////////////////
	glPushMatrix();
	glTranslatef(-0.25, 0.25, 0.0);
	glRotatef(180.0, 1.0, 0.0, 0.0);
	glRotatef(-30.0, .0, 0.0, 1.0);
	glScalef(0.7, 0.4, 1.0);
	glLineWidth(2.5f);
	halfCirclrLine(0, 0, 0);
	glPopMatrix();

}

void surprise() {
	shapeOFmoon(0.647, 0.694, 0.835);
	cavity(0.443, 0.482, 0.596);
	RightEyesOfMoon();
	LeftEyesOfMoon();
	shapeOFRIGTcloud();
	shapeOFleftcloud();
	surpriseMouth();
	surpriseMouthCLOUD();
    ////////////////////////////////////// other details ////////////////////////////////////
	glPushMatrix();
	glRotatef(-30.0, .0, 0.0, 1.0);
	glTranslatef(0.1, 0.3, 0.0);
	glScalef(0.7, 0.4, 1.0);
	glLineWidth(1.5f);
	halfCirclrLine(0, 0, 0);
	glPopMatrix();
	////////////////////////////////////
	glPushMatrix();
	glRotatef(30.0, .0, 0.0, 1.0);
	glTranslatef(-0.10, 0.3, 0.0);
	glScalef(0.7, 0.4, 1.0);
	glLineWidth(1.5f);
	halfCirclrLine(0, 0, 0);
	glPopMatrix();

}

static void key(unsigned char keyPressed, int x, int y) // key handling
{
	//glClear(GL_COLOR_BUFFER_BIT);
	switch (keyPressed)
	{

	case 'H':

		value = 'H';
		cout << "  " << endl;
		break;

	case 'h':

		value = 'h';
		cout << " " << endl;
		break;
	case 'S':

		value = 'S';
		cout << "  " << endl;
		break;

	case 's':

		value = 's';
		cout << "  " << endl;
		break;

	case 'R':

		value = 'R';
		cout << "  " << endl;
		break;

	case 'r':

		value = 'r';
		cout << "  " << endl;
		break;

	default:
		fprintf(stderr, "\nKeyboard commands:\n\n"
			"q, <esc> - Quit\n""Please press 1,or 2,or 3");
		break;
	}

}

void play(void) {
	glutPostRedisplay();
}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);
	background();
	drawText(-0.6, 0.6, "....FLY ME TO THE MOON....");
	glPushMatrix();
	if (value == 'H'){
		glRotatef(angleR, 0.0, 1.0, 0.0);//to rotate face to y-axis
		happy();
	}
	else if (value == 'h') { //HAPPY FACE clock
		glRotatef(angleR, 0.0, -1.0, 0.0);
		happy();
	}
	else if (value == 'S') //sad face
	{
		glRotatef(angleR, 1.0, 0.0, 0.0);
		sad();
	}
	else if (value == 's') { //SAD FACE
		glRotatef(angleR, -1.0, 0.0, 0.0);
		sad();
	}
	else if (value == 'R') {
		glRotatef(angleR, 0.0, 0.0,1.0);
		surprise();
	}
	else if (value == 'r') {
		glRotatef(angleR, 0.0, 0.0, -1.0);
		surprise();
	}
	glPopMatrix();
	angleR -= 0.2;
	
	
	glutSwapBuffers();

}*/




void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0.1, 0.2);
	glBegin(GL_QUADS);
	GLfloat v[6][2] = { {50,50},{150,50},{300,100},{300,200},{200,230},{150,200} };
	glVertex2fv(v[0]);
	glVertex2fv(v[1]);
	glVertex2fv(v[2]);
	glVertex2fv(v[3]);
	glVertex2fv(v[0]);
	glVertex2fv(v[3]);
	glVertex2fv(v[4]);
	glVertex2fv(v[5]);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(35, 35);
	glutInitWindowSize(450, 450);
	glutCreateWindow("Problem 1");
	glutDisplayFunc(display);
	glutMainLoop();
	return(0);
}
