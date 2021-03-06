/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSearchableTableHeaderView : PKTableHeaderView {
    UITextField * _searchField;
    UILabel * _searchFieldLabel;
    bool  _showsSearchField;
}

@property (nonatomic, readonly) UITextField *searchField;
@property (nonatomic, readonly) UILabel *searchFieldLabel;
@property (nonatomic, readonly) double searchFieldOffset;
@property (nonatomic) bool showsSearchField;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)searchField;
- (id)searchFieldLabel;
- (double)searchFieldOffset;
- (void)setShowsSearchField:(bool)arg1;
- (bool)showsSearchField;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
