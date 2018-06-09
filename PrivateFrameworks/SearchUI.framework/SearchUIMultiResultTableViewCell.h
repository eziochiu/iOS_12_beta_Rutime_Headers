/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {
    SearchUIAppIconsRowView * _bottomRow;
    TLKAuxilliaryTextView * _folderLabelView;
    long long  _indexOfSelectedKeyboardIcon;
    NSArray * _results;
    SearchUIAppIconsRowView * _topRow;
}

@property (nonatomic, retain) SearchUIAppIconsRowView *bottomRow;
@property (nonatomic, retain) TLKAuxilliaryTextView *folderLabelView;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) SearchUIAppIconsRowView *topRow;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (void)removeDropShadowIconStateForView:(id)arg1;

- (void).cxx_destruct;
- (double)appRowSpacing;
- (id)bottomRow;
- (bool)canSetupKeyboardHandler;
- (id)folderLabelView;
- (long long)indexOfSelectedKeyboardIcon;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (bool)isExpandable;
- (void)layoutSubviews;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (unsigned long long)numberOfVisibleResults;
- (void)removeKeyboardHandler;
- (id)results;
- (void)returnKeyPressed;
- (void)setBottomRow:(id)arg1;
- (void)setFeedbackDelegateForRowView:(id)arg1;
- (void)setFolderLabelView:(id)arg1;
- (void)setIndexOfSelectedKeyboardIcon:(long long)arg1;
- (void)setResults:(id)arg1;
- (void)setTopRow:(id)arg1;
- (void)setupKeyboardHandler;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topAndBottomPadding;
- (id)topRow;
- (void)updateExpanded:(bool)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)visibleResults;

@end
