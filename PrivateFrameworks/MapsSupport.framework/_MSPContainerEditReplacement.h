/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPContainerEditReplacement : _MSPContainerEdit <MSPContainerEditReplacement> {
    NSIndexSet * _indexesOfReplacedObjects;
    NSArray * _originalImmutableObjects;
    NSArray * _originalObjects;
    NSArray * _replacementImmutableObjects;
    NSArray * _replacementObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *indexesOfReplacedObjects;
@property (nonatomic, readonly) NSArray *originalImmutableObjects;
@property (nonatomic, readonly) NSArray *originalObjects;
@property (nonatomic, readonly) NSArray *replacementImmutableObjects;
@property (nonatomic, readonly) NSArray *replacementObjects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)indexesOfReplacedObjects;
- (id)initWithOriginalObjects:(id)arg1 replacementObjects:(id)arg2 indexes:(id)arg3;
- (id)originalImmutableObjects;
- (id)originalObjects;
- (id)replacementImmutableObjects;
- (id)replacementObjects;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;

@end
