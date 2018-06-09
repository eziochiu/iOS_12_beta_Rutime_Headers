/* made by EzioChiu
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {
    struct NSObject { Class x1; } * _album;
    bool  _applyHyperionFilter;
    ALAssetsFilter * _assetsFilter;
    unsigned long long  _groupType;
    bool  _isCloudSharedGroup;
    bool  _isValid;
    ALAssetsLibrary * _library;
    bool  _loadedAssets;
    PLPhotoLibrary * _photoLibrary;
    NSMutableDictionary * _propertyValues;
}

@property (nonatomic, retain) PLPhotoLibrary *_photoLibrary;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic) bool applyHyperionFilter;
@property (nonatomic, retain) ALAssetsFilter *assetsFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long groupType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCloudSharedGroup;
@property (nonatomic) bool isValid;
@property (nonatomic) ALAssetsLibrary *library;
@property (nonatomic, retain) NSMutableDictionary *propertyValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (id)_photoLibrary;
- (struct NSObject { Class x1; }*)album;
- (int)albumFilter;
- (bool)applyHyperionFilter;
- (id)assetsFilter;
- (void)dealloc;
- (unsigned long long)groupType;
- (id)initWithAlbum:(struct NSObject { Class x1; }*)arg1 library:(id)arg2;
- (bool)isCloudSharedGroup;
- (bool)isValid;
- (id)library;
- (void)libraryDidChange;
- (void)populateAssets;
- (id)propertyValues;
- (void)resetAssets;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setApplyHyperionFilter:(bool)arg1;
- (void)setAssetsFilter:(id)arg1;
- (void)setGroupType:(unsigned long long)arg1;
- (void)setIsCloudSharedGroup:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPropertyValues:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)set_photoLibrary:(id)arg1;
- (void)updateAlbumFiltering;
- (id)valueForProperty:(id)arg1;

@end
