/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSConstraintValidator : NSObject {
    id * _cachesByEntity;
    NSArray * _entities;
    _PFModelMap * _modelMap;
}

- (void)_addConstraintRoot:(id)arg1 forEntity:(id)arg2;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;
- (void)registerObject:(id)arg1;
- (void)registerObjects:(id)arg1;
- (void)reset;
- (id)validateCaches;
- (id)validateForSave;

@end
