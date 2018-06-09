/* made by EzioChiu.
 */

@protocol AFServiceHelper <NSObject>

@required

- (NSString *)assistantLocalizedStringForKey:(NSString *)arg1 table:(NSString *)arg2 bundle:(NSBundle *)arg3;
- (void)dismissAssistant;
- (void)handleCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SABaseCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SABaseCommand *, NSError *, void*
- (bool)isDeviceLockedWithPasscode;
- (bool)isTimeoutSuspended;
- (bool)openSensitiveURL:(NSURL *)arg1;
- (AFPeerInfo *)peerInfoForCurrentCommand;

@end
