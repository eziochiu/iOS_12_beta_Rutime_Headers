/* made by EzioChiu.
 */

@protocol FBSceneClientProvider <NSObject>

@required

- (void)beginTransaction;
- (void)endTransaction;
- (<FBSceneClient> *)registerHost:(id <FBSceneHost>)arg1;
- (void)registerInvalidationAction:(FBSceneClientProviderInvalidationAction *)arg1;
- (void)unregisterHost:(id <FBSceneHost>)arg1;

@end
