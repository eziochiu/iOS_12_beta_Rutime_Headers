/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

@interface NSSArticleViewControllerInternal : UIViewController {
    NSSArticleInternal * _article;
    bool  _articleLoading;
    NSSArticleView * _articleView;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) NSSArticleInternal *article;
@property (nonatomic) bool articleLoading;
@property (nonatomic, retain) NSSArticleView *articleView;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_tickleArticleView;
- (void)_tickleSpinner;
- (id)article;
- (bool)articleLoading;
- (id)articleView;
- (id)initWithArticle:(id)arg1;
- (id)initWithNotification:(id)arg1;
- (id)initWithSpotlightIdentifier:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)presentArticle:(id)arg1 completion:(id /* block */)arg2;
- (void)setArticle:(id)arg1;
- (void)setArticleLoading:(bool)arg1;
- (void)setArticleView:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
