/* made by EzioChiu.
 */

@protocol MLFeatureProvider

@required

- (NSSet *)featureNames;
- (MLFeatureValue *)featureValueForName:(NSString *)arg1;

@end
