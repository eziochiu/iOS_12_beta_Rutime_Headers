/* made by EzioChiu.
 */

@protocol HKDataMetadataObject

@required

- (void)addDetailValuesToSection:(HKDataMetadataDetailSection *)arg1;
- (NSDictionary *)metadata;
- (NSDate *)startDate;

@end
