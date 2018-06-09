/* made by EzioChiu.
 */

@protocol CPTemplateServiceClientInterface <CPBannerDelegate>

@required

- (void)clientExceededHierarchyDepthLimit;
- (void)templateIdentifierDidPop:(NSUUID *)arg1;

@end
