/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSuggestionsProxy : NSObject {
    NSMutableDictionary * _callbackBlocks;
    NSMutableSet * _chatBlacklist;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<SGSuggestionsServiceMessagesProtocol> * _suggestionsService;
}

@property (nonatomic, retain) NSObject<SGSuggestionsServiceMessagesProtocol> *suggestionsService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_filteredRealtimeEvents:(id)arg1;
- (void)bannerViewForSearchables:(id)arg1 guid:(id)arg2 andCompletion:(id /* block */)arg3;
- (id)init;
- (void)purgeCache:(id)arg1;
- (void)setSuggestionsService:(id)arg1;
- (id)suggestionsService;

@end
