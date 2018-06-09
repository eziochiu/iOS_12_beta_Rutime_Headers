/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REOrderingArray : NSObject {
    NSArray * _comparators;
    NSArray * _orderedObjects;
}

@property (nonatomic, readonly) NSArray *comparators;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (unsigned long long)_indexForObject:(id)arg1 atLevel:(unsigned long long)arg2 suggestedIndex:(unsigned long long)arg3;
- (unsigned long long)_insertionIndexForObject:(id)arg1 atLevel:(unsigned long long)arg2 suggestedIndex:(unsigned long long)arg3;
- (void)addObject:(id)arg1 itemIndex:(unsigned long long*)arg2;
- (id)comparators;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)initWithComparators:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeObject:(id)arg1 originalIndex:(unsigned long long*)arg2;
- (void)updateObject:(id)arg1 originalIndex:(unsigned long long*)arg2 newIndex:(unsigned long long*)arg3;

@end
