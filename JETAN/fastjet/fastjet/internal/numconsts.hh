//STARTHEADER
// $Id: numconsts.hh 293 2006-08-17 19:38:38Z salam $
//
// Copyright (c) 2005-2006, Matteo Cacciari and Gavin Salam
//
//----------------------------------------------------------------------
// This file is part of FastJet.
//
//  FastJet is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  The algorithms that underlie FastJet have required considerable
//  development and are described in hep-ph/0512210. If you use
//  FastJet as part of work towards a scientific publication, please
//  include a citation to the FastJet paper.
//
//  FastJet is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with FastJet; if not, write to the Free Software
//  Foundation, Inc.:
//      59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//----------------------------------------------------------------------
//ENDHEADER



#ifndef __FASTJET_NUMCONSTS__
#define __FASTJET_NUMCONSTS__

#include "fastjet/internal/base.hh"

namespace fastjet {      // defined in fastjet/internal/base.hh

// some common useful constants!

const double pi = 3.141592653589793238462643383279502884197;
const double twopi = 6.283185307179586476925286766559005768394;
const double pisq  = 9.869604401089358618834490999876151135314;
const double zeta2 = 1.644934066848226436472415166646025189219;
const double zeta3 = 1.202056903159594285399738161511449990765;
const double eulergamma = 0.577215664901532860606512090082402431042;
const double ln2   = 0.693147180559945309417232121458176568076;


} // fastjet namespace 

#endif // __FASTJET_NUMCONSTS__
