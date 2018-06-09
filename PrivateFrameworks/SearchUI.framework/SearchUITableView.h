/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableView : UITableView {
    unsigned long long  _searchUIStyle;
}

@property (nonatomic) unsigned long long searchUIStyle;

- (bool)allowsHeaderViewsToFloat;
- (id)init;
- (void)safeAreaInsetsDidChange;
- (unsigned long long)searchUIStyle;
- (void)setSearchUIStyle:(unsigned long long)arg1;
- (void)updateSeparatorsForStyle;

@end
