/* made by EzioChiu.
 */

@protocol HMSetupRemoteHost

@required

- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;
- (void)accessorySetupDidFinishWithError:(NSError *)arg1;
- (void)accessorySetupDidFinishWithInfo:(HMAccessorySetupCompletedInfo *)arg1 error:(NSError *)arg2;
- (void)accessorySetupDidLoad;

@end
