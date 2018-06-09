/* made by EzioChiu
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {
    bool  _isValid;
    ALAssetsLibrary * _library;
    PLManagedAsset * _photo;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) PLPhotoLibrary *_photoLibrary;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeletable, nonatomic, readonly) bool deletable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isValid;
@property (nonatomic) ALAssetsLibrary *library;
@property (nonatomic, retain) PLManagedAsset *photo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (id)_photoLibrary;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (bool)isDeletable;
- (bool)isValid;
- (id)library;
- (void)libraryDidChange;
- (id)photo;
- (void)setIsValid:(bool)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)set_photoLibrary:(id)arg1;

@end
