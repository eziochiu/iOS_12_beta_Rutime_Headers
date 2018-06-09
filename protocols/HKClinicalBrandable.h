/* made by EzioChiu.
 */

@protocol HKClinicalBrandable <NSObject>

@required

- (HKClinicalBrand *)brand;
- (NSString *)subtitle;
- (NSString *)title;

@optional

- (bool)hasMultipleLocations;

@end
