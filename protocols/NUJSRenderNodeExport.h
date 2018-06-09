/* made by EzioChiu.
 */

@protocol NUJSRenderNodeExport <JSExport>

@required

- (NUJSImageGeometry *)geometry;
- (NUJSImageProperties *)imageProperties;
- (NUJSVideoProperties *)videoProperties;

@end
