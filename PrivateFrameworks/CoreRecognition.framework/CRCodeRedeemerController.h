/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate> {
    <CRCodeRedeemerControllerDelegate> * _delegate;
}

@property (copy) NSString *cameraMode;
@property long long cameraPosition;
@property unsigned long long captureCount;
@property (getter=isCaptureMode) bool captureMode;
@property (readonly, copy) NSString *debugDescription;
@property <CRCodeRedeemerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property long long exposureMode;
@property long long focusMode;
@property (readonly) unsigned long long hash;
@property double sessionTimeout;
@property bool showDiagnosticHUD;
@property (readonly) Class superclass;
@property long long torchMode;
@property long long whiteBalanceMode;

+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (unsigned long long)isCRCodeRedeemerAvailable;

- (void).cxx_destruct;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidDisplayMessage:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReaderDidFindTarget:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned long long)arg3 duration:(double)arg4;

@end
