/*
  ==============================================================================

	TFCombobox.cpp
	Created: 16 Oct 2019 12:17:45pm
	Author:  tonyh

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"

#include "TFCombobox.h"

//==============================================================================
TFCombobox::TFCombobox(Image label)
{
	labelImage = label;

	addAndMakeVisible(combobox);
}

TFCombobox::~TFCombobox()
{
}

void TFCombobox::paint(Graphics& g)
{
	int componentHeight = getHeight();
	int componentWidth = getWidth();
	int margin = componentHeight / 10;
	int imageSide = componentHeight - 2 * margin;
	int comboboxWidth = componentWidth - imageSide - 2 * margin;
	int comboboxHeight = imageSide;

	Rectangle<float> imageBounds = Rectangle<float>(margin, margin, imageSide, imageSide);
	Rectangle<int> comboboxBounds = Rectangle<int>(imageSide + 2 * margin, margin, comboboxWidth, comboboxHeight);

	combobox.setBounds(comboboxBounds);

	g.drawImage(labelImage, imageBounds);
}

void TFCombobox::resized()
{
}
