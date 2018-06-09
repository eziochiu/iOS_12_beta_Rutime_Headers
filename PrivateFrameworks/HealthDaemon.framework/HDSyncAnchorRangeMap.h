/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding> {
    NSMutableDictionary * _anchorRangesByEntityIdentifier;
}

@property (nonatomic, retain) NSMutableDictionary *anchorRangesByEntityIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)anchorRangeCount;
- (id)anchorRangesByEntityIdentifier;
- (id)codableSyncAnchorRangeMap;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id /* block */)arg1;
- (bool)getAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; }*)arg1 forSyncEntityIdentifier:(id)arg2;
- (id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg1 forSyncEntityIdentifier:(id)arg2;
- (void)setAnchorRangesByEntityIdentifier:(id)arg1;

@end
