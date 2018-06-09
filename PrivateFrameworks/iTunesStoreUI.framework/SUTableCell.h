/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableCell : UITableViewCell {
    UIColor * _bottomBorderColor;
    SUTableCellContentView * _configurationView;
    long long  _editState;
    unsigned int  _hideHighlight;
    SUItemOfferButton * _itemOfferButton;
    struct { 
        unsigned long long localIndex; 
        unsigned long long localCount; 
        unsigned long long globalIndex; 
        unsigned long long globalCount; 
    }  _position;
    UIColor * _topBorderColor;
}

@property (nonatomic, retain) UIColor *bottomBorderColor;
@property (nonatomic) int clipCorners;
@property (nonatomic, readonly) UIBezierPath *clippingPath;
@property (nonatomic, retain) SUCellConfiguration *configuration;
@property (nonatomic) bool drawAsDisabled;
@property (nonatomic) long long editState;
@property (nonatomic) bool highlightsOnlyContentView;
@property (nonatomic, readonly, retain) SUItemOfferButton *itemOfferButton;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } position;
@property (nonatomic) bool showHighlight;
@property (nonatomic, retain) UIColor *topBorderColor;
@property (nonatomic) bool usesSubviews;

- (bool)_canDrawContent;
- (id)bottomBorderColor;
- (int)clipCorners;
- (id)clippingPath;
- (id)configuration;
- (id)copyPurchaseAnimationView;
- (void)dealloc;
- (bool)drawAsDisabled;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)editState;
- (bool)highlightsOnlyContentView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemOfferButton;
- (void)layoutSubviews;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })position;
- (void)setBottomBorderColor:(id)arg1;
- (void)setClipCorners:(int)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDrawAsDisabled:(bool)arg1;
- (void)setEditState:(long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightsOnlyContentView:(bool)arg1;
- (void)setPosition:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShowHighlight:(bool)arg1;
- (void)setShowingDeleteConfirmation:(bool)arg1;
- (void)setTopBorderColor:(id)arg1;
- (void)setUsesSubviews:(bool)arg1;
- (bool)showHighlight;
- (id)topBorderColor;
- (bool)usesSubviews;

@end
