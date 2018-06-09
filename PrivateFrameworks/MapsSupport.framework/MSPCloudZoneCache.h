/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudZoneCache : NSObject <NSSecureCoding> {
    NSUUID * _accountIdentity;
    NSMutableDictionary * _deletedRecordIdentifiersByRecordType;
    NSMutableDictionary * _records;
    CKServerChangeToken * _token;
    NSString * _zoneName;
}

@property (nonatomic, readonly) NSUUID *accountIdentity;
@property (nonatomic, readonly) NSMutableDictionary *deletedRecordIdentifiersByRecordType;
@property (nonatomic, readonly) NSMutableDictionary *records;
@property (nonatomic, copy) CKServerChangeToken *token;
@property (nonatomic, readonly) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentity;
- (id)deletedRecordIdentifiersByRecordType;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchedDeletedRecordIDsByRecordType;
- (id)fetchedRecords;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneName:(id)arg1 accountIdentity:(id)arg2;
- (id)records;
- (void)setToken:(id)arg1;
- (id)token;
- (id)zoneName;

@end
