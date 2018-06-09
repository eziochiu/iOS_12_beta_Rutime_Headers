/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchZeroKeywordGadget : UICollectionViewController <PXGadget, UICollectionViewDataSourcePrefetching> {
    unsigned long long  _dataSourceSection;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    unsigned long long  _priority;
    long long  _sectionType;
    PUSearchHomeThumbnailManager * _thumbnailManager;
    PUSearchZeroKeywordDataSource * _zeroKeywordDataSource;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) unsigned long long dataSourceSection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, readonly) long long sectionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, retain) PUSearchHomeThumbnailManager *thumbnailManager;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;

- (void).cxx_destruct;
- (void)_configureCollectionView;
- (id)_configurePeopleCell:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct NSObject { Class x1; }*)contentViewController;
- (unsigned long long)dataSourceSection;
- (id)debugURLsForDiagnostics;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (id)initWithDataSource:(id)arg1 dataSourceSection:(unsigned long long)arg2 sectionType:(long long)arg3;
- (id)localizedTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)prefetchThumbnailForKey:(id)arg1 itemType:(long long)arg2;
- (unsigned long long)priority;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)sectionType;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setThumbnailManager:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailManager;
- (void)viewDidLoad;
- (id)zeroKeywordDataSource;

@end
