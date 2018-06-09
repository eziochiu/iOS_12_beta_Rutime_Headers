/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSubscription : NSObject <NSCopying, NSSecureCoding> {
    CKNotificationInfo * _notificationInfo;
    NSPredicate * _predicate;
    NSString * _recordType;
    NSString * _subscriptionID;
    unsigned long long  _subscriptionOptions;
    long long  _subscriptionType;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, copy) CKNotificationInfo *notificationInfo;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, copy) NSString *subscriptionID;
@property (nonatomic) unsigned long long subscriptionOptions;
@property (nonatomic) long long subscriptionType;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)_initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)_initWithSubscriptionType:(long long)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)_subscriptionOptions;
- (void)_validateSubscriptionOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)notificationInfo;
- (id)predicate;
- (id)recordType;
- (void)setNotificationInfo:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSubscriptionOptions:(unsigned long long)arg1;
- (void)setSubscriptionType:(long long)arg1;
- (void)setZoneID:(id)arg1;
- (id)subscriptionID;
- (unsigned long long)subscriptionOptions;
- (long long)subscriptionType;
- (id)zoneID;

@end
