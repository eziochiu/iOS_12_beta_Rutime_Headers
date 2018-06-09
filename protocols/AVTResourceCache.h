/* made by EzioChiu.
 */

@protocol AVTResourceCache <NSObject>

@required

- (<AVTCachedResource> *)resourceForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2;
- (<AVTCachedResource> *)resourceForItem:(void *)arg1 scope:(void *)arg2 cacheMissHandler:(void *)arg3; // needs 3 arg types, found 9: <AVTCacheableResource> *, <AVTCacheableResourceScope> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <AVTCachedResource> *, id /* block */, <AVTCacheableResource> *, <AVTCacheableResourceScope> *, void*

@end
