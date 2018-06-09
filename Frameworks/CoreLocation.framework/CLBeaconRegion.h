/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLBeaconRegion : CLRegion

@property (nonatomic, readonly, copy) NSNumber *major;
@property (nonatomic, readonly, copy) NSNumber *minor;
@property (nonatomic) bool notifyEntryStateOnDisplay;
@property (nonatomic, readonly, copy) NSUUID *proximityUUID;

+ (id)any;
+ (bool)supportsSecureCoding;

- (BOOL)_measuredPowerForDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (id)major;
- (id)minor;
- (bool)notifyEntryStateOnDisplay;
- (id)peripheralDataWithMeasuredPower:(id)arg1;
- (id)proximityUUID;
- (void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(bool)arg4;
- (void)setNotifyEntryStateOnDisplay:(bool)arg1;

@end
