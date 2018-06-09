/* made by EzioChiu.
 */

@protocol Swift._NSSetCore <Swift._NSCopying, Swift._NSFastEnumeration>

@required

- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (id)initWithObjects:(const id*)arg1 count:(long long)arg2;
- (id)member:(id)arg1;
- (<_TtPs13_NSEnumerator_> *)objectEnumerator;

@end
