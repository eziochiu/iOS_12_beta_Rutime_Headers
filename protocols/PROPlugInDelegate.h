/* made by EzioChiu.
 */

@protocol PROPlugInDelegate <PROAPIAccessing>

@required

- (<PROAPIAccessing> *)apiManagerForPlugInInstances;
- (void)plugIn:(PROPlugIn *)arg1 didError:(NSError *)arg2;
- (void)plugInCouldNotInitialize:(NSError *)arg1;
- (PROPlugInGroup *)plugInGroupWithUUID:(struct __CFUUID { }*)arg1;
- (bool)plugInShouldLoadPlugInInstanceForTheFirstTime:(PROPlugIn *)arg1;

@end
