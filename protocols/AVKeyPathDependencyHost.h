/* made by EzioChiu.
 */

@protocol AVKeyPathDependencyHost <NSObject>

@required

- (void)declareKeyPathDependenciesWithRegistry:(id <AVKeyPathDependencyRegistration>)arg1;

@end
