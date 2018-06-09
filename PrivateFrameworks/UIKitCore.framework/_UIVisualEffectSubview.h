/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectSubviewSource> {
    NSArray * _filters;
    _UIVisualEffectViewBackdropCaptureGroup * _primaryCaptureGroup;
    <_UIVisualEffectViewSubviewMonitoring> * _subviewMonitor;
    NSArray * _viewEffects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (nonatomic) <_UIVisualEffectViewSubviewMonitoring> *subviewMonitor;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *viewEffects;

- (void).cxx_destruct;
- (void)_applyFilterValues:(id)arg1 baseName:(id)arg2 toLayer:(id)arg3;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(bool)arg3;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)addViewEffects:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyRequestedViewEffects;
- (id)asBackdropView;
- (id)asImageView;
- (id)asLayer;
- (id)asView;
- (id)filters;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryCaptureGroup;
- (void)removeViewEffects;
- (void)setFilters:(id)arg1;
- (void)setPrimaryCaptureGroup:(id)arg1;
- (void)setSubviewMonitor:(id)arg1;
- (id)subviewMonitor;
- (id)viewEffects;
- (void)willMoveToWindow:(id)arg1;

@end
