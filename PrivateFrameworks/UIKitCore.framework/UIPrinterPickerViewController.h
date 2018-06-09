/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterPickerViewController : UIViewController <UINavigationControllerDelegate, UIPrinterBrowserOwner> {
    bool  _animated;
    bool  _dismissed;
    UINavigationController * _navigationController;
    bool  _observingRotation;
    id  _originalNavControllerDelegate;
    UIViewController * _originalViewControllerInNav;
    UIViewController * _parentController;
    bool  _parentHasNoPopover;
    UIPopoverController * _poverController;
    PKPrinter * _printer;
    UIPrinterBrowserViewController * _printerBrowserViewController;
    UIPrinterPickerController * _printerPickerController;
    bool  _userSelectedPrinter;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPrinter *printer;
@property (readonly) Class superclass;
@property bool userSelectedPrinter;

- (void).cxx_destruct;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentInParentAnimated:(bool)arg1;
- (void)_presentWindow;
- (void)cancelPrinting;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissPrinterPickerAnimated:(bool)arg1;
- (bool)filtersPrinters;
- (id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrinterPickerPanelAnimated:(bool)arg1;
- (void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (id)printer;
- (void)printerBrowserViewDidDisappear;
- (void)setPrinter:(id)arg1;
- (void)setUserSelectedPrinter:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldShowPrinter:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)userSelectedPrinter;

@end
