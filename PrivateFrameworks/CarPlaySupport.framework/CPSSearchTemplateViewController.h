/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSSearchTemplateViewController : UISearchContainerViewController <CPListTemplateDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    NSArray * _searchResults;
    CPTemplate * _template;
    <CPTemplateDelegate> * _templateDelegate;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *searchResults;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPTemplate *template;
@property (nonatomic, readonly) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (id)initWithSearchController:(id)arg1 searchTemplate:(id)arg2 templateDelegate:(id)arg3;
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)searchResults;
- (void)setSearchResults:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (id)template;
- (id)templateDelegate;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)viewControllerDelegate;
- (void)viewDidLoad;

@end
