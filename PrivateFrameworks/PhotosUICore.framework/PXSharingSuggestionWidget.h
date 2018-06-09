/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingSuggestionWidget : NSObject <PXPeopleDataSourceDelegate, PXPeopleStripCollectionViewControllerDelegate, PXWidget> {
    double  _cellMinInteritemSpacing;
    double  _cellMinLineSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    PXPeopleStripCollectionViewController * _collectionViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    long long  _contentViewAnchoringType;
    PXPhotosDetailsContext * _context;
    PXSharingSuggestionDataSource * _dataSource;
    unsigned long long  _sharingStream;
    PXWidgetSpec * _spec;
    double  _targetPrefetchWidth;
    bool  _userInteractionEnabled;
    <PXWidgetDelegate> * _widgetDelegate;
    <PXWidgetUnlockDelegate> * _widgetUnlockDelegate;
}

@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic) double cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic, retain) PXPeopleStripCollectionViewController *collectionViewController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) PXSharingSuggestionDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) double targetPrefetchWidth;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (bool)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize { double x1; double x2; }*)arg2 interitemSpacing:(double*)arg3;
- (void)_loadContainerView;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (void)_prepareDataSource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_realContentInset;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (double)cellMinInteritemSpacing;
- (double)cellMinLineSpacing;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionViewController;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)contentView;
- (long long)contentViewAnchoringType;
- (id)context;
- (id)dataSource;
- (bool)hasContentForCurrentInput;
- (id)init;
- (id)initWithSharingStream:(unsigned long long)arg1;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedTitle;
- (void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setCellMinInteritemSpacing:(double)arg1;
- (void)setCellMinLineSpacing:(double)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSharingStream:(unsigned long long)arg1;
- (void)setSpec:(id)arg1;
- (void)setTargetPrefetchWidth:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)setWidgetUnlockDelegate:(id)arg1;
- (unsigned long long)sharingStream;
- (struct CGSize { double x1; double x2; })sizeForItem;
- (id)spec;
- (double)targetPrefetchWidth;
- (id)traitCollection;
- (void)unloadContentData;
- (id)widgetDelegate;
- (id)widgetUnlockDelegate;

@end
