/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRButton : _TVRMaterialViewButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _extraHitTestMargins;
    _TVRButtonHaptic * _haptic;
    bool  _latencyLoggingEnabled;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _pressTransform;
    long long  _remoteButtonSize;
    long long  _remoteButtonType;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _rotationTransform;
    NSMutableArray * _selectionGlowLayers;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } extraHitTestMargins;
@property (nonatomic, retain) _TVRButtonHaptic *haptic;
@property (nonatomic) bool latencyLoggingEnabled;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } pressTransform;
@property (nonatomic) long long remoteButtonSize;
@property (nonatomic) long long remoteButtonType;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } rotationTransform;
@property (nonatomic, retain) NSMutableArray *selectionGlowLayers;

+ (id)buttonWithType:(long long)arg1;
+ (id)buttonWithType:(long long)arg1 size:(long long)arg2;

- (void).cxx_destruct;
- (void)_setFinalTransform;
- (void)configureNormalState;
- (void)configureSelectedState;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extraHitTestMargins;
- (id)haptic;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 diameter:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)latencyLoggingEnabled;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pressTransform;
- (long long)remoteButtonSize;
- (long long)remoteButtonType;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransform;
- (id)selectionGlowLayers;
- (void)setExtraHitTestMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHaptic:(id)arg1;
- (void)setLatencyLoggingEnabled:(bool)arg1;
- (void)setPressTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRemoteButtonSize:(long long)arg1;
- (void)setRemoteButtonType:(long long)arg1;
- (void)setRotationTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSelectionGlowLayers:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
