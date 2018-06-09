/* made by EzioChiu.
 */

@protocol NUJSImagePropertiesExport <JSExport>

@required

- (NUJSDepthProperties *)depthProperties;
- (NSString *)fileUTI;
- (NSDictionary *)metadata;
- (NUJSRAWImageProperties *)rawImageProperties;

@end
