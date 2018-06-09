/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
 */

@interface Swift._RawNativeDictionaryStorage : Swift._SwiftNativeNSDictionary <Swift._NSDictionaryCore> {
    void bucketCount;
    void count;
    void initializedEntries;
    void keys;
    void seed;
    void values;
}

@property (nonatomic) long long count;

- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (id)enumerator;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(void*)arg2 count:(long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)setCount:(long long)arg1;

@end
