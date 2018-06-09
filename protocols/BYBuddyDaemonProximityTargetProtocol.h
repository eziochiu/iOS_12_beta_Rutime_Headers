/* made by EzioChiu.
 */

@protocol BYBuddyDaemonProximityTargetProtocol <NSObject>

@required

- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(NSString *)arg1 visual:(bool)arg2;
- (void)proximititySetupCompleted:(NSError *)arg1;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(CUMessageSession *)arg1;
- (void)proximityConnectionTerminated;
- (void)receivedLanguages:(NSArray *)arg1 locale:(NSString *)arg2 model:(NSString *)arg3 deviceClass:(NSString *)arg4;

@end
