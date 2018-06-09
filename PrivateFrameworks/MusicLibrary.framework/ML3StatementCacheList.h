/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StatementCacheList : NSObject {
    ML3StatementCacheNode * _firstNode;
    ML3StatementCacheNode * _lastNode;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) ML3StatementCacheNode *firstNode;
@property (nonatomic, readonly) ML3StatementCacheNode *lastNode;

- (void).cxx_destruct;
- (void)appendNode:(id)arg1;
- (unsigned long long)count;
- (void)deleteAllNodes;
- (void)deleteOldestNode;
- (id)description;
- (id)firstNode;
- (id)lastNode;
- (id)oldestNode;
- (void)promoteNodeWithDictionaryKey:(id)arg1;

@end
