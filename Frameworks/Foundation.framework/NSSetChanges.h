/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)_isToManyChangeInformation;
- (long long)_toManyPropertyType;
- (void)addChange:(id)arg1;
- (void)addObject:(id)arg1;
- (void)applyChangesToSet:(id)arg1;
- (unsigned long long)changeCount;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)removeObject:(id)arg1;

@end
