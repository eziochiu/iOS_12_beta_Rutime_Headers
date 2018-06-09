/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUBundledArticleDataProvider : NSObject <NUArticleDataProvider, SXEmbedDataProvider, SXResourceDataSource> {
    FCArticle * _article;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)article;
- (id)articleID;
- (id)embedForType:(id)arg1;
- (id)fileURLForBundleURL:(id)arg1;
- (void)fileURLForURL:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)initWithArticle:(id)arg1;
- (void)load;
- (void)loadContextWithCompletionBlock:(id /* block */)arg1;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performBlockForFontsInBundle:(id /* block */)arg1;

@end
