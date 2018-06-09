/* made by EzioChiu.
 */

@protocol FBSSceneHandle <NSObject>

@required

- (FBSSerialQueue *)callOutQueue;
- (<FBSProcess> *)clientProcess;
- (void)closeSession:(FBSSceneActivitySession *)arg1;
- (<FBSSceneAgentProxy> *)counterpartAgent;
- (<FBSProcess> *)hostProcess;
- (NSString *)identifier;
- (FBSSceneActivitySession *)openSessionWithName:(NSString *)arg1 executionPolicy:(FBSProcessExecutionPolicy *)arg2;
- (FBSSceneParameters *)parameters;
- (FBSSceneActivitySession *)sessionForIdentifier:(NSString *)arg1;
- (FBSSceneSpecification *)specification;

@end
