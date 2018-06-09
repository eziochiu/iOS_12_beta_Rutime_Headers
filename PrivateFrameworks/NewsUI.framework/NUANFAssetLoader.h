/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFAssetLoader : NSObject {
    FCAsyncOnceOperation * _asyncOnceOperation;
    SXContext * _context;
    NSMutableDictionary * _fetchedResourceIDs;
    FCFlintResourceManager * _flintResourceManager;
    long long  _relativePriority;
    NSArray * _resourceIDs;
}

@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, retain) SXContext *context;
@property (nonatomic, retain) NSMutableDictionary *fetchedResourceIDs;
@property (nonatomic, retain) FCFlintResourceManager *flintResourceManager;
@property (nonatomic) long long relativePriority;
@property (nonatomic, retain) NSArray *resourceIDs;

- (void).cxx_destruct;
- (id)asyncLoadAssertURLsOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)context;
- (id)fetchedResourceIDs;
- (id)flintResourceManager;
- (id)initWithContext:(id)arg1 flintResourceManager:(id)arg2;
- (id)loadAssetURLsWithCompletion:(id /* block */)arg1;
- (long long)relativePriority;
- (id)resourceForID:(id)arg1;
- (id)resourceIDForResourceURL:(id)arg1;
- (id)resourceIDs;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFetchedResourceIDs:(id)arg1;
- (void)setFlintResourceManager:(id)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setResourceIDs:(id)arg1;

@end
