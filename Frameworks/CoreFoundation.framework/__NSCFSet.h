/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFSet : NSMutableSet {
    unsigned int  _bits;
    void * _callbacks;
    unsigned char  _cfinfo;
    unsigned int  _rc;
    id * _values;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (unsigned long long)_trueCount;
- (bool)_tryRetain;
- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end
