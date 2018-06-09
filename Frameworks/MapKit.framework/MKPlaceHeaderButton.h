/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionButtonControllerProtocol> {
    _MKPlaceActionButtonController * _buttonController;
    unsigned long long  _buttonType;
    NSLayoutConstraint * _heightConstraint;
    bool  _highlighted;
    bool  _primary;
}

@property (nonatomic) _MKPlaceActionButtonController *buttonController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_primaryButtonColor;
- (id)_primaryButtonTextColor;
- (void)_updateStyleNonPrimaryButton;
- (void)_updateStylePrimaryButton;
- (void)applyButtonDefaultConfiguration;
- (id)buttonController;
- (void)buttonSelected:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)init;
- (id)initWithPrimaryType:(unsigned long long)arg1;
- (bool)isHighlighted;
- (void)placeActionbuttonControllerTextDidChanged:(id)arg1;
- (void)setAttributesWithTitle:(id)arg1 subTitle:(id)arg2;
- (void)setButtonController:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end