/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGJSBurstTrie : NSObject <SGJSBurstTrieExports> {
    struct _CFBurstTrie { } * _trie;
}

- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (unsigned int)lookup:(id)arg1;

@end
