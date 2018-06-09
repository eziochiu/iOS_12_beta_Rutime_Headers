/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportHistoryGridViewController : PUPhotosGridViewController <PUImportHistorySectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {
    PLDateRangeFormatter * _dateFormatter;
    NSMutableDictionary * _headerHeightCache;
    PHFetchResult * _importSessions;
    PUImportHistorySectionHeaderView * _referenceHeaderView;
    double  _referenceWidth;
}

@property (nonatomic, readonly) PLDateRangeFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *headerHeightCache;
@property (nonatomic, retain) PHFetchResult *importSessions;
@property (nonatomic, retain) PUImportHistorySectionHeaderView *referenceHeaderView;
@property (nonatomic) double referenceWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureSectionHeaderView:(id)arg1 section:(long long)arg2;
- (void)_importHistoryContentSizeCategoryDidChangeNotification:(id)arg1;
- (bool)allowSlideshowButton;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)dateFormatter;
- (void)dealloc;
- (id)headerHeightCache;
- (void)headerViewDidPressActionButton:(id)arg1;
- (id)importSessions;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (bool)initiallyScrolledToBottom;
- (id)newGridLayout;
- (id)referenceHeaderView;
- (double)referenceWidth;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHeaderHeightCache:(id)arg1;
- (void)setImportSessions:(id)arg1;
- (void)setReferenceHeaderView:(id)arg1;
- (void)setReferenceWidth:(double)arg1;
- (void)setSelected:(bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(bool)arg4;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
