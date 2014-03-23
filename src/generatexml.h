#ifndef GENERATEXML_H
#define GENERATEXML_H

#include <QXmlStreamWriter>
#include <QFile>

class GenerateXML
{
public:
    GenerateXML();
    //void CreateXMLFile(QString Root, QMap Part);
    QString ReadXmlFile(QString fileName, QString part);
private:
    QFile *file;
    QString Root;
};
#endif // GENERATEXML_H
