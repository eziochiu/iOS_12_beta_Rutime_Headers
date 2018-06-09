/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconPeekController : SBUIAppIconForceTouchController <SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAppIconPeekController;

- (id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (double)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (bool)appIconForceTouchController:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(id)arg4;
- (bool)appIconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;

@end
