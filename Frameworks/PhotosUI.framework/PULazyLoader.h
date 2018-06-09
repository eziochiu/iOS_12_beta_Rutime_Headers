/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULazyLoader : NSObject {
    <PULazyLoaderDelegate> * _delegate;
    struct { 
        bool respondsToDidLoadItem; 
    }  _delegateFlags;
    id  _item;
    id /* block */  _loadingBlock;
}

@property (nonatomic) <PULazyLoaderDelegate> *delegate;
@property (nonatomic, readonly, copy) id /* block */ loadingBlock;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithLoadingBlock:(id /* block */)arg1;
- (void)invalidateItem;
- (id)itemLoadIfNeeded:(bool)arg1;
- (id /* block */)loadingBlock;
- (void)setDelegate:(id)arg1;

@end
