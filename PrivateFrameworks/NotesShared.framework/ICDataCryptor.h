/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDataCryptor : NSObject <NSSecureCoding> {
    NSString * _cloudSyncingObjectIdentifier;
    NSMutableDictionary * _initializationVectorDictionary;
    NSMutableDictionary * _tagDictionary;
}

@property (nonatomic, retain) NSString *cloudSyncingObjectIdentifier;
@property (nonatomic, retain) NSMutableDictionary *initializationVectorDictionary;
@property (nonatomic, retain) NSMutableDictionary *tagDictionary;
@property (nonatomic, readonly) NSData *unwrappedKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudSyncingObjectIdentifier;
- (id)decryptEncryptedData:(id)arg1 identifier:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptData:(id)arg1 identifier:(id)arg2;
- (id)init;
- (id)initWithCloudSyncingObjectIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initializationVectorDictionary;
- (void)setCloudSyncingObjectIdentifier:(id)arg1;
- (void)setInitializationVectorDictionary:(id)arg1;
- (void)setTagDictionary:(id)arg1;
- (id)tagDictionary;
- (id)unwrappedKey;

@end
