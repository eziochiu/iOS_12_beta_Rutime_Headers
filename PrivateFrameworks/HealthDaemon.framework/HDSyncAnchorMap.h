/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _anchorsByEntityIdentifier;
}

@property (nonatomic, retain) NSMutableDictionary *anchorsByEntityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)anchorMapWithAnchorMap:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (id)anchorsByEntityIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAllZero;
- (bool)isEqual:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (void)setAnchor:(long long)arg1 forSyncEntityIdentifier:(id)arg2;
- (void)setAnchorsByEntityIdentifier:(id)arg1;
- (void)setAnchorsFromMap:(id)arg1;

@end
