/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMomentsSettings : PXSettings {
    bool  _allowCollectionInfluence;
    unsigned long long  _order;
}

@property (nonatomic) bool allowCollectionInfluence;
@property (nonatomic) unsigned long long order;

+ (void)_clearSelection;
+ (id)_currentlySelectedAssets;
+ (void)_mergeMoments;
+ (void)_rebuildMoments;
+ (void)_renameCollection;
+ (void)_renameMoment;
+ (void)_splitMomentsWithBoth:(bool)arg1;
+ (void)_tagSelectionForCollections;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowCollectionInfluence;
- (unsigned long long)order;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)setAllowCollectionInfluence:(bool)arg1;
- (void)setDefaultValues;
- (void)setOrder:(unsigned long long)arg1;

@end
