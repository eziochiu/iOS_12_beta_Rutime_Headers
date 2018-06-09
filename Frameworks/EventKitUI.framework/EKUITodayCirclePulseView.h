/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory> {
    NSDictionary * _attributes;
    TodayCirclePulseBackground * _background;
    UIView * _backgroundContainer;
    double  _circleDiameter;
    bool  _circleShouldFillFrame;
    bool  _dontApplyCenteringOffset;
    UILabel * _label;
    NSDictionary * _overlayAttributes;
    UILabel * _overlayLabel;
    double  _textFrameWidthAdjustment;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textOffsetFromCircle;
    double  _textYOffset;
    bool  _usesTextYOffsetWithoutAdjustmentForOverlay;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic) double circleDiameter;
@property (nonatomic) bool circleShouldFillFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dontApplyCenteringOffset;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *overlayAttributes;
@property (nonatomic, retain) UIFont *overlayFont;
@property (nonatomic, copy) NSString *overlayString;
@property (nonatomic) double roundedRectCornerRadius;
@property (nonatomic, copy) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic) double textFrameWidthAdjustment;
@property (nonatomic) struct CGPoint { double x1; double x2; } textOffsetFromCircle;
@property (nonatomic) double textYOffset;
@property (nonatomic) bool usesRoundedRectInsteadOfCircle;
@property (nonatomic) bool usesTextYOffsetWithoutAdjustmentForOverlay;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_layoutSubviews;
- (id)_overlayLabel;
- (void)_updateLabelAttributedString;
- (void)_updateOverlayLabelAttributedString;
- (id)attributes;
- (double)circleDiameter;
- (bool)circleShouldFillFrame;
- (bool)dontApplyCenteringOffset;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overlayAttributes;
- (id)overlayFont;
- (id)overlayString;
- (void)pulse:(id /* block */)arg1;
- (double)roundedRectCornerRadius;
- (void)setAttributes:(id)arg1;
- (void)setCircleDiameter:(double)arg1;
- (void)setCircleShouldFillFrame:(bool)arg1;
- (void)setDontApplyCenteringOffset:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setOverlayAttributes:(id)arg1;
- (void)setOverlayFont:(id)arg1;
- (void)setOverlayString:(id)arg1;
- (void)setRoundedRectCornerRadius:(double)arg1;
- (void)setString:(id)arg1;
- (void)setTextFrameWidthAdjustment:(double)arg1;
- (void)setTextOffsetFromCircle:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextYOffset:(double)arg1;
- (void)setUsesRoundedRectInsteadOfCircle:(bool)arg1;
- (void)setUsesTextYOffsetWithoutAdjustmentForOverlay:(bool)arg1;
- (id)string;
- (double)textFrameWidthAdjustment;
- (struct CGPoint { double x1; double x2; })textOffsetFromCircle;
- (double)textYOffset;
- (bool)usesRoundedRectInsteadOfCircle;
- (bool)usesTextYOffsetWithoutAdjustmentForOverlay;

@end
