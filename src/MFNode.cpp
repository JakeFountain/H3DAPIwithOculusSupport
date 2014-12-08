//////////////////////////////////////////////////////////////////////////////
//    Copyright 2004-2014, SenseGraphics AB
//
//    This file is part of H3D API.
//
//    H3D API is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    H3D API is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with H3D API; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//    A commercial license is also available. Please contact us at 
//    www.sensegraphics.com for more information.
//
//
/// \file MFNode.cpp
/// \brief Contains the MFNode class.
//
//////////////////////////////////////////////////////////////////////////////

#include <H3D/MFNode.h>
#include <H3D/X3DPrototypeInstance.h>
using namespace H3D;


Node *MFNode::getPrototypeNode( Node *n ) {
  X3DPrototypeInstance *pi = dynamic_cast< X3DPrototypeInstance * >( n );
  if( pi ) {
    return pi->getPrototypedNode();
  } else {
    return NULL;
  }
}
