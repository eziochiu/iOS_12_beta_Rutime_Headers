/* made by EzioChiu.
 */

@protocol FBSServiceFacilityClientHandle <NSObject>

@required

- (<FBSServiceFacilityClientContext> *)context;
- (NSString *)facilityID;
- (bool)isSuspended;
- (int)pid;
- (BSProcessHandle *)processHandle;
- (void)setContext:(id <FBSServiceFacilityClientContext>)arg1;

@end
