#ifndef LINK_H
#define LINK_H

#include <QString>

class Link
{
public:
    explicit Link(int linkId, QString url, QString thumbPath, QString title);
    explicit Link();

    int linkId() const;

    QString url() const;
    void setUrl(const QString &url);

    QString thumbPath() const;
    void setThumbPath(const QString &thumbPath);

    QString title() const;
    void setTitle(const QString &title);

    bool isValid() const;

    bool operator==(const Link &other) const;
    bool operator!=(const Link &other) const;

private:
    int m_linkId;
    QString m_url;
    QString m_thumbPath;
    QString m_title;
};

#endif // LINK_H