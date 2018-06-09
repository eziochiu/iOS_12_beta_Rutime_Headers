/* made by EzioChiu.
 */

@protocol UISApplicationSupportServerDelegate <NSObject>

@required

- (UISApplicationSupportDisplayEdgeInfo *)edgeInfoForClient:(id <FBSServiceFacilityClientHandle>)arg1 displayConfiguration:(FBSDisplayConfiguration *)arg2;
- (UISDisplayContext *)initialDisplayContextForClient:(id <FBSServiceFacilityClientHandle>)arg1;
- (void)requestPasscodeUnlockUIForClient:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
