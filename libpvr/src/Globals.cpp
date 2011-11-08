//----------------------------------------------------------------------------//

/*! \file Globals.cpp
  Contains implementations of Globals class.
 */

//----------------------------------------------------------------------------//
// Includes
//----------------------------------------------------------------------------//

// Header include

#include "pvr/Globals.h"

// System includes

#include <stdlib.h>

// Project includes

#include "pvr/Log.h"

//----------------------------------------------------------------------------//
// Namespaces
//----------------------------------------------------------------------------//

using namespace pvr::Util;

//----------------------------------------------------------------------------//

namespace pvr {
namespace Sys {

//----------------------------------------------------------------------------//
// Globals static member instantiation
//----------------------------------------------------------------------------//

bool Globals::ms_debugLogEnabled = false;

//----------------------------------------------------------------------------//
// Globals implementations
//----------------------------------------------------------------------------//

void Globals::init()
{
  const char *debugLog = getenv("PVR_DEBUG");
  ms_debugLogEnabled = debugLog != NULL;
  if (debugLog) {
    Util::Log::print("Debug printouts enabled.");
  }
}

//----------------------------------------------------------------------------//

} // namespace Sys
} // namespace pvr

//----------------------------------------------------------------------------//
