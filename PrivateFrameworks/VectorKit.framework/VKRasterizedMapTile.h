/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterizedMapTile : VKRasterTile

- (void)buildTexture;
- (void)gglBuildTexture;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 gglTexture:(const struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; }*)arg2 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg3;

@end
