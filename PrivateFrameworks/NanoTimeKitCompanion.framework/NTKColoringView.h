/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColoringView : UIView <NTKColoringView> {
    _NTKColorManager * _colorManager;
    UIColor * _overrideColor;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overrideColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (bool)usesLegibility;

@end
