/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportAddToAlbumsToolbarViewController : UIViewController <PUImportAlbumPickerDelegate> {
    PHCollection * _collection;
    NSString * _destinationCollectionTitle;
    UILabel * _destinationLabel;
    UILabel * _titleLabel;
    UILabel * _trailingArrowLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *destinationCollectionTitle;
@property (nonatomic) UILabel *destinationLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *trailingArrowLabel;

- (void).cxx_destruct;
- (id)collection;
- (void)collectionSelected:(id)arg1;
- (void)dealloc;
- (id)destinationCollectionTitle;
- (id)destinationLabel;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setDestinationCollectionTitle:(id)arg1;
- (void)setDestinationLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingArrowLabel:(id)arg1;
- (id)titleLabel;
- (id)trailingArrowLabel;
- (void)viewDidLoad;

@end
