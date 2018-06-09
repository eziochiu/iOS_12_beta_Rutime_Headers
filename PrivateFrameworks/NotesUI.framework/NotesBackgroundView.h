/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface NotesBackgroundView : UIView <ICAccessibilityChildReparentingTarget, NotesTextureScrolling> {
    NSLayoutConstraint * _bottomBarConstraint;
    NotesTextureBackgroundView * _bottomTextureView;
    UIView * _contentView;
    bool  _contentViewVisible;
    <ICAccessibilityChildReparentingProvider> * _elementForAccessibilityReparenting;
    NSLayoutConstraint * _heightConstraint;
    NotesTextureBackgroundView * _textureView;
    NotesTextureBackgroundView * _topTextureView;
    bool  _topViewVisible;
}

@property (nonatomic, readonly) NotesTextureView *backgroundView;
@property (nonatomic, retain) NSLayoutConstraint *bottomBarConstraint;
@property (nonatomic, retain) NotesTextureBackgroundView *bottomTextureView;
@property (nonatomic, retain) UIView *contentView;
@property (getter=isContentViewVisible, nonatomic) bool contentViewVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <ICAccessibilityChildReparentingProvider> *elementForAccessibilityReparenting;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NotesTextureBackgroundView *textureView;
@property (nonatomic, retain) NotesTextureBackgroundView *topTextureView;
@property (getter=isTopViewVisible, nonatomic) bool topViewVisible;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)addSubviewAboveAllViews:(id)arg1;
- (id)backgroundView;
- (id)bottomBarConstraint;
- (id)bottomTextureView;
- (void)commonInit;
- (id)contentView;
- (id)elementForAccessibilityReparenting;
- (void)fadeInBottomToolbar:(id)arg1 duration:(double)arg2;
- (void)fadeOutBottomToolbar:(id)arg1 duration:(double)arg2;
- (id)heightConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContentViewVisible;
- (bool)isTopViewVisible;
- (void)reparentAccessibilityChildrenOfElement:(id)arg1;
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)scrollViewDescendantOfView:(id)arg1;
- (void)setAlphaForTopAndBottomBars:(double)arg1 animated:(bool)arg2;
- (void)setBottomBarConstraint:(id)arg1;
- (void)setBottomTextureView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(bool)arg2;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(bool)arg2 topMargin:(double)arg3;
- (void)setContentViewVisible:(bool)arg1;
- (void)setElementForAccessibilityReparenting:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setTextureView:(id)arg1;
- (void)setTopTextureView:(id)arg1;
- (void)setTopViewVisible:(bool)arg1;
- (void)snapshotContentIntoSnapshotView:(id)arg1;
- (id)textureView;
- (id)topTextureView;
- (void)updateConstraintsForBottomToolbar:(id)arg1;

@end
