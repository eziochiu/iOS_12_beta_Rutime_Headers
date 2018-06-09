/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController <ICDocCamViewControllerDelegate> {
    ICDocCamViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICDocCamViewController *viewController;

- (void).cxx_destruct;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(bool)arg4;
- (void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
