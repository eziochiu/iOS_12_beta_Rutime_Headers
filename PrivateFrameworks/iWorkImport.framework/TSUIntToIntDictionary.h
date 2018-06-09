/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } * mDictionary;
}

- (id)allKeys;
- (id)allValues;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (id)arrayOfBoxedKeys;
- (bool)containsKey:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (long long)intForKey:(long long)arg1;
- (bool)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)arg1;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;

@end
