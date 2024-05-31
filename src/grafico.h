/*
 * grafico.h
 *
 *  Created on: 30 may 2024
 *      Author: Brandon
 */

#ifndef GRAFICO_H_
#define GRAFICO_H_

#include <GL/glut.h>

void UkaUka(GLuint _textureId) {
    // Habilitar el uso de texturas
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, _textureId);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    // Cara de Uka Uka con textura
    glColor3f(1.0, 1.0, 1.0); // Blanco para la textura
    glBegin(GL_POLYGON);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(4, 2);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(1, 22);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(10, 21);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(19, 22);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(17, 2);
    glEnd();

    // Deshabilitar el uso de texturas
    glDisable(GL_TEXTURE_2D);

    // Retoque mascara
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(10.3, 18);
    glVertex2f(9.8, 21);
    glVertex2f(10, 21);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(14.3, 20.5);
    glVertex2f(13.9, 21.5);
    glVertex2f(14.5, 21.5);
    glEnd();

    // Configurar el color de las cejas izquierdas
    glColor3f(0.5, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(3, 16);
    glVertex2f(3, 17);
    glVertex2f(4, 19);
    glVertex2f(6, 19);
    glVertex2f(9, 18);
    glVertex2f(9, 16);
    glEnd();

    // Complemento de la ceja izquierda
    glColor3f(0.5, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(3, 15);
    glVertex2f(3, 16);
    glVertex2f(5, 16);
    glEnd();

    // Configurar el color de las cejas derecha
       glColor3f(0.5, 0.0, 0.0);
       glBegin(GL_POLYGON);
       glVertex2f(11, 16);
       glVertex2f(11, 18);
       glVertex2f(14, 19);
       glVertex2f(16, 19);
       glVertex2f(17, 17);
       glVertex2f(17, 16);
       glEnd();
       //complemento de la ceja derecha
   	glColor3f(0.5, 0.0, 0.0);
   	glBegin(GL_TRIANGLES);
   	glVertex2f(15, 16);
   	glVertex2f(17, 16);
   	glVertex2f(17, 15);
   	glEnd();

       // Configurar el color de la ojera izquierda
       glColor3f(0.0, 0.5, 0.0);
       glBegin(GL_POLYGON);
       glVertex2f(5, 12);
       glVertex2f(4, 14);
       glVertex2f(5, 16);
       glVertex2f(7, 16);
       glVertex2f(8, 14);
       glVertex2f(7, 12);
       glEnd();

       // Configurar el color del ojo izquierdo
   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_QUADS);
   	glVertex2f(5, 13);
   	glVertex2f(5, 16);
   	glVertex2f(7, 16);
   	glVertex2f(7, 13);
   	glEnd();
   	//iris ojo
   	glColor3f(1.0, 1.0, 1.0);
   	glBegin(GL_QUADS);
   	glVertex2f(5.5, 13.5);
   	glVertex2f(5.5, 14.5);
   	glVertex2f(6.5, 14.5);
   	glVertex2f(6.5, 13.5);
   	glEnd();




       // Configurar el color de la ojera derecha
   	glColor3f(0.0, 0.5, 0.0);
       glBegin(GL_POLYGON);
       glVertex2f(13, 12);
       glVertex2f(12, 14);
       glVertex2f(13, 16);
       glVertex2f(15, 16);
       glVertex2f(16, 14);
       glVertex2f(15, 12);
       glEnd();

       // Configurar el color del ojo derecho
   	glColor3f(0.0, 0.0, 0.0);
       glBegin(GL_QUADS);
       glVertex2f(13, 13);
       glVertex2f(13, 16);
       glVertex2f(15, 16);
       glVertex2f(15, 13);
       glEnd();
       //iris ojo
   	glColor3f(1.0, 1.0, 1.0);
   	glBegin(GL_QUADS);
       glVertex2f(13.5, 13.5);
       glVertex2f(13.5, 14.5);
       glVertex2f(14.5, 14.5);
       glVertex2f(14.5, 13.5);
   	glEnd();

       // Nariz del personaje
       glColor3f(0.5, 0.0, 0.0);
   	glBegin(GL_POLYGON);
   	glVertex2f(10, 9);
   	glVertex2f(8, 10);
   	glVertex2f(10, 13);
   	glVertex2f(12, 10);
   	glEnd();


       // Labios de Uka Uka
   	glColor3f(0.5, 0.0, 0.0);
       glBegin(GL_POLYGON);
       glVertex2f(5, 3);
       glVertex2f(5, 4);
       glVertex2f(7, 8);
       glVertex2f(9, 8);
       glVertex2f(10.5, 7);
       glVertex2f(12, 8);
       glVertex2f(14, 8);
       glVertex2f(16, 4);
       glVertex2f(16, 3);
       glEnd();

       // La boca de Uka Uka
       glColor3f(1.0, 1.0, 1.0);
       glBegin(GL_QUADS);
       glVertex2f(7, 4);
       glVertex2f(8, 6);
       glVertex2f(13, 6);
       glVertex2f(14, 4);
       glEnd();

       // Dibujar dientes
       glColor3f(0.0, 0.0, 0.0);
       glBegin(GL_LINES);
       glVertex2f(7.5, 5);
       glVertex2f(13.5, 5);
       glEnd();

       //dientes superior
       glColor3f(0.0, 0.0, 0.0);
       glBegin(GL_LINES);
   	glVertex2f(9, 5);
   	glVertex2f(9, 6);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(10, 5);
   	glVertex2f(10, 6);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(11, 5);
   	glVertex2f(11, 6);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(12, 5);
   	glVertex2f(12, 6);
   	glEnd();

   	//dientes parte inferior
   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(8.5, 4);
   	glVertex2f(8.5, 5);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(9.5, 4);
   	glVertex2f(9.5, 5);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(10.5, 4);
   	glVertex2f(10.5, 5);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(11.5, 4);
   	glVertex2f(11.5, 5);
   	glEnd();

   	glColor3f(0.0, 0.0, 0.0);
   	glBegin(GL_LINES);
   	glVertex2f(12.5, 4);
   	glVertex2f(12.5, 5);
   	glEnd();






   //barbilla
   glColor3f(0.0, 0.5, 0.0);
   glBegin(GL_TRIANGLES);
   glVertex2f(10.5, 0);
   glVertex2f(8, 2);
   glVertex2f(13,2);
   glEnd();

   glFlush();
}

#endif /* GRAFICO_H_ */
