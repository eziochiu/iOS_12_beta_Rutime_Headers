/* made by EzioChiu.
 */

@protocol NPHSOSPersistentTimerLocationManagerDelegate <NSObject>

@required

- (bool)locationIsValidToSend:(CLLocation *)arg1;
- (void)sosPersistentTimerLocationMangerTimerFired:(NPHSOSPersistentTimerLocationManager *)arg1 location:(CLLocation *)arg2;

@end
