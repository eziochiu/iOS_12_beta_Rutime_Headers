/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIButton : UIButton

+ (id)_vtuiBackgroundButtonImage;
+ (id)_vtuiButtonWithPrimaryStyle;
+ (id)_vtuiButtonWithSecondaryStyle;
+ (id)_vtuiProximityBackgroundButtonImage;
+ (id)_vtuiProximityButtonWithPrimaryStyle;

- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
