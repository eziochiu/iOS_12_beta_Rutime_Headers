/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDMessageCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableArray * _indexLRU;
    NSObject<OS_dispatch_source> * _memoryWarningSource;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_pruneIgnoringFirst:(bool)arg1;
- (id)init;
- (void)removeConversation:(id)arg1;
- (id)stringWithElement:(id)arg1 conversationID:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;

@end
