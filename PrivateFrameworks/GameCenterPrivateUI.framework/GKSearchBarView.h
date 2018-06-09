/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate> {
    <UISearchBarDelegate> * _delegate;
    double  _leadingMargin;
    GKSearchBar * _searchBar;
    NSArray * _searchBarConstraints;
    double  _trailingMargin;
    NSNumber * _usePadConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leadingMargin;
@property (nonatomic, retain) GKSearchBar *searchBar;
@property (nonatomic, retain) NSArray *searchBarConstraints;
@property (readonly) Class superclass;
@property (nonatomic) double trailingMargin;
@property (nonatomic, retain) NSNumber *usePadConstraints;

+ (double)defaultHeight;
+ (void)initialize;
+ (bool)requiresConstraintBasedLayout;

- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)establishSearchBarConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)leadingMargin;
- (void)prepareForReuse;
- (id)searchBar;
- (id)searchBarConstraints;
- (void)setDelegate:(id)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchBarConstraints:(id)arg1;
- (void)setTrailingMargin:(double)arg1;
- (void)setUsePadConstraints:(id)arg1;
- (double)trailingMargin;
- (void)updateConstraints;
- (id)usePadConstraints;

@end
