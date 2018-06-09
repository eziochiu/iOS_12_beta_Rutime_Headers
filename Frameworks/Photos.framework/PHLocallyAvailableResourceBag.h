/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject> {
    <PLAssetID> * _assetID;
    <PLResourceDataStore> * _dataStore;
    <PLResourceDataStoreKey> * _dataStoreKey;
    bool  _isDefaultOrientation;
    bool  _isDegraded;
    bool  _isPrimaryFormat;
}

@property (nonatomic, retain) <PLAssetID> *assetID;
@property (nonatomic, retain) <PLResourceDataStore> *dataStore;
@property (nonatomic, retain) <PLResourceDataStoreKey> *dataStoreKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDefaultOrientation;
@property (nonatomic) bool isDegraded;
@property (nonatomic) bool isPrimaryFormat;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetID;
- (id)dataStore;
- (id)dataStoreKey;
- (bool)isDefaultOrientation;
- (bool)isDegraded;
- (bool)isPrimaryFormat;
- (void)prepareForReuse;
- (id)resourceData;
- (id)resourceURL;
- (void)setAssetID:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setIsDefaultOrientation:(bool)arg1;
- (void)setIsDegraded:(bool)arg1;
- (void)setIsPrimaryFormat:(bool)arg1;

@end
