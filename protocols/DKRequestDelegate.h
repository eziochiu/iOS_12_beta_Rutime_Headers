/* made by EzioChiu.
 */

@protocol DKRequestDelegate <NSObject>

@required

- (void)request:(id <DKRequest>)arg1 didCompleteWithPayload:(id <NSSecureCoding>)arg2 error:(NSError *)arg3;

@end
