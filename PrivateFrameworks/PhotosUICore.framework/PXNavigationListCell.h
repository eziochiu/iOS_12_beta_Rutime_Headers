/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListCell : UITableViewCell {
    bool  _enabled;
    <PXNavigationListItem> * _listItem;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) <PXNavigationListItem> *listItem;

- (void).cxx_destruct;
- (void)_updateCellStyle;
- (bool)enabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)listItem;
- (void)prepareForReuse;
- (void)setEnabled:(bool)arg1;
- (void)setListItem:(id)arg1;

@end
