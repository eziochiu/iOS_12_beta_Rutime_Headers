/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult> {
    <NUSurfaceImage> * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (retain) <NUSurfaceImage> *image;
@property (readonly) NURegion *region;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)image;
- (void)setImage:(id)arg1;

@end
