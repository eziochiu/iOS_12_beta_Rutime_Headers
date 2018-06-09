/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQuerySubscription : CKSubscription <NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly) unsigned long long querySubscriptionOptions;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (unsigned long long)querySubscriptionOptions;

@end
