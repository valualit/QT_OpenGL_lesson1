#include <QtGui>
#include "mainwindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainWindow window;
    window.setWindowTitle("QT OpenGL - Lesson 1");
    window.setGeometry(100,100,500,500); // Смещение и положение окна
    window.show();
    window.setMouseTracking(true); // вызывать метод mouseMoveEvent при изменении позиции указателя, даже без клика кнопкой мыши
    window.setCursor(QCursor(Qt::BlankCursor));

    return app.exec();
}
