/*  This file is part of [To be named], a STEP-Express viewer
    Copyright (C) 2012 Laurent Bauer lahoraent@hotmail.com

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; version 2
    of the License.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef LINKITEM_H
#define LINKITEM_H

#include <QGraphicsRectItem>
class AttrDescriptor;

class LinkItem : public QGraphicsRectItem
{
public:
    enum { Type = UserType + 2 };
    explicit LinkItem(const AttrDescriptor * attrDescriptor, bool attributeIsOptional, QPointF pos=QPointF(), QGraphicsItem *parent=0);
    inline int type() const { return Type; }      // Enable the use of qgraphicsitem_cast with this item.

signals:
    
public slots:
    
};

#endif // LINKITEM_H
