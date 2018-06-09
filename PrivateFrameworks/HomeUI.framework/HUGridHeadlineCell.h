/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridHeadlineCell : UICollectionViewCell <HUGridCellProtocol> {
    bool  _cellContentsHidden;
    bool  _editing;
    UIView * _editingBackgroundContainerView;
    UIView * _editingBackgroundDarkeningView;
    HUGridCellBackgroundView * _editingBackgroundView;
    UIImageView * _editingChevronImageView;
    NSArray * _headlineCellConstraints;
    UILabel * _headlineLabel;
    HFItem * _item;
    HUGridHeadlineCellLayoutOptions * _layoutOptions;
}

@property (getter=areCellContentsHidden, nonatomic) bool cellContentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, retain) UIView *editingBackgroundContainerView;
@property (nonatomic, retain) UIView *editingBackgroundDarkeningView;
@property (nonatomic, retain) HUGridCellBackgroundView *editingBackgroundView;
@property (nonatomic, retain) UIImageView *editingChevronImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *headlineCellConstraints;
@property (nonatomic, retain) UILabel *headlineLabel;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridHeadlineCellLayoutOptions *layoutOptions;
@property (getter=isRearranging, nonatomic) bool rearranging;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unpaddedContentFrame;

+ (Class)layoutOptionsClass;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupCommonCellAppearance;
- (void)_updateHeadlineLabel;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)areCellContentsHidden;
- (id)editingBackgroundContainerView;
- (id)editingBackgroundDarkeningView;
- (id)editingBackgroundView;
- (id)editingChevronImageView;
- (id)headlineCellConstraints;
- (id)headlineLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (id)item;
- (id)layoutOptions;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditingBackgroundContainerView:(id)arg1;
- (void)setEditingBackgroundDarkeningView:(id)arg1;
- (void)setEditingBackgroundView:(id)arg1;
- (void)setEditingChevronImageView:(id)arg1;
- (void)setHeadlineCellConstraints:(id)arg1;
- (void)setHeadlineLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unpaddedContentFrame;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
