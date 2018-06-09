/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCharacteristic : CBAttribute {
    NSArray * _descriptors;
    NSNumber * _handle;
    bool  _isBroadcasted;
    bool  _isNotifying;
    CBPeripheral * _peripheral;
    unsigned long long  _properties;
    CBService * _service;
    NSData * _value;
    NSNumber * _valueHandle;
    unsigned long long  _valueTimestamp;
}

@property (retain) NSArray *descriptors;
@property (nonatomic, readonly) NSNumber *handle;
@property (readonly) bool isBroadcasted;
@property bool isNotifying;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) CBService *service;
@property (retain) NSData *value;
@property (nonatomic, readonly) NSNumber *valueHandle;
@property (nonatomic, readonly) unsigned long long valueTimestamp;

- (void).cxx_destruct;
- (id)description;
- (id)descriptors;
- (id)handle;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (bool)isBroadcasted;
- (bool)isNotifying;
- (id)peripheral;
- (unsigned long long)properties;
- (id)service;
- (void)setDescriptors:(id)arg1;
- (void)setIsNotifying:(bool)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)valueHandle;
- (unsigned long long)valueTimestamp;

@end
