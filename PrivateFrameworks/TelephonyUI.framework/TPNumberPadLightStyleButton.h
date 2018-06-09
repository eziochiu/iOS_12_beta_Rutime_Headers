/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadLightStyleButton : TPNumberPadButton

+ (double)highlightedCircleViewAlpha;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(bool)arg2;
+ (double)unhighlightedCircleViewAlpha;
+ (bool)usesTelephonyGlyphsWhereAvailable;

- (id)buttonColor;
- (id)defaultColor;

@end
