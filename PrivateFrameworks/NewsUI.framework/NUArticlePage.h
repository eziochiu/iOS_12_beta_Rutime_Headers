/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticlePage : NSObject <NUPage> {
    <NUActivityProvider> * _activityProvider;
    FCArticle * _article;
    <NUArticleActivityFactory> * _articleActivityFactory;
    <NUArticleHostViewControllerFactory> * _articleHostViewControllerFactory;
    UIViewController<NUPageable> * _articleViewController;
    <FCOperationCanceling> * _asyncOnceCancelHandler;
    FCAsyncOnceOperation * _asyncOnceOperation;
    unsigned long long  _pageNextAction;
    NUPageStyle * _pageStyle;
}

@property (nonatomic, retain) <NUActivityProvider> *activityProvider;
@property (nonatomic, readonly) bool allowNeighboringAdvertising;
@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) <NUArticleActivityFactory> *articleActivityFactory;
@property (nonatomic, readonly) <NUArticleHostViewControllerFactory> *articleHostViewControllerFactory;
@property (nonatomic, retain) UIViewController<NUPageable> *articleViewController;
@property (nonatomic, retain) <FCOperationCanceling> *asyncOnceCancelHandler;
@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) unsigned long long pageNextAction;
@property (nonatomic, retain) NUPageStyle *pageStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityProvider;
- (void)activityProvider:(id /* block */)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (bool)allowNeighboringAdvertising;
- (id)article;
- (id)articleActivityFactory;
- (id)articleHostViewControllerFactory;
- (id)articleViewController;
- (id)asyncOnceCancelHandler;
- (id)asyncOnceLoadPageStyle:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)identifier;
- (id)initWithArticle:(id)arg1 articleHostViewControllerFactory:(id)arg2 articleActivityFactory:(id)arg3 pageNextAction:(unsigned long long)arg4;
- (unsigned long long)pageNextAction;
- (id)pageStyle;
- (void)pageStyling:(id /* block */)arg1;
- (void)prepare;
- (void)setActivityProvider:(id)arg1;
- (void)setArticleViewController:(id)arg1;
- (void)setAsyncOnceCancelHandler:(id)arg1;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setPageNextAction:(unsigned long long)arg1;
- (void)setPageStyle:(id)arg1;
- (void)unprepare;
- (id)viewController;

@end