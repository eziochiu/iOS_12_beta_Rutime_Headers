/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray * _sortDescriptors;
}

- (id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2;

@end
