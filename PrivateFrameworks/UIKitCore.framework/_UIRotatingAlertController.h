/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRotatingAlertController : UIAlertController {
    unsigned long long  _arrowDirections;
    bool  _isRotating;
    <UIPopoverPresentationControllerDelegate> * _popoverPresentationControllerDelegateWhileRotating;
    UIViewController * _presentedViewControllerWhileRotating;
    bool  _readyToPresentAfterRotation;
    <_UIRotatingAlertControllerDelegate> * _rotatingSheetDelegate;
}

@property (nonatomic) unsigned long long arrowDirections;
@property (nonatomic) <_UIRotatingAlertControllerDelegate> *rotatingSheetDelegate;

- (void).cxx_destruct;
- (void)_didRotateAndLayout;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (bool)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_updateSheetPositionAfterRotation;
- (unsigned long long)arrowDirections;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)doneWithSheet;
- (id)init;
- (bool)presentSheet;
- (bool)presentSheetFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)rotatingSheetDelegate;
- (void)setArrowDirections:(unsigned long long)arg1;
- (void)setRotatingSheetDelegate:(id)arg1;
- (void)willRotate:(id)arg1;

@end
