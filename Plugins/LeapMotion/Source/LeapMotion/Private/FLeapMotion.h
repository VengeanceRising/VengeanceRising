// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "LeapMotionPrivatePCH.h"
#include "../Public/ILeapMotion.h"

/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 */
class FLeapMotion : public ILeapMotion
{
	Leap::Controller LeapController;
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	Leap::Controller* Controller();
};
