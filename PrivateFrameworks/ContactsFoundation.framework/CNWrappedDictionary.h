/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNWrappedDictionary : NSDictionary {
    NSDictionary * _underlyingDictionary;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
