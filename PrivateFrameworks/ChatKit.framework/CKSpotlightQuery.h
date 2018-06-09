/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate> {
    bool  _cancelled;
    NSMutableDictionary * _chatGUIDToLatestSearchResult;
    IMChatRegistry * _chatRegisteryOverride;
    id /* block */  _completion;
    MDSearchQuery * _currentQuery;
    unsigned long long  _resultIndex;
    NSObject<OS_dispatch_group> * _searchResultLoadingGroup;
    NSArray * _searchResults;
}

@property (nonatomic, retain) IMChatRegistry *chatRegisteryOverride;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) MDSearchQuery *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletion;
- (void)_cleanup;
- (void)_processSearchResults;
- (void)cancel;
- (id)chatRegisteryOverride;
- (id)chatRegistry;
- (id /* block */)completion;
- (id)currentQuery;
- (void)dealloc;
- (id)initWithSearchText:(id)arg1 chatRegistryOverride:(id)arg2 startQuery:(bool)arg3 completionBlock:(id /* block */)arg4;
- (id)initWithSearchText:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithSearchText:(id)arg1 completionBlock:(id /* block */)arg2 startQuery:(bool)arg3;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)setChatRegisteryOverride:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
