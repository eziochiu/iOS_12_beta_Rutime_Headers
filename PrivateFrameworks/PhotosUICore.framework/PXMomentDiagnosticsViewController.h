/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMomentDiagnosticsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray * _addedAssets;
    PHFetchResult * _assetsForMoment;
    UICollectionView * _collectionView;
    bool  _curationDebugEnabled;
    NSDictionary * _curationDebugInformation;
    UIView * _curationSettingsView;
    unsigned long long  _curationType;
    UIView * _curationTypeView;
    NSMutableDictionary * _dedupedSymbolIndexByItemIdentifier;
    PHCachingImageManager * _imageManager;
    UIView * _itemDetailsView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousPreheatRect;
    NSMutableArray * _removedAssets;
    NSArray * _sectionTitles;
    UISegmentedControl * _segmentedControl;
    NSDictionary * _sourceDictionary;
    PHMoment * _sourceMoment;
    NSDictionary * _tableContent;
    UITableView * _tableView;
    long long  _thumbnailContentMode;
    PHImageRequestOptions * _thumbnailOptions;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (id)_curationTypeKeys;
- (void)_enumerateDifferencesBetweenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)_requestMomentCurationDebugInfo;
- (void)_switchLogsAction:(id)arg1;
- (void)_tapToRadar:(id)arg1;
- (void)_updateCachedAssets;
- (void)changeCurationDebugEnabled:(id)arg1;
- (void)changeCurationType:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentCurationDebugInformation;
- (void)displayCurrentCurationType;
- (void)hideCurationSettings:(id)arg1;
- (void)hideItemDetails:(id)arg1;
- (id)initWithMoment:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadCuration;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showCurationSettings:(id)arg1;
- (void)showItemDetailsWithDebugInfo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
