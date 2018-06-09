/* made by EzioChiu.
 */

@protocol PXDisplayAssetCollection <PXDisplayCollection>

@required

- (NSDate *)endDate;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (NSDate *)startDate;

@end
