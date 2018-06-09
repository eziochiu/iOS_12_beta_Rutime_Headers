/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVScrubbingManager : NSObject <SVVideoTransitionObserver> {
    <SVScrubbingPolicyHandling> * _policyHandler;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVScrubbingPolicyHandling> *policyHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)initWithPolicyHandler:(id)arg1 videoViewControllerProvider:(id)arg2;
- (id)policyHandler;
- (id)videoViewControllerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
