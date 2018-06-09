/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    long long  _changeTypes;
    NSDictionary * _configurationsByRecordZoneID;
    bool  _fetchAllChanges;
    bool  _forcePCSDecryptionAttempt;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) long long changeTypes;
@property (nonatomic, retain) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic) bool forcePCSDecryptionAttempt;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (long long)changeTypes;
- (id)configurationsByRecordZoneID;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllChanges;
- (bool)forcePCSDecryptionAttempt;
- (id)initWithCoder:(id)arg1;
- (id)recordZoneIDs;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setChangeTypes:(long long)arg1;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setForcePCSDecryptionAttempt:(bool)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
