/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPickerViewController : HUTableViewController <HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver> {
    NSArray * _assetCollections;
    NSMutableDictionary * _assetCollectionsToAssetFetchResults;
    long long  _collectionType;
    <HUWallpaperPickerViewControllerDelegate> * _delegate;
    PHCachingImageManager * _imageManager;
    NSString * _namedSectionTitle;
    HUNamedWallpaperCollectionViewController * _namedWallpaperController;
}

@property (nonatomic, retain) NSArray *assetCollections;
@property (nonatomic, retain) NSMutableDictionary *assetCollectionsToAssetFetchResults;
@property (nonatomic) long long collectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUWallpaperPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic, copy) NSString *namedSectionTitle;
@property (nonatomic, retain) HUNamedWallpaperCollectionViewController *namedWallpaperController;
@property (nonatomic, readonly) bool shouldShowPhotoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetCollections;
- (id)assetCollectionsToAssetFetchResults;
- (long long)collectionType;
- (void)contentSizeCategoryDidChange;
- (id)currentSectionIdentifiers;
- (id)delegate;
- (id)identifierForSection:(unsigned long long)arg1;
- (id)imageManager;
- (id)initWithCollectionType:(long long)arg1 namedSectionTitle:(id)arg2 delegate:(id)arg3;
- (id)initWithStyle:(long long)arg1;
- (void)loadAssetCollections;
- (id)namedSectionTitle;
- (id)namedWallpaperController;
- (void)namedWallpaperController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoCollectionController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setAssetCollections:(id)arg1;
- (void)setAssetCollectionsToAssetFetchResults:(id)arg1;
- (void)setCollectionType:(long long)arg1;
- (void)setImageManager:(id)arg1;
- (void)setNamedSectionTitle:(id)arg1;
- (void)setNamedWallpaperController:(id)arg1;
- (bool)shouldShowPhotoLibrary;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;

@end
