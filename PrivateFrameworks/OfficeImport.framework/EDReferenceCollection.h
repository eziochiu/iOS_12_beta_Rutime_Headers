/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReferenceCollection : EDCollection {
    bool  mCoalesce;
}

+ (id)coalesceCollection;
+ (id)noCoalesceCollection;

- (unsigned long long)addObject:(id)arg1;
- (void)coalesce;
- (void)coalesceProgressiveCellReferencesCollection;
- (bool)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)init;
- (id)initWihNoCoalesce;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(bool)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)reverseReferencesByRow:(bool)arg1;

@end
