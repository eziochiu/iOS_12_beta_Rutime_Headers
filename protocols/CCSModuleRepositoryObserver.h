/* made by EzioChiu.
 */

@protocol CCSModuleRepositoryObserver <NSObject>

@required

- (void)loadableModulesChangedForModuleRepository:(CCSModuleRepository *)arg1;

@end
