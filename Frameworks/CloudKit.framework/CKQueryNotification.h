/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryNotification : CKNotification <NSSecureCoding> {
    long long  _databaseScope;
    long long  _queryNotificationReason;
    NSDictionary * _recordFields;
    CKRecordID * _recordID;
}

@property (nonatomic) long long databaseScope;
@property (nonatomic, readonly) bool isPublicDatabase;
@property (nonatomic) long long queryNotificationReason;
@property (nonatomic, copy) NSDictionary *recordFields;
@property (nonatomic, copy) CKRecordID *recordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (long long)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (bool)isPublicDatabase;
- (long long)queryNotificationReason;
- (id)recordFields;
- (id)recordID;
- (void)setDatabaseScope:(long long)arg1;
- (void)setQueryNotificationReason:(long long)arg1;
- (void)setRecordFields:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
