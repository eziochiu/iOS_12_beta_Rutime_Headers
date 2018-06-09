/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVConfirmationDialogTemplateController : UIViewController {
    NSTimer * _dismissTimer;
    bool  _setTimer;
}

@property (nonatomic, readonly) NSTimer *dismissTimer;
@property (nonatomic, readonly) _TVConfirmationDialogTemplateView *templateView;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;
- (void)_setupTimer;
- (void)dealloc;
- (id)dismissTimer;
- (void)loadView;
- (id)templateView;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
