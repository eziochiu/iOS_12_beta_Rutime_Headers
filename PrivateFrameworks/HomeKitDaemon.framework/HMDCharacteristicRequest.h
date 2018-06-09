/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicRequest : HMFObject {
    HMDCharacteristic * _characteristic;
    id  _previousValue;
}

@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (nonatomic, readonly) id previousValue;

+ (id)requestWithCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (id)characteristic;
- (id)description;
- (id)initWithCharacteristic:(id)arg1;
- (id)previousValue;

@end
