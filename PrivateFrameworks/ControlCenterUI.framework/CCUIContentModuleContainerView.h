/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIContentModuleContainerView : UIView {
    UIView * _c2AnimationContainerView;
    UIView * _caAnimationContainerView;
    bool  _ignoreFrameUpdates;
    NSString * _moduleIdentifier;
    NSArray * _views;
}

@property (nonatomic, readonly) UIView *c2AnimationContainerView;
@property (nonatomic, readonly) UIView *caAnimationContainerView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) bool ignoreFrameUpdates;
@property (nonatomic, readonly, copy) NSString *moduleIdentifier;

- (void).cxx_destruct;
- (id)c2AnimationContainerView;
- (id)caAnimationContainerView;
- (id)containerView;
- (bool)ignoreFrameUpdates;
- (id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)moduleIdentifier;
- (void)setIgnoreFrameUpdates:(bool)arg1;

@end
