/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKReaderModeAnimationView : UIView {
    CAPackage * _package;
    CALayer * _phoneLayer;
    CAStateController * _stateController;
}

- (void).cxx_destruct;
- (void)_setState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)animateToState:(unsigned long long)arg1;
- (unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1;
- (id)init;
- (id)initWithAssetName:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 assetName:(id)arg2;
- (void)setAnimationState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDigitalCardImage:(id)arg1;
- (void)setImageForCard:(id)arg1 image:(id)arg2;
- (void)setPlasticCardImage:(id)arg1;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
