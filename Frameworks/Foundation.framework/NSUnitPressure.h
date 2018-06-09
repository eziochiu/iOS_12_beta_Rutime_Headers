/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitPressure : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)bars;
+ (id)baseUnit;
+ (id)gigapascals;
+ (id)hectopascals;
+ (id)inchesOfMercury;
+ (id)kilopascals;
+ (id)megapascals;
+ (id)millibars;
+ (id)millimetersOfMercury;
+ (id)newtonsPerMetersSquared;
+ (id)poundsForcePerSquareInch;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

@end
