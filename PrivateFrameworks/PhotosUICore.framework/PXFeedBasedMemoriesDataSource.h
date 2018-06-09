/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource {
    NSArray * _entries;
}

@property (nonatomic, readonly, copy) NSArray *entries;

- (void).cxx_destruct;
- (id)entries;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end
