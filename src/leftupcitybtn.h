#ifndef LEFTUPCITYBTN_H
#define LEFTUPCITYBTN_H

#include <QWidget>
#include <QEvent>
#include <QMouseEvent>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QDebug>

class LeftUpCityBtn : public QWidget
{
    Q_OBJECT

public:
    explicit LeftUpCityBtn(QWidget *parent=0);

signals:

protected:
    void enterEvent(QEvent *event) Q_DECL_OVERRIDE;
    void leaveEvent(QEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private:
    bool m_mouseHover = false;

    QHBoxLayout *m_layout = nullptr;
    QPushButton *m_addCityBtn = nullptr;
    QLabel *m_addCityLabel = nullptr;
};

#endif // LEFTUPCITYBTN_H
