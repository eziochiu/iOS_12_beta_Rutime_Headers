/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueItem : NSObject {
    unsigned long long  _fails;
    CSSearchableItem * _item;
    long long  _itemId;
}

@property (nonatomic, readonly) unsigned long long fails;
@property (nonatomic, readonly) bool highPriority;
@property (readonly) CSSearchableItem *item;
@property (nonatomic, readonly) long long itemId;

- (void).cxx_destruct;
- (unsigned long long)fails;
- (void)finish;
- (bool)highPriority;
- (id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3;
- (id)item;
- (long long)itemId;
- (void)markAsFailed;

@end
