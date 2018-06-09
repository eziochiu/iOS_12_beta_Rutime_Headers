/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPaperStyleHeaderView : UICollectionReusableView {
    UILabel * _label;
    NSLayoutConstraint * _labelConstraintLeading;
    NSLayoutConstraint * _labelConstraintTrailing;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintLeading;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintTrailing;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) double titleInset;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelConstraintLeading;
- (id)labelConstraintTrailing;
- (void)setLabel:(id)arg1;
- (void)setLabelConstraintLeading:(id)arg1;
- (void)setLabelConstraintTrailing:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleInset:(double)arg1;
- (id)title;
- (double)titleInset;

@end
