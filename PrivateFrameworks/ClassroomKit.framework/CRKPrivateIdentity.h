/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKPrivateIdentity : NSObject <CRKCloudStoringSubItem> {
    NSString * _commonNamePrefix;
    NSDate * _identityExpirationDate;
    NSData * _identityPersistentId;
    NSDate * _stagedIdentityExpirationDate;
    NSData * _stagedIdentityPersistentId;
}

@property (nonatomic, copy) NSString *commonNamePrefix;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *identityExpirationDate;
@property (nonatomic, retain) NSData *identityPersistentId;
@property (nonatomic, retain) NSDate *stagedIdentityExpirationDate;
@property (nonatomic, retain) NSData *stagedIdentityPersistentId;
@property (readonly) Class superclass;

+ (id)commonNameWithPrefix:(id)arg1;
+ (id)createIdentityWithCommonName:(id)arg1;
+ (id)freshPrivateIdentityWithCommonNamePrefix:(id)arg1;
+ (id)instanceWithParentObject:(id)arg1 keyValue:(id)arg2;
+ (id)instanceWithRecord:(id)arg1;
+ (id)keychainGroup;
+ (id)new;
+ (id)recordType;
+ (id)skeletonInstance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyFieldsToRecord:(id)arg1;
- (id)commonNamePrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identityExpirationDate;
- (id)identityPersistentId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentityPersistentId:(id)arg1 stagedIdentityPersistentId:(id)arg2 commonNamePrefix:(id)arg3;
- (bool)isChangedFrom:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recordName;
- (bool)refreshIdentities;
- (void)setCommonNamePrefix:(id)arg1;
- (void)setIdentityExpirationDate:(id)arg1;
- (void)setIdentityPersistentId:(id)arg1;
- (void)setStagedIdentityExpirationDate:(id)arg1;
- (void)setStagedIdentityPersistentId:(id)arg1;
- (id)stagedIdentityExpirationDate;
- (id)stagedIdentityPersistentId;

@end