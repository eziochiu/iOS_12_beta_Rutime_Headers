/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSectionHeaderView : GKHeaderWithUnderlineView {
    bool  _allSectionItemsVisible;
    long long  _itemCount;
    int (* _itemCountFormatter;
    GKLabel * _leftLabel;
    bool  _manualItemCount;
    long long  _maxItemCount;
    long long  _maxRange;
    SEL  _rightAction;
    GKButton * _rightButton;
    id  _rightTarget;
    unsigned long long  _sectionIndex;
    SEL  _showAllAction;
}

@property (nonatomic) bool allSectionItemsVisible;
@property (nonatomic) long long itemCount;
@property (nonatomic) int (*itemCountFormatter;
@property (nonatomic, retain) GKLabel *leftLabel;
@property (nonatomic, retain) NSString *leftText;
@property (nonatomic) bool manualItemCount;
@property (nonatomic) long long maxItemCount;
@property (nonatomic) long long maxRange;
@property (nonatomic) SEL rightAction;
@property (nonatomic, retain) GKButton *rightButton;
@property (nonatomic) id rightTarget;
@property (nonatomic, retain) NSString *rightText;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) SEL showAllAction;

+ (id)padMetrics;
+ (id)phoneMetrics;

- (bool)allSectionItemsVisible;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)itemCount;
- (int (*)itemCountFormatter;
- (id)leftLabel;
- (id)leftText;
- (bool)manualItemCount;
- (long long)maxItemCount;
- (long long)maxRange;
- (void)prepareForReuse;
- (SEL)rightAction;
- (id)rightButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightButtonFrame;
- (void)rightButtonTouched:(id)arg1;
- (id)rightTarget;
- (id)rightText;
- (unsigned long long)sectionIndex;
- (void)setAllSectionItemsVisible:(bool)arg1;
- (void)setItemCount:(long long)arg1;
- (void)setItemCountFormatter:(int (*)arg1;
- (void)setLeftLabel:(id)arg1;
- (void)setLeftText:(id)arg1;
- (void)setManualItemCount:(bool)arg1;
- (void)setMaxItemCount:(long long)arg1;
- (void)setMaxRange:(long long)arg1;
- (void)setRightAction:(SEL)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightTarget:(id)arg1;
- (void)setRightText:(id)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setShowAllAction:(SEL)arg1;
- (SEL)showAllAction;
- (void)updateGutterConstraints;
- (void)updateLabel;

@end
