/* made by EzioChiu.
 */

@protocol INRideCompletionStatusExport <NSObject, JSExport>

@required

+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completed;
+ (id)completedWithOutstandingPaymentAmount:(INCurrencyAmount *)arg1;
+ (id)completedWithSettledPaymentAmount:(INCurrencyAmount *)arg1;

- (NSUserActivity *)completionUserActivity;
- (id)init;
- (bool)isCanceled;
- (bool)isCanceledByService;
- (bool)isCompleted;
- (bool)isMissedPickup;
- (bool)isOutstanding;
- (INCurrencyAmount *)paymentAmount;
- (void)setCanceledByService:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionUserActivity:(NSUserActivity *)arg1;
- (void)setMissedPickup:(bool)arg1;
- (void)setOutstanding:(bool)arg1;
- (void)setPaymentAmount:(INCurrencyAmount *)arg1;

@end
