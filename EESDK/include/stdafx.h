///============================================================================
/// \file	stdafx.h
/// \note   Elemental Engine
///         Copyright (C) 2013 Social Systems Technology, Inc.
///
///         This code is redistributable under the terms of the EE License.
///
///         This code is distributed without warranty or implied warranty of
///			merchantability or fitness for a particular purpose. See the 
///			EE License for more details.
///
///         You should have received a copy of the EE License along with this
///			code; If not, write to Social Systems Technology, Inc.,
///			109 East 17th Street Suite 4210 Cheyenne, WY 82001 USA
///============================================================================ 

#define NOMINMAX
#include "Platform.h"

#include <map>
#include <list>
#include <set>
#include <vector>

using namespace std;

#include "ElementalEngine.hpp"
#include "BaseMessages.h"
#include "CHashString.hpp"
#include "StdString.h"
#include "EEErrorCodes.hpp"
#include "MessageError.hpp"
#include "IHashString.hpp"
#include "IArchive.hpp"
#include "IComponent.hpp"
#include "IObject.h"
#include "ISceneObject.h"
#include "IToolBox.h"
using namespace ElementalEngine;
#include "IVisitor.h"
#include "IMeshObject.h"
#include "IAttributeObject.h"

#include "EESDK.h"
#include "BaseMessages.h"
#include "CObjectTemplate.hpp"
#include "PerformanceProfiler.h"
