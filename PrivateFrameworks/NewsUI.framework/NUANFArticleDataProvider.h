/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider> {
    FCArticle * _article;
    NSString * _articleID;
    NUANFAssetLoader * _assetLoader;
    <FCContentContext> * _contentContext;
    NUANFContextLoader * _contextLoader;
    <NUEmbedDataManager> * _embedDataManger;
    NUANFFontLoader * _fontLoader;
    <NUFontRegistration> * _fontRegistration;
    <SXHost> * _host;
}

@property (nonatomic, retain) FCArticle *article;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, retain) NUANFAssetLoader *assetLoader;
@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (nonatomic, retain) NUANFContextLoader *contextLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <NUEmbedDataManager> *embedDataManger;
@property (nonatomic, retain) NUANFFontLoader *fontLoader;
@property (nonatomic, readonly) <NUFontRegistration> *fontRegistration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)article;
- (id)articleID;
- (id)assetLoader;
- (id)contentContext;
- (id)contextLoader;
- (void)dealloc;
- (id)embedDataManger;
- (id)fontLoader;
- (id)fontRegistration;
- (id)host;
- (id)initWithArticle:(id)arg1 contentContext:(id)arg2 fontRegistration:(id)arg3 host:(id)arg4 embedDataManager:(id)arg5;
- (void)loadArticleWithCompletionBlock:(id /* block */)arg1;
- (void)loadContextWithCompletionBlock:(id /* block */)arg1;
- (void)reloadArticleIfNeeded;
- (void)setArticle:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setAssetLoader:(id)arg1;
- (void)setContextLoader:(id)arg1;
- (void)setEmbedDataManger:(id)arg1;
- (void)setFontLoader:(id)arg1;

@end
