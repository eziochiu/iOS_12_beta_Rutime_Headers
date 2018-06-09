/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell {
    NSLayoutConstraint * _nameConstraint;
    double  _nameInitialConstant;
    bool  _selectable;
    UIButton * _selectionButton;
    NSLayoutConstraint * _selectionHorizontalConstraint;
    double  _selectionInitialHorizontalConstant;
    double  _selectionInitialVerticalConstant;
    NSLayoutConstraint * _selectionVerticalConstraint;
    UIImageView * _selectionView;
    NSLayoutConstraint * _statusHeightConstraint;
    double  _statusInitialConstant;
}

@property (nonatomic) NSLayoutConstraint *nameConstraint;
@property (nonatomic) double nameInitialConstant;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (nonatomic) UIButton *selectionButton;
@property (nonatomic) NSLayoutConstraint *selectionHorizontalConstraint;
@property (nonatomic) double selectionInitialHorizontalConstant;
@property (nonatomic) double selectionInitialVerticalConstant;
@property (nonatomic) NSLayoutConstraint *selectionVerticalConstraint;
@property (nonatomic) UIImageView *selectionView;
@property (nonatomic) NSLayoutConstraint *statusHeightConstraint;
@property (nonatomic) double statusInitialConstant;

- (void)awakeFromNib;
- (bool)isSelectable;
- (id)nameConstraint;
- (double)nameInitialConstant;
- (id)selectionButton;
- (id)selectionHorizontalConstraint;
- (double)selectionInitialHorizontalConstant;
- (double)selectionInitialVerticalConstant;
- (id)selectionVerticalConstraint;
- (id)selectionView;
- (void)setNameConstraint:(id)arg1;
- (void)setNameInitialConstant:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionButton:(id)arg1;
- (void)setSelectionHorizontalConstraint:(id)arg1;
- (void)setSelectionInitialHorizontalConstant:(double)arg1;
- (void)setSelectionInitialVerticalConstant:(double)arg1;
- (void)setSelectionVerticalConstraint:(id)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setStatusHeightConstraint:(id)arg1;
- (void)setStatusInitialConstant:(double)arg1;
- (void)setStatusWithAchievementEarnedPoints:(long long)arg1 andDate:(id)arg2;
- (id)statusHeightConstraint;
- (double)statusInitialConstant;

@end
