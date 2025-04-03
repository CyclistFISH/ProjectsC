#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Limpar a tela
    glBegin(GL_TRIANGLES);         // Começar a desenhar um triângulo
    glVertex2f(-0.5f, -0.5f);     // Ponto 1
    glVertex2f( 0.5f, -0.5f);     // Ponto 2
    glVertex2f( 0.0f,  0.5f);     // Ponto 3
    glEnd();                      // Finalizar o desenho
    glFlush();                    // Renderizar imediatamente
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);         // Inicializa o GLUT
    glutCreateWindow("OpenGL Example"); // Cria uma janela
    glutDisplayFunc(display);      // Função de exibição
    glutMainLoop();                // Inicia o loop principal
    return 0;
}
