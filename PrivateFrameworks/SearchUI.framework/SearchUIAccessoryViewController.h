/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAccessoryViewController : NSObject {
    SearchUITableViewCell * _cell;
    SFSearchResult * _resultForFeedback;
    UIView * _view;
}

@property SearchUITableViewCell *cell;
@property (retain) SFSearchResult *resultForFeedback;
@property (retain) UIView *view;

+ (Class)accessoryViewClassForResult:(id)arg1;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)cell;
- (id)controlInView:(id)arg1;
- (void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2 actionPerformed:(bool)arg3;
- (id)initWithUIStyle:(unsigned long long)arg1 cell:(id)arg2;
- (bool)isPrimarilyTextView;
- (id)resultForFeedback;
- (void)setCell:(id)arg1;
- (void)setResultForFeedback:(id)arg1;
- (void)setView:(id)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (bool)shouldVerticallyCenter;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResult:(id)arg1 resultForFeedback:(id)arg2;
- (id)view;
- (id)viewControllerForPresenting;

@end
