/* made by EzioChiu.
 */

@protocol NFValueAddedServiceSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didPerformValueAddedServiceTransactions:(NSArray *)arg1;
- (void)didSelectValueAddedService:(bool)arg1;

@end
