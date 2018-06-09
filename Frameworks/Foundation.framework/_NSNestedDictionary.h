/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSNestedDictionary : NSMutableDictionary {
    id  _bindings;
    id  _locals;
}

- (id)_recursiveAllKeys;
- (id)_recursiveAllValues;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
