/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate> {
    NSIndexPath * _autohighlightIndexPath;
    NSArray * _detailViewConstraints;
    NSArray * _masterViewConstraints;
    bool  _relatedContentEmbedded;
    VideosExtrasViewElementViewController * _relatedContentViewController;
    NSMapTable * _relatedContentViewControllerMap;
    UITableView * _tableView;
    bool  _tableViewLeft;
    UIImageView * _vignetteView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VideosExtrasViewElementViewController *relatedContentViewController;
@property (readonly) Class superclass;

+ (id)relatedContentViewControllerForElement:(id)arg1;

- (void).cxx_destruct;
- (void)_addConstraintsToTableView:(id)arg1;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_configureVignette:(bool)arg1;
- (void)_embedRelatedContentViewController;
- (void)_prepareLayout;
- (void)_pushRelatedViewController:(id)arg1 animated:(bool)arg2;
- (void)_setDetailContraints;
- (void)_setNavigationConstraints;
- (void)_setRelatedContentEmbedded:(bool)arg1;
- (void)_unembedRelatedContent;
- (void)_updateForTemplate:(id)arg1;
- (void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)relatedContentViewController;
- (void)setRelatedContentViewController:(id)arg1;
- (bool)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (bool)showsPlaceholder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)templateElement;
- (void)viewDidLoad;

@end
