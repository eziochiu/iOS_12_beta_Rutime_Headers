/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleHostViewController : UIViewController <NULoadingDelegate, NUPageable> {
    FCArticle * _article;
    <NUArticleViewControllerFactory> * _articleViewControllerFactory;
    UIViewController * _contentTypeViewController;
    <NUErrorMessageFactory> * _errorMessageFactory;
    <NULoadingDelegate> * _loadingDelegate;
    UIView<NULoadingViewProviding> * _loadingView;
    NFMultiDelegate * _multiLoadingDelegate;
    NSString * _pageIdentifier;
    <NUSettings> * _settings;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) <NUArticleViewControllerFactory> *articleViewControllerFactory;
@property (nonatomic, retain) UIViewController *contentTypeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUErrorMessageFactory> *errorMessageFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, retain) UIView<NULoadingViewProviding> *loadingView;
@property (nonatomic, readonly) NFMultiDelegate *multiLoadingDelegate;
@property (nonatomic, readonly, copy) NSString *pageIdentifier;
@property (nonatomic, readonly, copy) <NUSettings> *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)article;
- (id)articleViewControllerFactory;
- (id)contentTypeViewController;
- (id)errorMessageFactory;
- (id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4;
- (void)loadArticleAndEmbedArticleViewController;
- (id)loadingDelegate;
- (void)loadingDidFinishWithError:(id)arg1;
- (void)loadingDidStart;
- (void)loadingDidUpdateProgress:(double)arg1;
- (id)loadingListeners;
- (id)loadingView;
- (void)loadingWillStart;
- (id)multiLoadingDelegate;
- (id)pageIdentifier;
- (void)setContentTypeViewController:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)settings;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
