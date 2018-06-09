/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSelectedItemsStack : PXObservable <PXMutableSelectedItemsStack> {
    long long  _depth;
    NSArray * _topItemReferences;
    NSArray * _topItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long depth;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *topItemReferences;
@property (nonatomic, copy) NSArray *topItems;

- (void).cxx_destruct;
- (long long)depth;
- (id)init;
- (id)initWithDepth:(long long)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)setTopItemReferences:(id)arg1;
- (void)setTopItems:(id)arg1;
- (id)topItemReferences;
- (id)topItems;
- (void)updateWithSelectedItemsSnapshot:(id)arg1;

@end
