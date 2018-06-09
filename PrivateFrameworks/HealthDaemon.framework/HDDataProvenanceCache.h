/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataProvenanceCache : NSObject {
    NSMutableDictionary * _codableObjectCollectionsByProvenance;
    NSMutableDictionary * _codableSourcesByID;
    HDSQLiteDatabase * _database;
    NSMutableDictionary * _deviceByPersistentIDCache;
    NSMutableDictionary * _deviceUUIDBytesByID;
    HDProfile * _profile;
    NSMutableDictionary * _provenanceByID;
    HDDataProvenanceManager * _provenanceManager;
    NSMutableDictionary * _sourceByPersistentIDCache;
    HDEntityEncoder * _sourceEncoder;
    NSMutableDictionary * _sourceRevisionsDictionaryBySourceCache;
}

@property (nonatomic, retain) NSMutableDictionary *codableObjectCollectionsByProvenance;
@property (nonatomic, retain) NSMutableDictionary *codableSourcesByID;
@property (nonatomic, retain) HDSQLiteDatabase *database;
@property (nonatomic, retain) NSMutableDictionary *deviceByPersistentIDCache;
@property (nonatomic, retain) NSMutableDictionary *deviceUUIDBytesByID;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) NSMutableDictionary *provenanceByID;
@property (nonatomic, retain) HDDataProvenanceManager *provenanceManager;
@property (nonatomic, retain) NSMutableDictionary *sourceByPersistentIDCache;
@property (nonatomic, retain) HDEntityEncoder *sourceEncoder;
@property (nonatomic, retain) NSMutableDictionary *sourceRevisionsDictionaryBySourceCache;

- (void).cxx_destruct;
- (id)_sourceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)allCodableObjectCollections;
- (void)clearCodableObjectCollections;
- (id)codableObjectCollectionForProvenance:(id)arg1;
- (id)codableObjectCollectionsByProvenance;
- (id)codableProvenanceWithProvenance:(id)arg1;
- (id)codableSourceWithProvenance:(id)arg1;
- (id)codableSourcesByID;
- (id)database;
- (id)deviceByPersistentIDCache;
- (id)deviceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)deviceUUIDBytesByID;
- (id)deviceUUIDBytesWithProvenance:(id)arg1;
- (id)initWithProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3;
- (id)profile;
- (id)provenanceByID;
- (id)provenanceManager;
- (id)provenanceWithID:(long long)arg1;
- (void)setCodableObjectCollectionsByProvenance:(id)arg1;
- (void)setCodableSourcesByID:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDeviceByPersistentIDCache:(id)arg1;
- (void)setDeviceUUIDBytesByID:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProvenanceByID:(id)arg1;
- (void)setProvenanceManager:(id)arg1;
- (void)setSourceByPersistentIDCache:(id)arg1;
- (void)setSourceEncoder:(id)arg1;
- (void)setSourceRevisionsDictionaryBySourceCache:(id)arg1;
- (id)sourceByPersistentIDCache;
- (id)sourceEncoder;
- (id)sourceRevisionForPersistentID:(id)arg1 sourceVersion:(id)arg2 productType:(id)arg3 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg4 profile:(id)arg5 error:(id*)arg6;
- (id)sourceRevisionsDictionaryBySourceCache;

@end
