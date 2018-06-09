/* made by EzioChiu.
 */

@protocol PLWriteableResource <PLResource>

@required

- (<PLCodecIdentity> *)codecID;
- (<PLColorSpaceIdentity> *)colorSpaceID;
- (long long)dataLength;
- (<PLResourceDataStore> *)dataStore;
- (<PLResourceDataStoreKey> *)dataStoreKey;
- (long long)dataStoreSubtype;
- (NSString *)fingerprint;
- (unsigned int)orientation;
- (int)qualitySortValue;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (short)resourceType;
- (void)setCodecID:(id <PLCodecIdentity>)arg1;
- (void)setColorSpaceID:(id <PLColorSpaceIdentity>)arg1;
- (void)setDataLength:(long long)arg1;
- (void)setDataStore:(id <PLResourceDataStore>)arg1;
- (void)setDataStoreKey:(id <PLResourceDataStoreKey>)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setFingerprint:(NSString *)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setQualitySortValue:(int)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setResourceType:(short)arg1;
- (void)setUniformTypeIdentifierID:(id <PLUniformTypeIdentifierIdentity>)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(short)arg1;
- (<PLUniformTypeIdentifierIdentity> *)uniformTypeIdentifierID;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (short)version;

@end
