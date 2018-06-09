/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIUpdateVisibleCellsContext : NSObject {
    NSMutableArray * _indexPaths;
    NSMutableArray * _sizes;
}

@property (nonatomic, readonly) NSArray *indexPaths;
@property (nonatomic, readonly) NSArray *sizes;

- (void).cxx_destruct;
- (void)addSize:(struct CGSize { double x1; double x2; })arg1 forIndexPath:(id)arg2;
- (id)description;
- (id)indexPaths;
- (id)init;
- (bool)shouldInvalidate;
- (id)sizes;

@end
