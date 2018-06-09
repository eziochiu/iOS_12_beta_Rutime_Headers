/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    UIButton * _checkMarkButton;
    <PXDisplayCollection> * _collection;
    bool  _isPerformingUpdate;
    bool  _showingSelectionMark;
    UIImage * _thumbail;
    unsigned long long  _type;
}

@property (nonatomic) UIButton *checkMarkButton;
@property (nonatomic, readonly) <PXDisplayCollection> *collection;
@property (nonatomic, readonly) UIImage *thumbail;
@property (nonatomic, readonly) unsigned long long type;

+ (id)backgroundGrayColor;

- (void).cxx_destruct;
- (void)_configureCell;
- (id)checkMarkButton;
- (id)collection;
- (void)didAddSubview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSelectable;
- (void)layoutSubviews;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setCheckMarkButton:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)thumbail;
- (unsigned long long)type;

@end
