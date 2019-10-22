/*
  ==============================================================================

	CenterPanel.cpp
	Created: 15 Oct 2019 7:15:27pm
	Author:  tonyh

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"

#include "CenterPanel.h"

//==============================================================================
CenterPanel::CenterPanel()
{
	setSize(centerPanelWidth, centerPanelHeight);

	freezeButton.reset(new TFButton());
	addAndMakeVisible(freezeButton.get());
	freezeButton->setCentreRelative(0.5f, 0.5f);
}

CenterPanel::~CenterPanel()
{
}

void CenterPanel::paint(Graphics& g)
{
}

void CenterPanel::resized()
{
	// This method is where you should set the bounds of any child
	// components that your component contains..

}
