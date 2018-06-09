/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoGravityProvider : NSObject <SVVideoGravityProviding> {
    id /* block */  _changeBlock;
    NSString * _landscapeVideoGravity;
    NSString * _portraitVideoGravity;
    <SVVideoPresentationSizeObserving> * _presentationSizeObserver;
    NSString * _videoGravity;
    <SVVideoViewControllerSizeObserving> * _videoViewControllerSizeObserver;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *landscapeVideoGravity;
@property (nonatomic, copy) NSString *portraitVideoGravity;
@property (nonatomic, readonly) <SVVideoPresentationSizeObserving> *presentationSizeObserver;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic, readonly) <SVVideoViewControllerSizeObserving> *videoViewControllerSizeObserver;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPresentationSizeObserver:(id)arg1 videoViewControllerSizeObserver:(id)arg2;
- (id)landscapeVideoGravity;
- (void)onChange:(id /* block */)arg1;
- (id)portraitVideoGravity;
- (id)presentationSizeObserver;
- (void)setLandscapeVideoGravity:(id)arg1;
- (void)setPortraitVideoGravity:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)updateVideoGravityWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 videoViewControllerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)videoGravity;
- (id)videoViewControllerSizeObserver;

@end
