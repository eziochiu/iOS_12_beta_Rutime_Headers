/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoGravityProviderFactory : NSObject <SVVideoGravityProviderFactory> {
    <SVVideoPresentationSizeObserverFactory> * _presentationSizeObserverFactory;
    <SVVideoViewControllerSizeObserverFactory> * _videoViewControllerSizeObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPresentationSizeObserverFactory> *presentationSizeObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerSizeObserverFactory> *videoViewControllerSizeObserverFactory;

- (void).cxx_destruct;
- (id)createVideoGravityProviderForVideo:(id)arg1;
- (id)initWithPresentationSizeObserverFactory:(id)arg1 videoViewControllerSizeObserverFactory:(id)arg2;
- (id)presentationSizeObserverFactory;
- (id)videoViewControllerSizeObserverFactory;

@end
