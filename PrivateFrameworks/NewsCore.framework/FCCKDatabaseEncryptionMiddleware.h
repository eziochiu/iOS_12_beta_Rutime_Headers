/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware> {
    FCCKPrivateDatabaseSchema * _encryptionSchema;
    <FCCKRecordNameCipher> * _recordNameCipher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCCKPrivateDatabaseSchema *encryptionSchema;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCCKRecordNameCipher> *recordNameCipher;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientZoneIDFromServerZoneID:(id)arg1 error:(id*)arg2;
- (bool)_decryptField:(id)arg1 inRecord:(id)arg2 error:(id*)arg3;
- (bool)_decryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (bool)_decryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id*)arg3;
- (bool)_encryptField:(id)arg1 inRecord:(id)arg2 error:(id*)arg3;
- (bool)_encryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (bool)_encryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id*)arg3;
- (id)_encryptionKeyForClientRecordID:(id)arg1 inDatabase:(id)arg2;
- (id)_encryptionKeyForServerRecordID:(id)arg1 inDatabase:(id)arg2;
- (bool)_isEnabledForDatabase:(id)arg1;
- (id)_serverZoneIDFromClientZoneID:(id)arg1 error:(id*)arg2;
- (id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
- (id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)encryptionSchema;
- (id)initWithEncryptionSchema:(id)arg1;
- (id)initWithEncryptionSchema:(id)arg1 recordNameCipher:(id)arg2;
- (id)recordNameCipher;
- (id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
- (id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (void)setEncryptionSchema:(id)arg1;
- (void)setRecordNameCipher:(id)arg1;

@end
