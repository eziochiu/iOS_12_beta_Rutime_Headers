/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitMass : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (id)carats;
+ (id)centigrams;
+ (id)decigrams;
+ (id)grams;
+ (id)kilograms;
+ (id)metricTons;
+ (id)micrograms;
+ (id)milligrams;
+ (id)nanograms;
+ (id)ounces;
+ (id)ouncesTroy;
+ (id)picograms;
+ (id)poundsMass;
+ (id)shortTons;
+ (id)slugs;
+ (id)stones;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

@end
