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
TFSlider::TFSlider(Image minImage, Image maxImage)
{
	minLabelImage = minImage;
	maxLabelImage = maxImage;
}

TFSlider::~TFSlider()
{
}

void TFSlider::paint(Graphics& g)
{
	int componentHeight = getHeight();
	int componentWidth = getWidth();
	int margin = componentHeight / 10;
	int imageSide = componentHeight - 2 * margin;
	int comboboxWidth = componentWidth - imageSide - 2 * margin;

	Rectangle<float> minLabelImageBounds = Rectangle<float>(margin, margin, imageSide, imageSide);
	Rectangle<float> maxLabelImageBounds = Rectangle<float>(componentWidth - margin - imageSide, margin, imageSide, imageSide);

	g.drawImage(minLabelImage, minLabelImageBounds);
	g.drawImage(maxLabelImage, maxLabelImageBounds);
}

void TFSlider::resized()
{
}
