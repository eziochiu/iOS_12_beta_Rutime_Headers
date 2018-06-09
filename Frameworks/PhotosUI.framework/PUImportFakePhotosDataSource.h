/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportFakePhotosDataSource : PXPhotosDataSource {
    PUImportAssetsDataSource * _importDataSource;
}

@property (nonatomic, retain) PUImportAssetsDataSource *importDataSource;

- (void).cxx_destruct;
- (id)importDataSource;
- (id)initWithImportDataSource:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(bool)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setImportDataSource:(id)arg1;

@end
