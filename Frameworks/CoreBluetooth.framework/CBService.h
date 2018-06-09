/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBService : CBAttribute {
    NSArray * _characteristics;
    NSNumber * _endHandle;
    NSArray * _includedServices;
    bool  _isPrimary;
    CBPeripheral * _peripheral;
    NSNumber * _startHandle;
}

@property (retain) NSArray *characteristics;
@property (nonatomic, readonly) NSNumber *endHandle;
@property (retain) NSArray *includedServices;
@property (nonatomic) bool isPrimary;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) NSNumber *startHandle;

- (void).cxx_destruct;
- (id)characteristics;
- (id)description;
- (id)endHandle;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (id)includedServices;
- (id)initWithPeripheral:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (bool)isPrimary;
- (id)peripheral;
- (void)setCharacteristics:(id)arg1;
- (void)setIncludedServices:(id)arg1;
- (void)setIsPrimary:(bool)arg1;
- (id)startHandle;

@end
