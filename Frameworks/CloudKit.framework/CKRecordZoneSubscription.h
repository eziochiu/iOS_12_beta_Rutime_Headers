/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneSubscription : CKSubscription <NSCopying, NSSecureCoding>

@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2;

@end
