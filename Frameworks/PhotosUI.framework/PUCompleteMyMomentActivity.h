/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCompleteMyMomentActivity : PUActivity <PXCMMWorkflowCoordinatorDelegate> {
    PXCMMWorkflowCoordinator * _workflowCoordinator;
    UIViewController * _workflowViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishWithActivityState:(unsigned long long)arg3;

@end
