/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {
    ML3DatabaseConnection * _connection;
    NSEnumerator * _dirtyInsertsEnumerator;
    unsigned long long  _offset;
}

- (void).cxx_destruct;
- (id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2;
- (id)nextObject;

@end
