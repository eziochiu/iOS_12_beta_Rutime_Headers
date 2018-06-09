/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUPagingEngine : NSObject <NUPagingFactory> {
    NUArticlePageFactory * _articlePageFactory;
    NUWelcomeToNewsPageFactory * _welcomeToNewsPageFactory;
}

@property (nonatomic, readonly) NUArticlePageFactory *articlePageFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NUWelcomeToNewsPageFactory *welcomeToNewsPageFactory;

- (void).cxx_destruct;
- (id)articlePageFactory;
- (id)createPagingForArticleIDs:(id)arg1;
- (id)initWithArticlePageFactory:(id)arg1 welcomeToNewsPageFactory:(id)arg2;
- (id)paging:(id)arg1 byAddingPage:(id)arg2 afterPage:(id)arg3;
- (id)paging:(id)arg1 byRemovingPage:(id)arg2;
- (id)welcomeToNewsPageFactory;

@end
