/* made by EzioChiu.
 */

@protocol _INPBGetCarPowerLevelStatusIntentResponse <NSObject>

@required

- (_INPBDouble *)chargePercentRemaining;
- (_INPBDistance *)distanceRemaining;
- (_INPBDouble *)fuelPercentRemaining;
- (bool)hasChargePercentRemaining;
- (bool)hasDistanceRemaining;
- (bool)hasFuelPercentRemaining;
- (void)setChargePercentRemaining:(_INPBDouble *)arg1;
- (void)setDistanceRemaining:(_INPBDistance *)arg1;
- (void)setFuelPercentRemaining:(_INPBDouble *)arg1;

@end
