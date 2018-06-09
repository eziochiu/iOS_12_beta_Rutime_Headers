/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISeasonPickerViewController : VUILibraryFetchControllerViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILocalContentProtocol, VUIMediaEntitiesFetchControllerDelegate> {
    NSObject<VUIMediaEntityIdentifier> * _collectionIdentifier;
    bool  _onlyShowLocalContent;
    NSString * _pickerTitle;
    _VUISeasonPickerView * _seasonPickerView;
    NSArray * _seasons;
    VUISeasonPickerCollectionViewCell * _sizingCell;
}

@property (nonatomic, retain) NSObject<VUIMediaEntityIdentifier> *collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool onlyShowLocalContent;
@property (nonatomic, retain) NSString *pickerTitle;
@property (nonatomic, retain) _VUISeasonPickerView *seasonPickerView;
@property (nonatomic, retain) NSArray *seasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 title:(id)arg2 collectionIdentifier:(id)arg3;
- (bool)onlyShowLocalContent;
- (id)pickerTitle;
- (id)seasonPickerView;
- (id)seasons;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setOnlyShowLocalContent:(bool)arg1;
- (void)setPickerTitle:(id)arg1;
- (void)setSeasonPickerView:(id)arg1;
- (void)setSeasons:(id)arg1;
- (void)viewDidLoad;

@end
