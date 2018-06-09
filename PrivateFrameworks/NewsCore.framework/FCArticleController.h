/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleController : NSObject {
    <FCContentContext> * _context;
}

@property (nonatomic, retain) <FCContentContext> *context;

- (void).cxx_destruct;
- (id)articleWithHeadline:(id)arg1;
- (id)articleWithID:(id)arg1;
- (id)articleWithID:(id)arg1 forceArticleUpdate:(bool)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4;
- (id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 relativePriority:(long long)arg3;
- (id)context;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)setContext:(id)arg1;

@end