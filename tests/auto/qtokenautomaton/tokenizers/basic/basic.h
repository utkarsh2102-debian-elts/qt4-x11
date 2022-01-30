/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
/* NOTE: This file is AUTO GENERATED by qtokenautomaton2cpp.xsl. */

#ifndef q_Basic_h
#define q_Basic_h

#include <QtCore/QString>

QT_BEGIN_NAMESPACE

class Basic
                {
                public:
                enum Token

                {
                NoKeyword,
AReallyLongTokenIFreakinMeanItUKnowUKnowKnow,
ColonInName,
FFFF,
FFFG,
FFGF,
FFGG,
FFLM,
OneColon,
WeHaveDashes,
WeHaveDashes2,
_,
_111,
wobbly
                };

                static inline Token toToken(const QString &value);
static inline Token toToken(const QStringRef &value);
static Token toToken(const QChar *data, int length);
static QString toString(Token token);


                private:
                    static inline Token classifier3(const QChar *data);
static inline Token classifier4(const QChar *data);
static inline Token classifier9(const QChar *data);
static inline Token classifier14(const QChar *data);
static inline Token classifier15(const QChar *data);
static inline Token classifier44(const QChar *data);

                };

                inline Basic::Token Basic::toToken(const QString &value)
                {
                    return toToken(value.constData(), value.length());
                }

                inline Basic::Token Basic::toToken(const QStringRef &value)
                {
                    return toToken(value.constData(), value.length());
                }

                
QT_END_NAMESPACE

#endif
