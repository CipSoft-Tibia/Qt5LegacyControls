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

#ifndef QQUICKPADDING_H
#define QQUICKPADDING_H

#include <QtCore/qobject.h>
#include <QtQml/qqmlregistration.h>

QT_BEGIN_NAMESPACE

class QQuickPadding1
{
    Q_GADGET
    QML_VALUE_TYPE(padding)
    QML_STRUCTURED_VALUE

    Q_PROPERTY(int left READ left WRITE setLeft)
    Q_PROPERTY(int top READ top WRITE setTop)
    Q_PROPERTY(int right READ right WRITE setRight)
    Q_PROPERTY(int bottom READ bottom WRITE setBottom)

    int m_left{0};
    int m_top{0};
    int m_right{0};
    int m_bottom{0};

public:
    int left() const { return m_left; }
    int top() const { return m_top; }
    int right() const { return m_right; }
    int bottom() const { return m_bottom; }

    void setLeft(int arg) { m_left = arg; }
    void setTop(int arg) { m_top = arg; }
    void setRight(int arg) { m_right = arg; }
    void setBottom(int arg) { m_bottom = arg; }

    bool operator==(const QQuickPadding1& other) const = default;
};

QT_END_NAMESPACE

#endif // QQUICKPADDING_H
