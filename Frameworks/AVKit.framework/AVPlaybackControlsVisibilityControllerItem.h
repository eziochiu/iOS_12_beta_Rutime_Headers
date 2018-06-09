/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsVisibilityControllerItem : NSObject {
    double  _alpha;
    bool  _hidden;
    UIView * _view;
    bool  _viewLoaded;
}

@property (nonatomic) double alpha;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) UIView *view;
@property (getter=isViewLoaded, nonatomic) bool viewLoaded;

- (void).cxx_destruct;
- (double)alpha;
- (id)init;
- (bool)isHidden;
- (bool)isViewLoaded;
- (bool)needsTransitionToHidden:(bool)arg1 alpha:(double)arg2;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setView:(id)arg1;
- (void)setViewLoaded:(bool)arg1;
- (id)view;
- (bool)wantsAnimatedTransitionToHidden:(bool)arg1 alpha:(double)arg2;

@end
