/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {
    bool  _autosetSubviewLabelTintColor;
    _UIVisualEffectBackdropView * _captureView;
    _UIVisualEffectSubview * _contentView;
    bool  _contentViewRequired;
    _UIVisualEffectNode * _currentEffectNode;
    _UIVisualEffectViewBackdropCaptureGroup * _primaryCaptureGroup;
    _UIVisualEffectNode * _transitionEffectNode;
    NSMutableArray * _views;
}

@property (nonatomic) _UIVisualEffectBackdropView *captureView;
@property (nonatomic, readonly) _UIVisualEffectSubview *contentView;
@property (nonatomic) bool contentViewRequired;
@property (nonatomic, retain) _UIVisualEffectNode *currentEffectNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIVisualEffectNode *transitionEffectNode;
@property (nonatomic, readonly) NSArray *views;

- (void).cxx_destruct;
- (void)_applyEffectNode:(id)arg1;
- (void)_applyIdentityNodeEffect;
- (void)_applyRequestedNodeEffect;
- (id)_cloneFilters:(id)arg1;
- (void)_configureEffectNode:(id)arg1;
- (void)_updateAdjustTintColors;
- (void)_updateView:(id)arg1 shouldDrawWithTintColor:(bool)arg2;
- (void)_view:(id)arg1 willGainDescendent:(id)arg2;
- (void)_view:(id)arg1 willLoseDescendent:(id)arg2;
- (void)_view:(id)arg1 willMoveToWindow:(id)arg2;
- (id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4;
- (void)beginTransition;
- (id)captureView;
- (id)contentView;
- (bool)contentViewRequired;
- (id)currentEffectNode;
- (id)description;
- (void)endTransition;
- (id)initWithContentView:(id)arg1;
- (void)prepareToTransitionToEffectNode:(id)arg1;
- (id)primaryCaptureGroup;
- (void)setCaptureView:(id)arg1;
- (void)setContentViewRequired:(bool)arg1;
- (void)setCurrentEffectNode:(id)arg1;
- (void)setPrimaryCaptureGroup:(id)arg1;
- (id)transitionEffectNode;
- (id)views;

@end
