/* made by EzioChiu.
 */

@protocol DevicePINControllerDelegate <NSObject>

@optional

- (void)devicePINController:(DevicePINController *)arg1 didAcceptChangedPIN:(NSString *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didAcceptSetPIN:(NSString *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didFailToChangePinWithError:(NSError *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didFailToSetPinWithError:(NSError *)arg2;
- (void)devicePINController:(void *)arg1 shouldAcceptPIN:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: DevicePINController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)devicePINControllerDidDismissPINPane:(DevicePINController *)arg1;
- (void)didAcceptChangedPIN;
- (void)didAcceptEnteredPIN;
- (void)didAcceptEnteredPIN:(NSString *)arg1;
- (void)didAcceptRemovePIN;
- (void)didAcceptSetPIN;
- (void)didCancelEnteringPIN;
- (void)showWeakWarningAlertForController:(void *)arg1 offerUseAnyway:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)willAcceptEnteredPIN;
- (void)willCancelEnteringPIN;

@end
