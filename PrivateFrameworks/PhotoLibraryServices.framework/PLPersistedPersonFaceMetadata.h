/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLFaceRebuildDescription> {
    NSString * _assetCloudGUID;
    NSString * _assetUUID;
    double  _centerX;
    double  _centerY;
    int  _cloudNameSource;
    bool  _clusterRejected;
    bool  _hidden;
    bool  _isHidden;
    bool  _manual;
    int  _nameSource;
    bool  _representative;
    double  _size;
}

@property (nonatomic, copy) NSString *assetCloudGUID;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) int cloudNameSource;
@property (getter=isClusterRejected, nonatomic) bool clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isHidden, nonatomic, readonly) bool isHidden;
@property (getter=isManual, nonatomic) bool manual;
@property (nonatomic) int nameSource;
@property (getter=isRepresentative, nonatomic) bool representative;
@property (nonatomic) double size;
@property (readonly) Class superclass;

+ (id)_detectedFacePropertiesToFetch;
+ (id)_detectedFaceRelationshipKeyPathsToPrefetch;
+ (id)_migrateDetectedFaces:(id)arg1 forPersonMetadata:(id)arg2 fromVersion:(unsigned long long)arg3;
+ (id)_persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(bool)arg2 isClusterRejected:(bool)arg3;
+ (id)_persistedFacesWithUnarchiver:(id)arg1 key:(id)arg2;
+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1 personUUID:(id)arg2 isRejected:(bool)arg3;
- (id)assetCloudGUID;
- (id)assetUUID;
- (double)centerX;
- (double)centerY;
- (int)cloudNameSource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isClusterRejected;
- (bool)isHidden;
- (bool)isHidden;
- (bool)isManual;
- (bool)isRepresentative;
- (id)jsonDictionary;
- (bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forConfirmedPersonUUID:(id)arg2 diff:(id*)arg3;
- (bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forRejectedPersonUUID:(id)arg2 diff:(id*)arg3;
- (id)matchingFaceInManagedObejctContext:(id)arg1;
- (int)nameSource;
- (void)setAssetCloudGUID:(id)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setCloudNameSource:(int)arg1;
- (void)setClusterRejected:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSource:(int)arg1;
- (void)setRepresentative:(bool)arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end
