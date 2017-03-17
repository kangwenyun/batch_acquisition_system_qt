#ifndef SETPERMISSIONS_H
#define SETPERMISSIONS_H

#include "changepermision.h"
#include "dbhelper.h"
#include <QString>
#include <QWidget>

namespace Ui {
class SetPermissions;
}

class SetPermissions : public QWidget
{
    Q_OBJECT

public:
    explicit SetPermissions(QWidget *parent = 0);
    ~SetPermissions();

private slots:
    void on_change_button_clicked();

    void on_refresh_button_clicked();

    void on_tableWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::SetPermissions *ui;
    QString userId;

    changePermision *cp;
};

#endif // SETPERMISSIONS_H
