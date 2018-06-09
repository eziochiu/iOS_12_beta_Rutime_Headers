/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLargePlainTextViewController : HKViewController <HKIncrementalSearchBarDelegate> {
    double  _currentKeyboardHeight;
    NSMutableArray * _currentRanges;
    _IncrementalSearchOperation * _currentSearch;
    long long  _currentSearchItem;
    UIColor * _currentSelectionBackground;
    NSData * _data;
    NSString * _dataAsString;
    HKIncrementalSearchBar * _incrementalSearchBar;
    UIColor * _normalTextViewBackground;
    UIColor * _otherSelectionBackground;
    NSOperationQueue * _searchQueue;
    UIColor * _selectedTextViewBackground;
    UITextView * _textView;
}

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic, retain) NSMutableArray *currentRanges;
@property (retain) _IncrementalSearchOperation *currentSearch;
@property long long currentSearchItem;
@property (nonatomic, readonly) UIColor *currentSelectionBackground;
@property (readonly) NSData *data;
@property (nonatomic, readonly) NSString *dataAsString;
@property (nonatomic, readonly) HKIncrementalSearchBar *incrementalSearchBar;
@property (nonatomic, readonly) UIColor *normalTextViewBackground;
@property (nonatomic, readonly) UIColor *otherSelectionBackground;
@property (nonatomic, readonly) NSOperationQueue *searchQueue;
@property (nonatomic, readonly) UIColor *selectedTextViewBackground;
@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (id)_selectionAttributes:(bool)arg1;
- (id)_standardPlainTextFont;
- (void)_updateCurrentSearchItem:(unsigned long long)arg1 hitsChanged:(bool)arg2 resetSearch:(bool)arg3;
- (bool)_updateMatchDisplayString:(unsigned long long)arg1 numMatches:(unsigned long long)arg2;
- (void)addSearchResults:(struct IncrementalSearchResultsDefn { unsigned long long x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2[64]; })arg1;
- (void)cancelCurrentSearch;
- (double)currentKeyboardHeight;
- (id)currentRanges;
- (id)currentSearch;
- (long long)currentSearchItem;
- (id)currentSelectionBackground;
- (id)data;
- (id)dataAsString;
- (void)endSearchResults;
- (void)finishSearchResults;
- (id)incrementalSearchBar;
- (void)incrementalSearchOperation:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)loadView;
- (id)normalTextViewBackground;
- (id)otherSelectionBackground;
- (void)resetCurrentSearchItem;
- (void)resetSearchResults;
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;
- (void)searchBarDoneAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarUpAction:(id)arg1;
- (id)searchBodyWithAttributes;
- (id)searchQueue;
- (id)selectedTextViewBackground;
- (void)setCurrentKeyboardHeight:(double)arg1;
- (void)setCurrentRanges:(id)arg1;
- (void)setCurrentSearch:(id)arg1;
- (void)setCurrentSearchItem:(long long)arg1;
- (void)startIncrementalSearch;
- (unsigned long long)supportedInterfaceOrientations;
- (id)textView;
- (void)viewWillDisappear:(bool)arg1;

@end
