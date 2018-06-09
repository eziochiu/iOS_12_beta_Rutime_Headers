/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailCache : NSObject {
    NSCache * _cachedGenericItems;
    NSMapTable * _cachedIconItems;
    NSMapTable * _cachedThumbnailItems;
    NSOperationQueue * _operationQueue;
    NSCache * _recentlyUsedItems;
}

@property (nonatomic, readonly) NSCache *cachedGenericItems;
@property (nonatomic, readonly) NSMapTable *cachedIconItems;
@property (nonatomic, readonly) NSMapTable *cachedThumbnailItems;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSCache *recentlyUsedItems;

+ (void)clearCache;
+ (id)iconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5 isInteractive:(bool)arg6;
+ (id)sharedCache;
+ (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6 isInteractive:(bool)arg7;
+ (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5 isInteractive:(bool)arg6;

- (void).cxx_destruct;
- (id)_iconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5 isInteractive:(bool)arg6;
- (id)_thumbnailFallbackForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6 currentThumbnail:(id)arg7;
- (id)_thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6 isInteractive:(bool)arg7;
- (id)cachedGenericItems;
- (id)cachedIconItems;
- (id)cachedThumbnailItems;
- (void)clearCache;
- (id)iconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5 isInteractive:(bool)arg6;
- (id)init;
- (void)markThumbnailAsRecentlyUsed:(id)arg1;
- (id)operationQueue;
- (id)recentlyUsedItems;
- (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(bool)arg6 isInteractive:(bool)arg7;
- (id)thumbnailForItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5 isInteractive:(bool)arg6;

@end
