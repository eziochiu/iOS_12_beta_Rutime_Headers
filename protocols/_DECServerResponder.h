/* made by EzioChiu.
 */

@protocol _DECServerResponder <_DECServerInterface>

@required

- (void)addServer:(id <_DECServer>)arg1;
- (void)removeServer:(id <_DECServer>)arg1;
- (void)restoreModels;
- (void)saveModels;
- (void)trainExperts;

@end
