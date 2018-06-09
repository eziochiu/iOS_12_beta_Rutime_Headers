/* made by EzioChiu.
 */

@protocol SKUIClientAccountPageViewController <NSObject>

@required

- (void)didFinishLoading;
- (void)didPrepareWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)dismissViewControllerWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)financeInterruptionResolved:(bool)arg1;
- (void)overrideCreditCardPresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCreditCardReaderOutput *, void*
- (void)overrideRedeemCameraWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKUIRedeem *, NSError *, void*
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)pushBridgedViewControllerAnimated:(bool)arg1 options:(NSDictionary *)arg2;
- (void)setBridgedNavigationItemWithOptions:(NSDictionary *)arg1;

@end
