/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {
    bool  _hasZeroValue;
    NSHashTable * _hashTable;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)_initWithHashTable:(id)arg1 hasZeroValue:(bool)arg2;
- (bool)containsValue:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
