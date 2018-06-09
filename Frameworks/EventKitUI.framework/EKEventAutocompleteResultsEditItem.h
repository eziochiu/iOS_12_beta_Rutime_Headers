/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem {
    NSArray * _results;
    bool  _suggestionApplied;
}

@property (nonatomic) <EKEventAutocompleteResultsEditItemDelegate> *delegate;
@property (nonatomic, readonly) bool hasSuggestedLocationResult;
@property (nonatomic, retain) NSArray *results;

+ (id)_backgroundColor;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (bool)hasSuggestedLocationResult;
- (unsigned long long)numberOfSubitems;
- (id)results;
- (void)setResults:(id)arg1;
- (bool)shouldAppearWithVisibility:(int)arg1;

@end
