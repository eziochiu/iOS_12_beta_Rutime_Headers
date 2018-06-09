/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory> {
    <SXAppStateMonitor> * _appStateMonitor;
    <NUArticleAdManagerFactory> * _articleAdManagerFactory;
    <NUArticleDataProviderFactory> * _articleDataProviderFactory;
    <NUDynamicTypeProviding> * _dynamicTypeProviding;
    <NUScrollViewKeyCommandHandler> * _keyCommandHandler;
    NSHashTable * _loadingListeners;
    <NFResolver> * _resolver;
}

@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <NUArticleAdManagerFactory> *articleAdManagerFactory;
@property (nonatomic, readonly) <NUArticleDataProviderFactory> *articleDataProviderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDynamicTypeProviding> *dynamicTypeProviding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUScrollViewKeyCommandHandler> *keyCommandHandler;
@property (nonatomic, readonly) NSHashTable *loadingListeners;
@property (nonatomic, readonly) <NFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appStateMonitor;
- (id)articleAdManagerFactory;
- (id)articleDataProviderFactory;
- (id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;
- (id)createArticleViewControllerWithArticle:(id)arg1;
- (id)createArticleWebViewControllerWithArticle:(id)arg1;
- (id)dynamicTypeProviding;
- (id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 dynamicTypeProviding:(id)arg3 appStateMonitor:(id)arg4 keyCommandHandler:(id)arg5 resolver:(id)arg6;
- (id)keyCommandHandler;
- (id)loadingListeners;
- (id)resolver;

@end
