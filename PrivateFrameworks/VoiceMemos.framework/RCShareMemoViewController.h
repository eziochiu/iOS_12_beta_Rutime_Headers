/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCShareMemoViewController : UIActivityViewController {
    RCCompositionController * _compositionController;
}

@property (nonatomic, readonly) RCCompositionController *compositionController;

+ (id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 dismissHandler:(id /* block */)arg2;
+ (id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1;
+ (void)prepareToShareComposition:(id)arg1 ignoringInteraction:(bool)arg2 shouldContinuePreparingBlock:(id /* block */)arg3 preparedHandler:(id /* block */)arg4;
+ (void)presentInViewController:(id)arg1 source:(id)arg2 composition:(id)arg3 ignoringInteraction:(bool)arg4 shouldContinuePreparingBlock:(id /* block */)arg5 preparedToPresentBlock:(id /* block */)arg6;
+ (id)unsupportedActivityTypes;

- (void).cxx_destruct;
- (id)compositionController;
- (id)initWithCompositionController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
