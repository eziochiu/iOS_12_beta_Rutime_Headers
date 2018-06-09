/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSTestingCoordinator : NSObject {
    <SSTestingCoordinatorDelegate> * _delegate;
}

@property (nonatomic) <SSTestingCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_delayedHandleRunPPTRequest:(id)arg1;
- (bool)_runPPTRequestRequiresTakingScreenshot:(id)arg1;
- (id)delegate;
- (void)handleRunPPTRequest:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
