/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RESection : NSObject <REElementQueueDelegate, RESectionDelegate> {
    bool  _allowsSubsections;
    REMLElementComparator * _comparator;
    <RESectionDelegate> * _delegate;
    _RESectionDescriptor * _descriptor;
    NSMutableDictionary * _elements;
    NSMutableSet * _hiddenElements;
    REElementQueue * _queue;
    NSMutableDictionary * _subsections;
}

@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic, copy) REMLElementComparator *comparator;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RESectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumElements;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long visibleCount;

- (void).cxx_destruct;
- (long long)_compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (id)_createSectionForGroup:(id)arg1;
- (id)_groupForIdentifier:(id)arg1;
- (id)_groupIdentifierForElement:(id)arg1;
- (long long)_mappedIndexFromIndex:(long long)arg1;
- (void)_removeSection:(id)arg1;
- (void)addElement:(id)arg1 forceHidden:(bool)arg2;
- (id)allElements;
- (id)comparator;
- (bool)containsElementWithId:(id)arg1;
- (long long)count;
- (id)delegate;
- (id)elementIdAtIndex:(unsigned long long)arg1;
- (void)elementQueue:(id)arg1 didInsertElement:(id)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (void)elementQueue:(id)arg1 didMoveElement:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4 wantsSubsectionPositionUpdate:(bool)arg5;
- (void)elementQueue:(id)arg1 didRemoveElement:(id)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (long long)indexOfElementWithId:(id)arg1;
- (id)initWithSectionDescriptor:(id)arg1 comparator:(id)arg2;
- (long long)maximumElements;
- (id)name;
- (void)removeElementWithId:(id)arg1;
- (void)section:(id)arg1 didInsertElement:(id)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (void)section:(id)arg1 didMoveElement:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4 wantsSubsectionPositionUpdate:(bool)arg5;
- (void)section:(id)arg1 didRemoveElement:(id)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)setComparator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumElements:(long long)arg1;
- (void)updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(bool)arg3;
- (long long)visibleCount;

@end
