/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView> {
    UIColor * _color;
    bool  _frozen;
    UIColor * _overrideColor;
    bool  _usesLegibility;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic, copy) NTKDigitalTimeLabelStyle *style;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (id)_newUnderlyingLabel:(bool)arg1;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)color;
- (id)contentColor;
- (bool)isFrozen;
- (id)overrideColor;
- (void)setColor:(id)arg1;
- (void)setFrameUsingCurrentStyle;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setShadowColor:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (bool)usesLegibility;

@end
