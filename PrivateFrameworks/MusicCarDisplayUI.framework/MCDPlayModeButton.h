/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPlayModeButton : MCDButton

- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchFocusLayerSelected;
- (bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (bool)showBezelInTouch;
- (id)tintColorForUnhighlightedTextLabel;

@end
