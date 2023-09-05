/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Quick Controls module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QQUICKABSTRACTSTYLE_H
#define QQUICKABSTRACTSTYLE_H

#include <QtCore/qobject.h>
#include <QtQml/qqmllist.h>
#include <QtQml/qqmlregistration.h>
#include "padding.h"

QT_BEGIN_NAMESPACE

class QQuickAbstractStyle1 : public QObject
{
    Q_OBJECT;
    QML_NAMED_ELEMENT(AbstractStyle);

    Q_PROPERTY(QQuickPadding1 padding READ padding WRITE setPadding NOTIFY paddingChanged)
    Q_PROPERTY(QQmlListProperty<QObject> data READ data DESIGNABLE false)
    Q_CLASSINFO("DefaultProperty", "data")

public:
    QQuickAbstractStyle1(QObject *parent = 0);

    QQuickPadding1 padding() const { return m_padding; }

    QQmlListProperty<QObject> data();

public slots:
    void setPadding(QQuickPadding1 arg);

signals:
  void paddingChanged() const;

private:
    static void data_append(QQmlListProperty<QObject> *list, QObject *object);
    static qsizetype data_count(QQmlListProperty<QObject> *list);
    static QObject *data_at(QQmlListProperty<QObject> *list, qsizetype index);
    static void data_clear(QQmlListProperty<QObject> *list);

    QQuickPadding1 m_padding;
    QList<QObject *> m_data;
};

QT_END_NAMESPACE

#endif // QQUICKABSTRACTSTYLE_H
