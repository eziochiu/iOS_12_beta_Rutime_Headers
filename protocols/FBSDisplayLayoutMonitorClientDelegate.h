/* made by EzioChiu.
 */

@protocol FBSDisplayLayoutMonitorClientDelegate <NSObject>

@required

- (void)client:(FBSDisplayLayoutMonitorClient *)arg1 handleNewDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;
- (long long)clientDisplayType:(FBSDisplayLayoutMonitorClient *)arg1;
- (unsigned long long)clientQualityOfService:(FBSDisplayLayoutMonitorClient *)arg1;

@end
