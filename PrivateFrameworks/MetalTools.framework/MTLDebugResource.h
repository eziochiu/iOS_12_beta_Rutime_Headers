/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugResource : NSObject <NSObject> {
    id  _baseObject;
    bool  _hasTrackedMakeAliasable;
    MTLDebugHeap * _heap;
    id  _parent;
}

@property (readonly) id baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasTrackedMakeAliasable;
@property (readonly) unsigned long long hash;
@property (readonly) <MTLHeap> *heap;
@property (readonly) Class superclass;

- (id)baseObject;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (bool)hasTrackedMakeAliasable;
- (id)heap;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;
- (void)setHasTrackedMakeAliasable:(bool)arg1;

@end
