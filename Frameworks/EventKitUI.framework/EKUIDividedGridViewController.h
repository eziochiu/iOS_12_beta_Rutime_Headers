/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIDividedGridViewController : UIViewController {
    NSArray * _allCells;
    NSArray * _buttonTitles;
    UIColor * _cellBackgroundColor;
    <EKUIDividedGridViewControllerDelegate> * _delegate;
    double  _preferredWidth;
    long long  _type;
    NSArray * _weekViews;
}

@property (retain) NSArray *allCells;
@property (nonatomic, retain) NSArray *buttonTitles;
@property <EKUIDividedGridViewControllerDelegate> *delegate;
@property (nonatomic) double preferredWidth;
@property (retain) NSArray *weekViews;

+ (id)dividerColor;

- (void).cxx_destruct;
- (double)_defaultButtonWidthForButtonAtIndex:(long long)arg1;
- (double)_neededHeight;
- (id)_newDividerView;
- (double)_rowHeightForWidth:(double)arg1;
- (id)allCells;
- (id)buttonTitles;
- (void)cellTapped:(id)arg1;
- (id)delegate;
- (id)initWithType:(long long)arg1 buttonTitles:(id)arg2 cellBackgroundColor:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)loadView;
- (double)preferredWidth;
- (void)setAllCells:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setWeekViews:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)weekViews;

@end