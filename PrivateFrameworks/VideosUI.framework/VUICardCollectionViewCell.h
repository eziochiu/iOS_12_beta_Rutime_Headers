/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICardCollectionViewCell : UICollectionViewCell {
    bool  _allowsFocus;
    VUICardView * _cardView;
    VUICardViewLayoutFactory * _layoutFactory;
    TVViewElement * _viewElement;
}

@property (nonatomic) bool allowsFocus;
@property (nonatomic, retain) VUICardView *cardView;
@property (nonatomic, retain) VUICardViewLayoutFactory *layoutFactory;
@property (nonatomic, retain) TVViewElement *viewElement;

+ (id)cardCellWithElement:(id)arg1 existingCell:(id)arg2;

- (void).cxx_destruct;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (id)cardView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutFactory;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAllowsFocus:(bool)arg1;
- (void)setCardView:(id)arg1;
- (void)setCardView:(id)arg1 force:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutFactory:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewElement;

@end
