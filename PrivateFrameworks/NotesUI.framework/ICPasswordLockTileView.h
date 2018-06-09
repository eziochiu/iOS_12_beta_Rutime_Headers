/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPasswordLockTileView : UIView <CAAnimationDelegate> {
    CALayer * _backdropLayer;
    UIView * _containerView;
    id /* block */  _fadeInCompletionHandler;
    id /* block */  _fadeOutCompletionHandler;
    bool  _isLocked;
    UILabel * _label;
    CALayer * _lockBase;
    CALayer * _lockGroupLayer;
    CALayer * _lockHandle;
}

@property (nonatomic, retain) CALayer *backdropLayer;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ fadeInCompletionHandler;
@property (nonatomic, copy) id /* block */ fadeOutCompletionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocked;
@property (nonatomic) UILabel *label;
@property (nonatomic, retain) CALayer *lockBase;
@property (nonatomic, retain) CALayer *lockGroupLayer;
@property (nonatomic, retain) CALayer *lockHandle;
@property (readonly) Class superclass;

+ (id)lockTileView;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)awakeFromNib;
- (id)backdropLayer;
- (id)containerView;
- (id)fadeAnimationWithStartAlpha:(double)arg1 endAlpha:(double)arg2 beginTime:(double)arg3 duration:(double)arg4;
- (id /* block */)fadeInCompletionHandler;
- (id /* block */)fadeOutCompletionHandler;
- (bool)isLocked;
- (id)label;
- (void)layoutSubviews;
- (id)lockAnimationWithBeginTime:(double)arg1;
- (id)lockBase;
- (id)lockGroupLayer;
- (id)lockHandle;
- (void)setBackdropLayer:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFadeInCompletionHandler:(id /* block */)arg1;
- (void)setFadeOutCompletionHandler:(id /* block */)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLockBase:(id)arg1;
- (void)setLockGroupLayer:(id)arg1;
- (void)setLockHandle:(id)arg1;
- (void)showFadeInAnimationForActivityType:(unsigned long long)arg1 afterDelay:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)showFadeOutAnimationForActivityType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)unLockAnimationWithBeginTime:(double)arg1;

@end
