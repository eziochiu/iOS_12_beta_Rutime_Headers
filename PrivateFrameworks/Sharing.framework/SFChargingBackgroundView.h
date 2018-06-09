/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFChargingBackgroundView : UIView {
    UIVisualEffectView * _backdropVisualEffectView;
    bool  _constraintsInitialized;
    bool  _darkStyle;
    bool  _emitterAdded;
    CAEmitterLayer * _emitterLayer;
    PLPlatterView * _platterView;
    bool  _useEmitter;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) bool darkStyle;
@property (nonatomic) bool useEmitter;

- (void).cxx_destruct;
- (id)contentView;
- (bool)darkStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initConstraintsIfNeeded;
- (void)initEmitterLayer;
- (void)initViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDarkStyle:(bool)arg1;
- (void)setUseEmitter:(bool)arg1;
- (void)updateConstraints;
- (bool)useEmitter;

@end
