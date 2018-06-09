/* made by EzioChiu.
 */

@protocol HFCharacteristicWriteActionBuilderFactory <NSObject>

@required

- (bool)actionsMayRequireDeviceUnlock;
- (bool)containsActionableCharacteristics;
- (NAFuture *)currentStateActionBuildersForHome:(HMHome *)arg1;

@end
