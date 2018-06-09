/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVFullscreenTransitionContext : NSObject <SVFullscreenTransitionContext> {
    UIView * _contentOverlayView;
    UIView * _fromView;
    bool  _interactive;
    UIView * _toView;
    double  _transitionDuration;
}

@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *fromView;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic, readonly) double transitionDuration;

- (void).cxx_destruct;
- (id)contentOverlayView;
- (id)fromView;
- (id)initWithContentOverlayView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 transitionDuration:(double)arg4 interactive:(bool)arg5;
- (bool)isInteractive;
- (id)toView;
- (double)transitionDuration;

@end
