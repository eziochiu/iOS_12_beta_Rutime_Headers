/* made by EzioChiu.
 */

@protocol PXDisplaySuggestion <NSObject, NSCopying>

@required

- (NSDictionary *)actionProperties;
- (NSDate *)creationDate;
- (NSDate *)endDate;
- (<PXDisplayAssetFetchResult> *)fetchKeyAssets;
- (NSString *)localIdentifier;
- (NSDate *)startDate;
- (unsigned short)state;
- (unsigned short)subtype;
- (NSString *)title;
- (unsigned short)type;

@end
