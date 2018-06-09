/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _SearchBarContent : UIStackView <UISearchBarDelegate> {
    HKBarButtonItemControl * _doneBarButton;
    HKBarButtonItemControl * _downBarButton;
    HKIncrementalSearchBar * _searchBar;
    <HKIncrementalSearchBarDelegate> * _searchBarDelegate;
    _SearchEntryWithMatchDisplay * _searchEntry;
    HKBarButtonItemControl * _upBarButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKBarButtonItemControl *doneBarButton;
@property (nonatomic, readonly) HKBarButtonItemControl *downBarButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKIncrementalSearchBar *searchBar;
@property (nonatomic) <HKIncrementalSearchBarDelegate> *searchBarDelegate;
@property (nonatomic, readonly) _SearchEntryWithMatchDisplay *searchEntry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKBarButtonItemControl *upBarButton;

- (void).cxx_destruct;
- (void)buildSearchBarContent;
- (id)doneBarButton;
- (void)downAction:(id)arg1;
- (id)downBarButton;
- (id)initWithSearchBar:(id)arg1;
- (id)inputField;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBarDelegate;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)searchEntry;
- (void)setSearchBarDelegate:(id)arg1;
- (void)upAction:(id)arg1;
- (id)upBarButton;

@end