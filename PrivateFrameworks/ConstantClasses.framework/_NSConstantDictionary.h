/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
 */

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>

+ (id)alloc;
+ (void)load;

- (id)allKeys;
- (id)allValues;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
