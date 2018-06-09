/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol> {
    <SearchUIFeedbackDelegateInternal> * _delegate;
    SearchUIDragSource * _dragSource;
    SearchUIDropTarget * _dropTarget;
    bool  _isExpanded;
    <SearchUIRowModel> * _rowModel;
    UIViewController<SearchUIResultShortLook> * _shortLookViewController;
    UIView * _sizingContainer;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property <SearchUIFeedbackDelegateInternal> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) SearchUIDragSource *dragSource;
@property (retain) SearchUIDropTarget *dropTarget;
@property (readonly) unsigned long long hash;
@property bool isExpanded;
@property (retain) <SearchUIRowModel> *rowModel;
@property UIViewController<SearchUIResultShortLook> *shortLookViewController;
@property (retain) UIView *sizingContainer;
@property unsigned long long style;
@property (readonly) Class superclass;
@property (readonly) NSArray *visibleResults;

+ (bool)canCellExpandWithResults:(id)arg1;
+ (id)cellViewForRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
+ (id)convertResultIfNecessary:(id)arg1;
+ (double)distanceToTopOfAppIconsForMultiResultCell;
+ (id)reuseIdentifierForResult:(id)arg1;

- (void).cxx_destruct;
- (bool)canSetupKeyboardHandler;
- (id)delegate;
- (id)dragSource;
- (id)dropTarget;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)initWithStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isExpandable;
- (bool)isExpanded;
- (void)layoutSubviews;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (void)removeKeyboardHandler;
- (void)returnKeyPressed;
- (void)roundNecessaryCornersForView:(id)arg1;
- (id)rowModel;
- (void)setDelegate:(id)arg1;
- (void)setDragSource:(id)arg1;
- (void)setDropTarget:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setRowModel:(id)arg1;
- (void)setSectionLocation:(int)arg1 animated:(bool)arg2;
- (void)setShortLookViewController:(id)arg1;
- (void)setSizingContainer:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setupKeyboardHandler;
- (id)shortLookViewController;
- (bool)shouldHideBottomSeparator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sizingContainer;
- (unsigned long long)style;
- (bool)supportsRecycling;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateExpanded:(bool)arg1;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResults:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)visibleResults;

@end
