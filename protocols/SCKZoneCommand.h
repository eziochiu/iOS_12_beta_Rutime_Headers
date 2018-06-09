/* made by EzioChiu.
 */

@protocol SCKZoneCommand <NSObject, NSSecureCoding>

@required

- (void)executeWithZone:(id <SCKZoneModifying>)arg1;

@optional

- (bool)shouldDeferUpload;

@end
