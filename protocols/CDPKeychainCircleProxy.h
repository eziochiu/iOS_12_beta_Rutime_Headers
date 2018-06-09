/* made by EzioChiu.
 */

@protocol CDPKeychainCircleProxy <NSObject>

@required

- (NSData *)initiatingPayload:(id*)arg1;
- (bool)isComplete;
- (NSData *)processIncomingPayload:(NSData *)arg1 error:(id*)arg2;
- (bool)requiresInitialSync;
- (bool)supportsInteractiveAuth;

@end
