/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExplorerDialView : UIView {
    unsigned long long  _currentDensityTransition;
    unsigned long long  _density;
    CLKDevice * _device;
    bool  _editing;
    NSArray * _hourNumerals;
    CAReplicatorLayer * _hourReplicatorLayer;
    CALayer * _hourTickLayer;
    CAReplicatorLayer * _minuteCollectionLayer;
    NSArray * _minuteNumerals;
    CAReplicatorLayer * _minuteReplicatorLayer;
    CALayer * _minuteTickLayer;
    CALayer * _ringLayer;
    CALayer * _secondTickLayer;
    CAReplicatorLayer * _subdialReplicatorLayer;
}

@property (nonatomic) unsigned long long density;
@property (nonatomic, readonly) CALayer *subdialLayer;

- (void).cxx_destruct;
- (void)_addOrRemoveChildLayers;
- (void)_applyDensity:(unsigned long long)arg1;
- (id)_hourNumeralHideAnimation;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (id)_minuteClusterExpandAnimation;
- (id)_minuteTickBreakAnimation;
- (id)_minuteTickShowAnimation;
- (id)_minuteTickShrinkAndGrow;
- (id)_numeralShowAnimation;
- (id)_secondTickBrightenAnimation;
- (id)_secondTickDimAnimation;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyZoomFraction:(double)arg1;
- (void)cleanupAfterEditing;
- (void)cleanupAfterZoom;
- (unsigned long long)density;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (void)prepareForEditing;
- (void)prepareForZoom;
- (void)setDensity:(unsigned long long)arg1;
- (id)subdialLayer;

@end
