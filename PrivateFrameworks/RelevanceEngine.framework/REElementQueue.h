/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElementQueue : NSObject {
    NSArray * _comparators;
    <REElementQueueDelegate> * _delegate;
    NSMutableSet * _hiddenElements;
    long long  _maximumRelevantElementsCount;
    REOrderingArray * _relevantElements;
}

@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic, readonly, copy) NSArray *comparators;
@property (nonatomic, readonly) long long count;
@property (nonatomic) <REElementQueueDelegate> *delegate;
@property (nonatomic) long long maximumRelevantElementsCount;
@property (nonatomic, readonly) long long visibleCount;

- (void).cxx_destruct;
- (void)addElement:(id)arg1 hidden:(bool)arg2;
- (id)allElements;
- (id)comparators;
- (bool)containsElement:(id)arg1;
- (long long)count;
- (id)delegate;
- (id)elementAtIndex:(unsigned long long)arg1;
- (long long)indexOfElement:(id)arg1;
- (id)initWithMaximumRelevantElementsCount:(long long)arg1 comparators:(id)arg2;
- (long long)maximumRelevantElementsCount;
- (void)removeElement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumRelevantElementsCount:(long long)arg1;
- (void)updatePositionForElement:(id)arg1 hidden:(bool)arg2;
- (long long)visibleCount;

@end
