/* made by EzioChiu.
 */

@protocol PLResource <PLResourceIdentity>

@required

- (<PLAssetID> *)assetID;
- (<PLCodecIdentity> *)codecID;
- (<PLColorSpaceIdentity> *)colorSpaceID;
- (unsigned long long)cplType;
- (<PLResourceDataStore> *)dataStore;
- (<PLResourceDataStoreKey> *)dataStoreKey;
- (long long)dataStoreSubtype;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isPrimaryUTI;
- (short)localAvailability;
- (short)localAvailabilityTarget;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (int)qualitySortValue;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (short)remoteAvailabilityTarget;

@end
