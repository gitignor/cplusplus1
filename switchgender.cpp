
bool mainFunc() {

    QTextStream cin(stdin);

    qDebug() << "Hello from swith";
    char sex;
    cin >> sex;
    switch (sex) {
    case 'M':
    case 'm':
        qDebug() <<"Male";
        return true;
        break;

    case 'W':
    case 'w':
        qDebug() <<"Female";
        return true;
        break;

    default:
        qDebug() <<"Alien";
        break;
    }
    return false;
}
