/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMWorkflowCoordinator : NSObject <PXCMMActionControllerDelegate, PXCMMActionPerformerDelegate, PXCMMViewControllerDelegate> {
    <PXCMMWorkflowCoordinatorDelegate> * _delegate;
    UINavigationController * _navigationController;
    PXCMMViewController * _rootWorkflowViewController;
    PXCMMViewController * _sendBackWorkflowViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMWorkflowCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertControllerForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_completeActionForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_completeMessageComposeActionForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_completePhotosPickerActionForSession:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_completePublishForSession:(id)arg1 withURL:(id)arg2 error:(id)arg3;
- (void)_completeSendBackActionForSession:(id)arg1 withContext:(id)arg2 error:(id)arg3;
- (id)_createWorkflowViewControllerWithContext:(id)arg1;
- (void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2;
- (id)_performActionWithType:(id)arg1 forSession:(id)arg2;
- (void)_performCleanupActionForSession:(id)arg1;
- (id)_performDeleteActionForSession:(id)arg1;
- (void)_performMessageComposeActionForSession:(id)arg1 shareURL:(id)arg2;
- (void)_performPhotosPickerActionForSession:(id)arg1 gridPresentation:(id)arg2;
- (id)_performPublishActionForSession:(id)arg1;
- (id)_performReceiveActionForSession:(id)arg1;
- (void)_performSendBackActionForSession:(id)arg1;
- (void)_presentAlertController:(id)arg1;
- (void)_presentSendBackFlowWithContext:(id)arg1;
- (id)_presentingViewControllerForViewController:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (void)cancelWorkflow;
- (id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2;
- (id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2;
- (void)completeMyMomentViewController:(id)arg1 showPhotoPickerForSession:(id)arg2;
- (id)delegate;
- (void)didCancelCompleteMyMomentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)workflowViewControllerWithContext:(id)arg1 embedInNavigationControllerOfClass:(Class)arg2;

@end
