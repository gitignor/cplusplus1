/* Aleksei Nikiforov TARgv17
 * ABC
 * Существует треугольник?
 * Какой?
 * float
 * A>B+C
 * Площадь
 * */

#include <QCoreApplication>
#include <QDebug> //F1 for help
#include <QTextStream>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication ann(argc, argv);
    QTextStream cin(stdin);

    float a,b,c;
    QString askTriangle = "Введите длины трех сторон треугольника";
    qDebug() << askTriangle;
    cin >> a >> b >> c;
    QString triangleSizes = "Размеры сторон треугольника: %1x%2x%3";
    triangleSizes = triangleSizes.arg(a).arg(b).arg(c);
    qDebug() << triangleSizes;
    if (((a+b > c) && (a+c > b) && (b+c > a)) && ((a > 0) && (b > 0) && (c > 0))){
         qDebug() << "Треугольник существует";
    } else {
         qDebug() << "Треугольник не существует";
         return 0;
    }
    float p = (a+b+c) / 2; //находим полупериметр
    float s = sqrt(p*(p-a)*(p-b)*(p-c)); // находим площадь
    QString triangleType = ""; // переменная, куда будем записывать тип нашего тре-ка
    if (a == b && b == c) {
        triangleType = "равностороннего ";
    } else if (a == b || b == c || a == c) {
        triangleType = "равнобедренного ";
    } else {
        triangleType = "разностороннего ";
    } if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) {
        triangleType += "прямоугольного ";
    } else if ((a*a + b*b > c*c || a*a + c*c > b*b || c*c + b*b > a*a) && (a != b && b != c && a != c)) {
        triangleType += "тупого ";
    } else {
        triangleType += "острого ";
    }
    qDebug() << "Площадь " + triangleType + "треугольника = " << s << "\" квадратным единицам";

    return ann.exec();
}

















