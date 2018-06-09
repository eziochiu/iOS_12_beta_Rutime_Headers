/* made by EzioChiu.
 */

@protocol BYFollowUpFlowControlling

@required

- (UIViewController *)viewControllerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSArray *, void*

@optional

- (bool)controllerNeedsToRun;
- (void)performExtendedInitializationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, void*
- (UIViewController *)preconditionViewControllerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, void*
- (NSString *)prerequisiteFlowIdentifier;

@end
