//
// Created by sirse on 12/23/2022.
//

#ifndef STM_VOICETUNE_SD_LOGIC_H
#define STM_VOICETUNE_SD_LOGIC_H

#include "inttypes.h"

extern const int BUTTON_TIMEOUT;

extern uint16_t microphoneMaxValue;
extern uint16_t microphoneCurrentValue;

extern int8_t isRecording;

extern uint16_t microphoneData[512];
extern uint16_t microphoneSendBuffer[512];

extern uint32_t startButtonPressedTick;
extern int8_t isStartButtonPressed;

//FATFS* fileSystem;
//FIL* currentFile;

#endif //STM_VOICETUNE_SD_LOGIC_H
