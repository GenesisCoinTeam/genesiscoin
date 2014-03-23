#include "generatexml.h"
#include <QMap>
#include <QMessageBox>
#include <QXmlStreamWriter>
#include <QMapIterator>
#include <QFile>
#include "util.h"
using namespace boost;
GenerateXML::GenerateXML()
{
    boost::filesystem::path pathXml = GetDataDir() / "data.xml";
}

//void GenerateXML::CreateXMLFile()
//{
//    if (!file.open(QIODevice::WriteOnly))
//    {
//    /* show wrror message if not able to open file */
//    QMessageBox::warning(0, "Read only", "The file is in read only mode");
//    }
//    else
//    {
//        /*if file is successfully opened then create XML*/
//        QXmlStreamWriter* xmlWriter = new QXmlStreamWriter();
//        /* set device (here file)to streamwriter */
//        xmlWriter->setDevice(&file);
//        /* Writes a document start with the XML version number version. */
//        xmlWriter->writeStartDocument();
//        /* Writes a start element with name,
//        * Subsequent calls to writeAttribute() will add attributes to this element.
//         here we creating a tag <persons>*/
//        xmlWriter->writeStartElement("persons");

//        /* create mapiterator to iterate through maps*/
//        QMapIterator<QString, QString> i(Part);

//        /*this while loop generates <person> tag with attributes and CDATA in each execution.
//        * currently we have 5 element in map so loop creates 5 tags.
//        */
//        while (i.hasNext())
//        {
//            i.next();
//            /* create tag person */
//            xmlWriter->writeStartElement("person");
//            /*add one attribute and its value*/
//            xmlWriter->writeAttribute(i.key(), i.value());
//            /*add character data to tag person */
//            xmlWriter->writeCharacters ("kamlesh");
//            /*close tag person  */
//            xmlWriter->writeEndElement();

//        }
//        /*end tag persons*/
//        xmlWriter->writeEndElement();
//        /*end document */
//        xmlWriter->writeEndDocument();
//        delete xmlWriter;
//    }
//}

QString GenerateXML::ReadXmlFile(QString fileName, QString part)
{
    QXmlStreamReader reader;
    int paragraphCount = 0;
    QStringList links;
    QString title;
    while (!reader.atEnd())
    {
        reader.readNext();
        if (reader.isStartElement())
        {
            if (reader.name() == "title")
                title = reader.readElementText();
            else if(reader.name() == "a")
                links.append(reader.attributes().value("href").toString());
            else if(reader.name() == "p")
                ++paragraphCount;
        }
    }
}
