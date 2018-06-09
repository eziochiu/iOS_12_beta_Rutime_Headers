/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDKeyedCollection : EDCollection {
    OITSUIntegerKeyDictionary * mMap;
}

- (unsigned long long)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)insertIntoMap:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isObjectInMap:(id)arg1;
- (bool)isOverwritingKeyOK;
- (id)objectWithKey:(long long)arg1;
- (void)removeAllObjects;
- (void)removeFromMap:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
