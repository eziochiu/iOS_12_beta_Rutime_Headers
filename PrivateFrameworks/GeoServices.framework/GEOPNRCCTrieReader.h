/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPNRCCTrieReader : NSObject {
    NSData * _ccFile;
    struct _CFBurstTrie { } * _trie;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)lookupCCForPhNumber:(id)arg1;

@end
