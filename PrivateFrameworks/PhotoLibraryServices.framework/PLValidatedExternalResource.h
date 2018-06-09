/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLValidatedExternalResource : NSObject <NSCopying, PLWriteableResource> {
    <PLAssetID> * _assetID;
    <PLCodecIdentity> * _codecID;
    <PLColorSpaceIdentity> * _colorSpaceID;
    unsigned long long  _cplType;
    NSData * _data;
    long long  _dataLength;
    <PLResourceDataStore> * _dataStore;
    <PLResourceDataStoreKey> * _dataStoreKey;
    long long  _dataStoreSubtype;
    NSURL * _fileURL;
    NSString * _fingerprint;
    short  _localAvailability;
    short  _localAvailabilityTarget;
    unsigned int  _orientation;
    int  _qualitySortValue;
    unsigned int  _recipeID;
    short  _remoteAvailability;
    short  _remoteAvailabilityTarget;
    short  _resourceType;
    <PLUniformTypeIdentifierIdentity> * _uniformTypeIdentifierID;
    long long  _unorientedHeight;
    long long  _unorientedWidth;
    short  _version;
}

@property (nonatomic, readonly, copy) <PLAssetID> *assetID;
@property (nonatomic, readonly) <PLCodecIdentity> *codecID;
@property (nonatomic, readonly) <PLColorSpaceIdentity> *colorSpaceID;
@property (nonatomic) unsigned long long cplType;
@property (nonatomic, copy) NSData *data;
@property (nonatomic) long long dataLength;
@property (nonatomic, readonly) <PLResourceDataStore> *dataStore;
@property (nonatomic, readonly) <PLResourceDataStoreKey> *dataStoreKey;
@property (nonatomic, readonly) long long dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, retain) NSString *fingerprint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) short localAvailability;
@property (nonatomic, readonly) short localAvailabilityTarget;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) long long orientedHeight;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic, readonly) int qualitySortValue;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) short remoteAvailability;
@property (nonatomic, readonly) short remoteAvailabilityTarget;
@property (nonatomic, readonly) short resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PLUniformTypeIdentifierIdentity> *uniformTypeIdentifierID;
@property (nonatomic, readonly) long long unorientedHeight;
@property (nonatomic, readonly) long long unorientedWidth;
@property (nonatomic, readonly) short version;

- (void).cxx_destruct;
- (id)assetID;
- (id)codecID;
- (id)colorSpaceID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cplType;
- (id)data;
- (long long)dataLength;
- (id)dataStore;
- (id)dataStoreKey;
- (long long)dataStoreSubtype;
- (id)fileURL;
- (id)fingerprint;
- (id)init;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isPrimaryUTI;
- (short)localAvailability;
- (short)localAvailabilityTarget;
- (unsigned int)orientation;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (int)qualitySortValue;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (short)remoteAvailabilityTarget;
- (short)resourceType;
- (void)setCodecID:(id)arg1;
- (void)setColorSpaceID:(id)arg1;
- (void)setCplType:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setDataLength:(long long)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFingerprint:(id)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setQualitySortValue:(int)arg1;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2 isNativeColorSpace:(bool)arg3;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setResourceType:(short)arg1;
- (void)setUniformTypeIdentifierID:(id)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(short)arg1;
- (id)uniformTypeIdentifierID;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (short)version;

@end
