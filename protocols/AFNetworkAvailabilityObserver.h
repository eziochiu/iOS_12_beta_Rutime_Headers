/* made by EzioChiu.
 */

@protocol AFNetworkAvailabilityObserver <NSObject>

@required

- (void)networkAvailability:(AFNetworkAvailability *)arg1 isAvailable:(bool)arg2;

@end
