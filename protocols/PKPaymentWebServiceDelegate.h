/* made by EzioChiu.
 */

@protocol PKPaymentWebServiceDelegate <NSObject>

@required

- (void)paymentWebService:(PKPaymentWebService *)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;

@end
