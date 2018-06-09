/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {
    unsigned long long  _advertisementFormat;
    NSMapTable * _cachedCharacteristicSignatures;
    NSMutableDictionary * _cachedDescriptors;
    NSMapTable * _cachedServiceSignatures;
    NSNumber * _categoryIdentifier;
    NSNumber * _configNumber;
    unsigned long long  _connectionPriority;
    NSString * _identifier;
    double  _lastSeen;
    bool  _monitorState;
    bool  _notifyingCharacteristicUpdated;
    CBPeripheral * _peripheral;
    NSData * _setupHash;
    NSNumber * _stateNumber;
    NSNumber * _statusFlags;
}

@property (nonatomic) unsigned long long advertisementFormat;
@property (nonatomic, readonly) NSMapTable *cachedCharacteristicSignatures;
@property (nonatomic, readonly) NSMutableDictionary *cachedDescriptors;
@property (nonatomic, readonly) NSMapTable *cachedServiceSignatures;
@property (nonatomic, retain) NSNumber *categoryIdentifier;
@property (nonatomic, retain) NSNumber *configNumber;
@property (nonatomic) unsigned long long connectionPriority;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double lastSeen;
@property (nonatomic) bool monitorState;
@property (nonatomic) bool notifyingCharacteristicUpdated;
@property (nonatomic, retain) CBPeripheral *peripheral;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, retain) NSNumber *stateNumber;
@property (nonatomic, retain) NSNumber *statusFlags;

- (void).cxx_destruct;
- (unsigned long long)advertisementFormat;
- (id)cachedCharacteristicSignatures;
- (id)cachedDescriptors;
- (id)cachedServiceSignatures;
- (id)categoryIdentifier;
- (id)configNumber;
- (unsigned long long)connectionPriority;
- (id)description;
- (id)identifier;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7 setupHash:(id)arg8;
- (double)lastSeen;
- (bool)monitorState;
- (bool)notifyingCharacteristicUpdated;
- (id)peripheral;
- (void)setAdvertisementFormat:(unsigned long long)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setConfigNumber:(id)arg1;
- (void)setConnectionPriority:(unsigned long long)arg1;
- (void)setMonitorState:(bool)arg1;
- (void)setNotifyingCharacteristicUpdated:(bool)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setStatusFlags:(id)arg1;
- (id)setupHash;
- (id)stateNumber;
- (id)statusFlags;
- (void)updatePairedPeripheralConfiguration:(bool)arg1 connectionPriority:(unsigned long long)arg2;

@end
