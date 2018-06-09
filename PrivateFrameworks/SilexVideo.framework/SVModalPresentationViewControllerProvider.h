/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVModalPresentationViewControllerProvider : NSObject <SVModalPresentationViewControllerProviding> {
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;
@property (nonatomic, readonly) UIViewController *viewControllerForModalPresentation;

- (void).cxx_destruct;
- (id)initWithVideoViewControllerProvider:(id)arg1;
- (id)videoViewControllerProvider;
- (id)viewControllerForModalPresentation;

@end
