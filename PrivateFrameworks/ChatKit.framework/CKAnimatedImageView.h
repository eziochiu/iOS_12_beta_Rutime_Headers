/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver> {
    CKAnimatedImage * _animatedImage;
    bool  _automaticallyObserveWindowForAnimationTimer;
    NSArray * _frames;
}

@property (nonatomic, retain) CKAnimatedImage *animatedImage;
@property (nonatomic) bool automaticallyObserveWindowForAnimationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animatedImage;
- (void)animationTimerFired:(unsigned long long)arg1;
- (bool)automaticallyObserveWindowForAnimationTimer;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)frames;
- (void)setAnimatedImage:(id)arg1;
- (void)setAutomaticallyObserveWindowForAnimationTimer:(bool)arg1;
- (void)setFrames:(id)arg1;
- (void)updateAnimationTimerObserving;

@end
