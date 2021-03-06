/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUISportsCollectionViewCell : UICollectionViewCell {
    WLKUISportsCellView * _sportsCellView;
}

@property (nonatomic, retain) WLKUISportsCellView *sportsCellView;

+ (void)registerElements;
+ (id)sportsCardCellFromElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutWithElement:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setSportsCellView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sportsCellView;

@end
