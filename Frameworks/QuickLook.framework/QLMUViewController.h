/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMUViewController : MarkupViewController {
    long long  _currentEditNumber;
}

@property long long currentEditNumber;

- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (long long)currentEditNumber;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)setCurrentEditNumber:(long long)arg1;

@end
