/* made by EzioChiu.
 */

@protocol BBAssertionDelegate <NSObject>

@required

- (void)assertionExpired:(NSString *)arg1 transactionID:(unsigned long long)arg2;

@end
