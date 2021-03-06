/******************************************************************************

 @file  central_bidirectional_audio_menu.h

 @brief This file contains menu objects for central_bidirectional_audio.

 Group: WCS BTS
 Target Device: CC2652

 ******************************************************************************

 Copyright (c) 2016-2018, Texas Instruments Incorporated
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 *  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

 *  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 *  Neither the name of Texas Instruments Incorporated nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 *****************************************************************************/

#ifndef CENTRAL_BIDIRECTIONAL_AUDIO_MENU_H
#define CENTRAL_BIDIRECTIONAL_AUDIO_MENU_H

// Duplicate menu item indices.
#define CA_ITEM_NONE        TBM_ITEM_NONE
#define CA_ITEM_ALL         TBM_ITEM_ALL

// Note: The defines should be updated accordingly if there is any change
//       in the order of the items of the menu objects the items belong to.
#define CA_ITEM_SCAN       TBM_ITEM(0)      // "Start/stop scanning"
#define CA_ITEM_STREAM     TBM_ITEM(1)      // "Start/stop Audio stream"
#define CA_ITEM_CONFIG     TBM_ITEM(2)      // "Configure Audio IO"
#define CA_ITEM_PHY        TBM_ITEM(3)      // "Configure PHY"

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * Menus Declarations
 */

/* Main Menu Object */
extern tbmMenuObj_t menuMain;
extern tbmMenuObj_t caMenuAudioStream;
extern tbmMenuObj_t caMenuPhySelect;

/* Items of (Main) */
/* Action items are defined in central_bidirectional_audio_menu.c */

#ifdef __cplusplus
}
#endif

#endif /* CENTRAL_BIDIRECTIONAL_AUDIO_MENU_H */

