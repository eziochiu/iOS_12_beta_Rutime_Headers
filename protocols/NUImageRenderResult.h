/* made by EzioChiu.
 */

@protocol NUImageRenderResult <NURenderResult>

@required

- (NUImageGeometry *)geometry;
- (NURegion *)region;

@end
