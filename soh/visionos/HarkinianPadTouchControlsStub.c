// visionOS has no UIKit touch overlay (gamepad only). These no-ops keep the
// shared iOS code paths that call the touch-control API compiling and inert.
#include "../ios/HarkinianPadTouchControls.h"

int HarkinianPad_TouchControlsAvailable(void) {
    return 0;
}

void HarkinianPad_SetTouchControlsEnabled(int enabled) {
    (void)enabled;
}

void HarkinianPad_SetCustomizableTouchControlsEnabled(int enabled) {
    (void)enabled;
}

void HarkinianPad_SetTouchControlsOpacity(float opacity) {
    (void)opacity;
}

void HarkinianPad_BeginTouchLayoutEditing(void) {
}

void HarkinianPad_SetTouchControlsMenuVisible(int visible) {
    (void)visible;
}

void HarkinianPad_SetNativeHudTouchEnabled(int enabled) {
    (void)enabled;
}

void HarkinianPad_SetNativeHudTouchGameplayActive(int active) {
    (void)active;
}

// 0 = no touch layout: callers keep the stock HUD position.
int HarkinianPad_GetNativeHudButtonCenter(int button, float aspectRatio, float* x, float* y) {
    (void)button;
    (void)aspectRatio;
    (void)x;
    (void)y;
    return 0;
}

float HarkinianPad_GetNativeHudButtonScale(int button, float aspectRatio) {
    (void)button;
    (void)aspectRatio;
    return 1.0f;
}

int HarkinianPad_GetNativeHudTouchAlpha(int alpha) {
    return alpha < 0 ? 0 : (alpha > 255 ? 255 : alpha);
}
