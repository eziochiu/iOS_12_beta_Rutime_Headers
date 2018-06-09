/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoViewControllerSizeObserverFactory : NSObject <SVVideoViewControllerSizeObserverFactory> {
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)createViewControllerSizeObserver;
- (id)initWithVideoViewControllerProvider:(id)arg1;
- (id)videoViewControllerProvider;

@end
