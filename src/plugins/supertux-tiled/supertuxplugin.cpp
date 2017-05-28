/*
 * SuperTux Tiled Plugin
 * Copyright 2017, Karkus476 <karkus476@yahoo.com>
 *
 * This file is part of Tiled.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

namespace Supertux {

void SupertuxPlugin::initialize()
{
    addObject(new SupertuxMapFormat(this));
    addObject(new SupertuxTilesetFormat(this));
}

SupertuxMapFormat::SupertuxMapFormat(QObject *parent)
    : Tiled::MapFormat(parent)
{}

Tiled::Map *SupertuxMapFormat::read(const QString &fileName)
{
        

}



} // namespace Supertux

