/***************************************************************************
    Microsoft DirectX 8 Force Feedback (aka Haptic) Support
    
    - Currently, SDL does not support haptic devices. So this is Win32 only.

    - DirectX 8 still works on Windows XP, so I'm not attempting to support
      a higher version for now. 

    Ref: http://msdn.microsoft.com/en-us/library/windows/desktop/ee417563%28v=vs.85%29.aspx
    
    Copyright Chris White.
    See license.txt for more details.
***************************************************************************/

#pragma once

#include <libretro.h>

//-----------------------------------------------------------------------------
// Function prototypes 
//-----------------------------------------------------------------------------
namespace forcefeedback
{
    extern bool init_rumble_interface(retro_environment_t environ_cb);
    extern void deactivate_rumble();
    extern void update_rumble_interface();
    extern void update_force_limits(int max_force, int min_force, int force_duration);

    extern bool init(int max_force, int min_force, int force_duration);
    extern void close();
    extern int  set(int xdirection, int force);
    extern bool is_supported();
};
