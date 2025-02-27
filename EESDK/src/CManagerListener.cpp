///=====================================================================
/// \file	CManagerListener.cpp
///         This class implements a CManagerListener which is the listener
///			registered with the system for Managers
/// \date	02/26/2005
/// \author	Kenneth Hurley
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
///=====================================================================

#include "StdAfx.h"
#include "CManager.h"
#include "CManagerListener.h"

// constructor for the listener class
CManagerListener::CManagerListener(CManager *parent)
{
	m_Parent = parent;
}

// function called when the listener is initialized from
// the system listener
bool CManagerListener::Init(void)
{
	return m_Parent->Init();
}

// Update function called from the system listener
void CManagerListener::Update(DWORD tickCount)
{
	m_Parent->Update(tickCount);
}

// call from system listener to shutdown
bool CManagerListener::DeInit(void)
{
	return m_Parent->DeInit();
}

// returns the name of the manager
IHashString* CManagerListener::GetName()
{
	if (m_Parent)
	{
		return m_Parent->GetComponentType();
	}
	else
	{
		return NULL;	
	}
}