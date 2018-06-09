/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController <NTKCFaceDetailCustomPhotosViewControllerDelegate> {
    bool  _canDeleteCustomPhotos;
    unsigned long long  _currentContent;
    NTKCompanionCustomPhotosEditor * _customPhotosEditor;
    NSArray * _externalAssets;
    NTKCompanionMemoriesEditor * _memoriesEditor;
    UIViewController * _parentViewController;
    NTKCompanionSyncedAlbumEditor * _syncedAlbumEditor;
    NTKCompanionTransientCustomPhotosEditor * _transientEditor;
}

@property (nonatomic, retain) NTKCompanionCustomPhotosEditor *customPhotosEditor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailPhotosSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *externalAssets;
@property (nonatomic, retain) NTKBasePhotosFaceView *faceView;
@property (nonatomic, readonly) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKCompanionMemoriesEditor *memoriesEditor;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKCompanionSyncedAlbumEditor *syncedAlbumEditor;
@property (nonatomic, retain) NTKCompanionTransientCustomPhotosEditor *transientEditor;

+ (bool)hasPhotosSectionForFace:(id)arg1 forEditMode:(long long)arg2;

- (void).cxx_destruct;
- (id)_actionNameForOption:(id)arg1;
- (bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (id)_currentEditor;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (bool)_handleDidSelectActionRowForOption:(id)arg1;
- (bool)_handleDidSelectOption:(id)arg1;
- (void)_setPhotos:(id)arg1;
- (void)_updatePhotosSection;
- (bool)canAddFace;
- (void)customPhotosControllerDidFinish:(id)arg1;
- (id)customPhotosEditor;
- (id)externalAssets;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (bool)hasChanges;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 externalAssets:(id)arg6;
- (id)memoriesEditor;
- (id)parentViewController;
- (void)saveChangesWithCompletion:(id /* block */)arg1;
- (void)setCustomPhotosEditor:(id)arg1;
- (void)setExternalAssets:(id)arg1;
- (void)setMemoriesEditor:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSelectedOptions:(id)arg1;
- (void)setSyncedAlbumEditor:(id)arg1;
- (void)setTransientEditor:(id)arg1;
- (id)syncedAlbumEditor;
- (id)transientEditor;

@end