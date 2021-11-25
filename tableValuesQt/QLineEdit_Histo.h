#pragma once

#include <qDebug>
#include <QObject>
#include <QLineEdit>
#include <QVector>

class QLineEdit_Histo : public QLineEdit
{
	Q_OBJECT

	QVector<QString> tab;
	int tableSize;
	QString value;

	int valueNumber = 0;

public:
	QLineEdit_Histo(int tableSize, QObject *parent);

public slots:
	void createTableHisto();
	void resetTableHisto();
};

