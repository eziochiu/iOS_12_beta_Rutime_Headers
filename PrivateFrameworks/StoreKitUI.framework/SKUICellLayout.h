/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICellLayout : NSObject {
    UIView * _cell;
    SKUIClientContext * _clientContext;
    UIView * _contentView;
    bool  _parentWantsCellNeedsLayout;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *parentCellView;

- (void).cxx_destruct;
- (id)clientContext;
- (id)contentView;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutSubviews;
- (id)parentCellView;
- (void)prepareForReuse;
- (void)resetLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNeedsLayout;
- (void)setSelected:(bool)arg1;

@end
