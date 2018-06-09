/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGIntervalTree : NSObject <SGIntervalTreeProtocol> {
    NSMutableDictionary * _keyToInterval;
    SGIntervalTreeNode * _root;
    bool  _treeFrozen;
    bool  _treeKeyed;
    NSMutableIndexSet * _treePositions;
}

- (void).cxx_destruct;
- (void)addPosition:(unsigned long long)arg1;
- (id)init;
- (id)query:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)rebuildTree;
- (void)rekeyTree;
- (void)remove:(id)arg1;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(id)arg3;

@end
