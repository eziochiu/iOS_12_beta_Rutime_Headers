/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfoOrderedSet : NSObject {
    id /* block */  _comparator;
    NSMutableDictionary * _duplicateMessageInfos;
    id /* block */  _duplicatePreferenceComparator;
    MFSparseMutable64IndexSet * _knownMessageIDs;
    NSMutableArray * _mutableMessageInfos;
}

@property (nonatomic, readonly) NSArray *allMessageInfos;
@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long countWithDuplicates;
@property (nonatomic, copy) id /* block */ duplicatePreferenceComparator;
@property (nonatomic, readonly) MFMessageInfo *firstMessage;
@property (nonatomic, readonly) MFMessageInfo *lastMessage;
@property (nonatomic, readonly) NSArray *uniqueMessageInfos;

- (void)_addMessageInfoToDuplicates:(id)arg1;
- (id)_duplicateMessageInfosForMessageInfo:(id)arg1;
- (void)_invalidate;
- (void)_removeDuplicatesForMessageInfo:(id)arg1;
- (unsigned long long)_scanForMessageInfoSimilarTo:(id)arg1;
- (unsigned long long)addMessageInfo:(id)arg1;
- (id)allDuplicatesOfMessageInfo:(id)arg1;
- (id)allMessageInfos;
- (id /* block */)comparator;
- (unsigned long long)count;
- (unsigned long long)countWithDuplicates;
- (void)dealloc;
- (id)debugDescription;
- (id /* block */)duplicatePreferenceComparator;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (void)enumerateUniqueMessageInfosWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)firstMessage;
- (unsigned long long)indexOfMessageInfo:(id)arg1;
- (unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (id)initWithComparator:(id /* block */)arg1;
- (id)lastMessage;
- (id)messageInfoAtIndex:(unsigned long long)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (void)removeAllMessageInfos;
- (unsigned long long)removeMessageInfo:(id)arg1;
- (unsigned long long)removeMessageInfoAtIndex:(unsigned long long)arg1;
- (void)removeMessageInfosAtIndexes:(id)arg1;
- (void)replaceMessageInfo:(id)arg1 withReplacement:(id)arg2 inPlace:(bool)arg3;
- (void)setComparator:(id /* block */)arg1;
- (void)setDuplicatePreferenceComparator:(id /* block */)arg1;
- (id)uniqueMessageInfos;

@end
