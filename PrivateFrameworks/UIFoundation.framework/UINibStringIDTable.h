/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UINibStringIDTable : NSObject {
    struct UIStringIDTableBucket { id x1; struct UIStringIDTableBucket {} *x2; } * buckets;
    unsigned long long  count;
    unsigned long long  hashMask;
    struct UIStringIDTableBucket {} ** table;
}

- (long long)count;
- (void)dealloc;
- (id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2;
- (bool)lookupKey:(id)arg1 identifier:(long long*)arg2;

@end
