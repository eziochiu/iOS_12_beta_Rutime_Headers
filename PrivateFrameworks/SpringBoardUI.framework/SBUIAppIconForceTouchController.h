/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIAppIconForceTouchController : NSObject <SBUIAppIconForceTouchShortcutViewControllerDelegate, SBUIIconForceTouchControllerDataSource, SBUIIconForceTouchControllerDelegate> {
    SBUIAppIconForceTouchControllerDataProvider * _dataProvider;
    <SBUIAppIconForceTouchControllerDataSource> * _dataSource;
    <SBUIAppIconForceTouchControllerDelegate> * _delegate;
    struct { 
        unsigned int appIconForceTouchController_shouldHandleGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_shouldUseSecureWindowForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_willPresentForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_didPresentForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_willDismissForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_didDismissForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_shouldActivateApplicationShortcutItem_atIndex_forGestureRecognizer : 1; 
    }  _delegateRespondsTo;
    SBUIIconForceTouchController * _iconForceTouchController;
    FBSOpenApplicationService * _openApplicationService;
    UIViewController * _primaryViewController;
    UIViewController * _secondaryViewController;
}

@property (nonatomic) <SBUIAppIconForceTouchControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIAppIconForceTouchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;

- (void).cxx_destruct;
- (void)_dismissAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_peekAnimated:(bool)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(bool)arg3;
- (void)_presentAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setupWithGestureRecognizer:(id)arg1;
- (id)_shortcutViewControllerForDataProvider:(id)arg1;
- (id)_widgetViewControllerForDataProvider:(id)arg1;
- (void)appIconForceTouchShortcutViewController:(id)arg1 activateApplicationShortcutItem:(id)arg2;
- (bool)appIconForceTouchShortcutViewControllerShouldHandleGestureRecognizers:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)iconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 didPresentForGestureRecognizer:(id)arg2;
- (double)iconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconForceTouchController:(id)arg1 iconImageInsetsForGestureRecognizer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (long long)iconForceTouchController:(id)arg1 layoutStyleForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 parallaxSettingsForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 primaryViewControllerForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 secondaryViewControllerForGestureRecognizer:(id)arg2;
- (bool)iconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (bool)iconForceTouchController:(id)arg1 shouldUseSecureWindowForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 willDismissForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;
- (struct CGPoint { double x1; double x2; })iconForceTouchController:(id)arg1 zoomDownCenterForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 zoomDownViewForGestureRecognizer:(id)arg2;
- (id)init;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startHandlingGestureRecognizer:(id)arg1;
- (long long)state;
- (void)stopHandlingGestureRecognizer:(id)arg1;

@end
