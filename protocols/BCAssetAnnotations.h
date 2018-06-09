/* made by EzioChiu.
 */

@protocol BCAssetAnnotations <BCCloudData>

@required

- (NSString *)assetID;
- (NSString *)assetVersion;
- (NSData *)bookAnnotations;

@end
