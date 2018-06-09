/* made by EzioChiu.
 */

@protocol ACHAchievementProgressProviding <NSObject>

@required

- (HKQuantity *)currentGoalQuantityForTemplate:(ACHTemplate *)arg1;
- (HKQuantity *)currentProgressQuantityForTemplate:(ACHTemplate *)arg1;
- (bool)providesProgressForTemplate:(ACHTemplate *)arg1;

@end
