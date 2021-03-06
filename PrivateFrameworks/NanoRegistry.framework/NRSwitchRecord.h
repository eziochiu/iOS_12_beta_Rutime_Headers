/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>

@property (nonatomic, retain) NSUUID *activeDeviceID;
@property (nonatomic, retain) NSDate *date;

+ (bool)supportsSecureCoding;
+ (id)switchRecordWithHistoryEntry:(id)arg1;

- (id)activeDeviceID;
- (id)date;
- (id)initWithDeviceID:(id)arg1 date:(id)arg2 switchIndex:(unsigned int)arg3;
- (void)setActiveDeviceID:(id)arg1;
- (void)setDate:(id)arg1;

@end
