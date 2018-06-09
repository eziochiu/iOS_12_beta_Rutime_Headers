/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAbstractMutableLargeDictionaryKeyEnumerator : NSEnumerator {
    TSPAbstractMutableLargeDictionary * _dictionary;
    NSEnumerator * _segmentEnumerator;
    unsigned long long  _segmentIndex;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)nextObject;

@end
