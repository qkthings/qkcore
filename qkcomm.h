/*
 * QkThings LICENSE
 * The open source framework and modular platform for smart devices.
 * Copyright (C) 2014 <http://qkthings.com>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QKCOMM_H
#define QKCOMM_H

#include <QObject>
#include "qkboard.h"

class QkCore;
class QkNode;

class QKLIBSHARED_EXPORT QkComm : public QkBoard {
    Q_OBJECT
public:
    QkComm(QkCore *qk, QkNode *parentNode);

protected:
    void setup();

private:

};

#endif // QKCOMM_H
