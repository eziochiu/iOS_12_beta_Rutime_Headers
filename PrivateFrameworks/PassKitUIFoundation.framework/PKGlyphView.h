/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKGlyphView : UIView <LAUIPearlGlyphViewDelegate, PKFingerprintGlyphViewDelegate> {
    PKCheckGlyphLayer * _checkLayer;
    long long  _colorMode;
    struct CGImage { } * _customImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customImageAlignmentEdgeInsets;
    CALayer * _customImageLayer;
    <PKGlyphViewDelegate> * _delegate;
    PKFingerprintGlyphView * _fingerprintView;
    double  _lastAnimationWillFinish;
    struct { 
        unsigned int showingPhone : 1; 
        unsigned int phoneRotated : 1; 
        unsigned int showingUserIntentPhone : 1; 
        unsigned int showingUserIntentArrow : 1; 
    }  _layoutFlags;
    LAUIPearlGlyphView * _pearlView;
    double  _phoneAspectRatio;
    PKPhoneGlyphLayer * _phoneLayer;
    NSString * _phoneWiggleAnimationKey;
    bool  _phoneWiggling;
    UIColor * _primaryColor;
    long long  _priorState;
    struct UIColor { Class x1; } * _secondaryColor;
    long long  _state;
    long long  _style;
    NSMutableArray * _transitionCompletionHandlers;
    unsigned long long  _transitionIndex;
    bool  _transitioning;
    PKMicaLayer * _userIntentArrowLayer;
    PKMicaLayer * _userIntentPhoneLayer;
}

@property (nonatomic, readonly) long long colorMode;
@property (nonatomic, readonly) struct CGImage { }*customImage;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customImageAlignmentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKGlyphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fadeOnRecognized;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIColor *primaryColor;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversOfState;
+ (id)sharedStaticResources;

- (void).cxx_destruct;
- (void)_applyColorMode:(bool)arg1;
- (void)_endPhoneWiggle;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)arg1;
- (void)_executeTransitionCompletionHandlers:(bool)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_layoutContentLayer:(id)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct CGPoint { double x1; double x2; })_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct UIColor { Class x1; }*)_primaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (struct UIColor { Class x1; }*)_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (void)_setPrimaryColor:(struct UIColor { Class x1; }*)arg1 animated:(bool)arg2;
- (void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_setSecondaryColor:(struct UIColor { Class x1; }*)arg1 animated:(bool)arg2;
- (void)_startPhoneWiggle;
- (void)_updateCheckViewStateAnimated:(bool)arg1;
- (void)_updateCustomImageLayerOpacityAnimated:(bool)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updateUserIntentLayoutAnimated:(bool)arg1;
- (long long)colorMode;
- (id)createCustomImageLayer;
- (struct CGImage { }*)customImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customImageAlignmentEdgeInsets;
- (void)dealloc;
- (id)delegate;
- (bool)fadeOnRecognized;
- (void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)pearlGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (id)primaryColor;
- (void)setColorMode:(long long)arg1 animated:(bool)arg2;
- (void)setCustomImage:(struct CGImage { }*)arg1 withAlignmentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setFadeOnRecognized:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (long long)state;
- (void)updateRasterizationScale:(double)arg1;

@end