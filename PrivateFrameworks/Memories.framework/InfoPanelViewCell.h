/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface InfoPanelViewCell : UICollectionViewCell {
    UIImageView * _checkmarkIcon;
    UILabel * _label;
}

@property (nonatomic, retain) UIImageView *checkmarkIcon;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)checkmarkIcon;
- (void)configureCell;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setCheckmarkIcon:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
