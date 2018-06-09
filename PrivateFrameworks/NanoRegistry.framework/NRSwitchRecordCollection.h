/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)addSwitchRecordWithHistoryEntry:(id)arg1;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithHistoryEntries:(id)arg1;
- (void)truncateSwitchRecords;

@end
