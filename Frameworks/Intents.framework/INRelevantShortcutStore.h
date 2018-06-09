/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRelevantShortcutStore : NSObject {
    CSSearchableIndex * _index;
}

@property (nonatomic, readonly) CSSearchableIndex *index;

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)index;
- (id)initWithSearchableIndex:(id)arg1;
- (void)setRelevantShortcuts:(id)arg1 completionHandler:(id /* block */)arg2;

@end
