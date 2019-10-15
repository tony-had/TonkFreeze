/*
  ==============================================================================

    CenterPanel.h
    Created: 15 Oct 2019 7:15:27pm
    Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "../Helpers/TFInterfaceDefines.h"
#include "../Parameter Controls/TFButton.h"

//==============================================================================
/*
*/
class CenterPanel    : public Component
{
public:
    CenterPanel();
    ~CenterPanel();

    void paint (Graphics&) override;
    void resized() override;

private:
	std::unique_ptr<TFButton> freezeButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CenterPanel)
};
