/* made by EzioChiu.
 */

@protocol APUIIntentHandlingViewControllerDelegate <NSObject>

@required

- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 didComplete:(bool)arg2;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 requiresConfirmationWithResponse:(INIntentResponse *)arg2 confirmationActionTitle:(NSString *)arg3;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 wantsPreferredSize:(struct CGSize { double x1; double x2; })arg2;
- (void)intentHandlingViewController:(void *)arg1 willContinueInAppForIntent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: APUIIntentHandlingViewController *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
