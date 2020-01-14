/* antimicroX Gamepad to KB+M event mapper
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#ifndef SETJOYSTICKXML_H
#define SETJOYSTICKXML_H

#include <QObject>

class SetJoystick;
class JoyAxisXml;
class JoyButtonXml;
class QXmlStreamReader;
class QXmlStreamWriter;


class SetJoystickXml : public QObject
{
    Q_OBJECT

public:
    explicit SetJoystickXml(SetJoystick* setJoystick, QObject *parent = nullptr);

    virtual void readConfig(QXmlStreamReader *xml);
    virtual void writeConfig(QXmlStreamWriter *xml);

private:
    SetJoystick* m_setJoystick;

    //JoyDPadXml* joydpadXml;
    JoyAxisXml* joyAxisXml;
    JoyButtonXml* joyButtonXml;

};

#endif // SETJOYSTICKXML_H