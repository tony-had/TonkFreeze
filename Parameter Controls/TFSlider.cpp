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

	slider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	addAndMakeVisible(slider);
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
	int sliderWidth = componentWidth - 2 * imageSide - 6 * margin;
	int sliderHeight = imageSide;

	Rectangle<float> minLabelImageBounds = Rectangle<float>(margin, margin, imageSide, imageSide);
	Rectangle<float> maxLabelImageBounds = Rectangle<float>(componentWidth - margin - imageSide, margin, imageSide, imageSide);
	Rectangle<int> sliderBounds = Rectangle<int>(imageSide + 3 * margin, margin, sliderWidth, sliderHeight);

	slider.setBounds(sliderBounds);

	g.drawImage(minLabelImage, minLabelImageBounds);
	g.drawImage(maxLabelImage, maxLabelImageBounds);
}

void TFSlider::resized()
{
}
