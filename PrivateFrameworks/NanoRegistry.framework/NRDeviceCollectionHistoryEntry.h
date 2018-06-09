/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceCollectionHistoryEntry : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NRDeviceCollectionDiff * _diff;
    NRDeviceCollectionHistory * _historyManager;
    unsigned long long  _index;
    unsigned int  _switchIndex;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NRDeviceCollectionDiff *diff;
@property (nonatomic) NRDeviceCollectionHistory *historyManager;
@property (nonatomic) unsigned long long index;
@property (nonatomic, readonly) NRPBDeviceCollectionHistoryEntry *protobuf;
@property (nonatomic, readonly) NRMutableDeviceCollection *state;
@property (nonatomic) unsigned int switchIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)diff;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)historyManager;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned int)arg5;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (void)setDate:(id)arg1;
- (void)setDiff:(id)arg1;
- (void)setHistoryManager:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setSwitchIndex:(unsigned int)arg1;
- (id)state;
- (unsigned int)switchIndex;

@end
