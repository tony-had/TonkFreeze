/*
  ==============================================================================

    TFSlider.cpp
    Created: 22 Oct 2019 11:45:29am
    Author:  tonyh

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "TFSlider.h"

//==============================================================================
TFSlider::TFSlider()
{
}

TFSlider::~TFSlider()
{
}

void TFSlider::paint (Graphics& g)
{
    g.drawRect (getLocalBounds(), 1);

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("TFSlider", getLocalBounds(),
                Justification::centred, true);
}

void TFSlider::resized()
{
}
