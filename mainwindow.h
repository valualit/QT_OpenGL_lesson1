#ifndef SCENE3D_H
#define SCENE3D_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>

class MainWindow : public QGLWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

protected:
    int geese_size; // Размер гуся))
    int point; // набранные очки
    int gdx, gdy; // Координаты объектов (гусей)
    int cax, cay, cbx, cby; // Координаты курсора
    int wax ,way; // Размеры окна
    bool singling; // Для выделение области
    void self_cursor(); // метод для рисования своего курсора
    void initializeGL(); // Метод для инициализирования opengl
    void resizeGL(int nWidth, int nHeight); // Метод вызываемый после каждого изменения размера окна
    void paintGL(); // Метод для вывода изображения на экран
    void keyPressEvent(QKeyEvent *ke); // Для перехвата нажатия клавиш на клавиатуре
    void mouseMoveEvent(QMouseEvent *me); // Метод реагирует на перемещение указателя, но по умолчанию setMouseTracking(false)
    void mousePressEvent(QMouseEvent *me); // Реагирует на нажатие кнопок мыши
    void mouseReleaseEvent(QMouseEvent *me); // Метод реагирует на "отжатие" кнопки мыши
    void singling_lb(); // Рисуем рамку выделенной области
    void geese(); // Рисуем объекты (будущих гусей :) )


protected slots:
    void geese_coord(); // Определяем координаты объектов


};

#endif // SCENE3D_H
