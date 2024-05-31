/*
 * main.cpp
 *
 *  Created on: 30 may 2024
 *      Author: Brandon
 */
#include <iostream>
#include <GL/glut.h>
#include "imageloader.h"
#include "grafico.h"

using namespace std;

GLuint textureId;
float escala = 1.0f;
float posicionX = 0.0f;

GLuint cargarTextura(Image *imagen) {
    GLuint texturaId;
    glGenTextures(1, &texturaId);
    glBindTexture(GL_TEXTURE_2D, texturaId);
    glTexImage2D(GL_TEXTURE_2D,
                 0,
                 GL_RGB,
                 imagen->width, imagen->height,
                 0,
                 GL_RGB,
                 GL_UNSIGNED_BYTE,
                 imagen->pixels);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    return texturaId;
}

void inicializar() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 20, 0, 25);
    glEnable(GL_TEXTURE_2D);

    Image *image = loadBMP("vtr.bmp");
    if (image == nullptr) {
        cerr << "Failed to load texture" << endl;
        return;
    }
    textureId = cargarTextura(image);
    delete image;
}

void Dibujar() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(posicionX, 0.0f, 0.0f); // Mover la figura en el eje X
    glScalef(escala, escala, 1.0f); // Escalar la figura

    UkaUka(textureId);

    glPopMatrix();

    glutSwapBuffers();
}

void teclasEspeciales(int tecla, int x, int y) {
    switch (tecla) {
        case GLUT_KEY_UP:
            escala += 0.1f; // Incrementa la escala
            break;
        case GLUT_KEY_DOWN:
            escala -= 0.1f; // Decrementa la escala
            if (escala < 0.1f) {
                escala = 0.1f; // No permitir una escala menor que 0.1
            }
            break;
        case GLUT_KEY_LEFT:
            posicionX -= 0.5f; // Mueve la figura a la izquierda
            break;
        case GLUT_KEY_RIGHT:
            posicionX += 0.5f; // Mueve la figura a la derecha
            break;
    }
    glutPostRedisplay(); // Redibuja la pantalla
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 350);
    glutCreateWindow("Uka Uka Textura");
    inicializar();
    glutDisplayFunc(Dibujar);
    glutSpecialFunc(teclasEspeciales); // Registro de la función de teclas especiales
    glutMainLoop();
    glDeleteTextures(1, &textureId);
    return 0;
}




