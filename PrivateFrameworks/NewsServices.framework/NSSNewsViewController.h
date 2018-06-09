/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
 */

@interface NSSNewsViewController : UIViewController {
    NSArray * _articleIDs;
    bool  _linkPreviewing;
    _UIResilientRemoteViewContainerViewController * _remoteViewContainerViewController;
}

@property (nonatomic, copy) NSArray *articleIDs;
@property (getter=isLinkPreviewing, nonatomic) bool linkPreviewing;
@property (nonatomic, retain) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController;

+ (bool)canOpenURL:(id)arg1;

- (void).cxx_destruct;
- (id)articleIDs;
- (void)dealloc;
- (id)initWithArticleID:(id)arg1;
- (id)initWithArticleIDs:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isLinkPreviewing;
- (id)remoteViewContainerViewController;
- (void)requestRemoteViewController;
- (void)setArticleIDs:(id)arg1;
- (void)setLinkPreviewing:(bool)arg1;
- (void)setRemoteViewContainerViewController:(id)arg1;
- (void)setupRemoteViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
