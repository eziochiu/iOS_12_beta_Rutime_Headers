/* made by EzioChiu.
 */

@protocol SXAdComponent <SXComponent, SXComponentAdvertisingMetadataProviding>

@required

- (unsigned long long)adType;
- (UIColor *)debugColor;
- (unsigned long long)placementType;

@end
