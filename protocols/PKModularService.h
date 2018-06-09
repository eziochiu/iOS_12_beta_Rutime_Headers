/* made by EzioChiu.
 */

@protocol PKModularService <NSObject>

@required

+ (<PKModularService> *)initForPlugInKit;

@optional

- (void)beginUsing:(id <PKSubsystemServicePersonality>)arg1 withBundle:(NSBundle *)arg2;
- (void)communicationsFailed:(id <PKSubsystemServicePersonality>)arg1;
- (void)endUsing:(id <PKSubsystemServicePersonality>)arg1;

@end
