/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPowerStateTargetValueTuple : NSObject {
    NSString * _characteristicType;
    NSNumber * _offTargetValue;
    NSNumber * _onTargetValue;
}

@property (nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) NSNumber *offTargetValue;
@property (nonatomic, readonly) NSNumber *onTargetValue;

+ (id)fanStateTargetValueTuple;

- (void).cxx_destruct;
- (id)characteristicType;
- (id)init;
- (id)initWithCharacteristicType:(id)arg1 onTargetValue:(id)arg2 offTargetValue:(id)arg3;
- (id)offTargetValue;
- (id)onTargetValue;
- (long long)primaryStateForTargetValue:(id)arg1;
- (id)targetValueForPrimaryState:(long long)arg1;

@end
