/* made by EzioChiu.
 */

@protocol FBSProcessIdentity <FBSProcess>

@required

- (FBSProcessHandle *)handle;
- (NSString *)jobLabel;
- (NSString *)name;
- (BSMachPortTaskNameRight *)taskNameRight;
- (long long)type;

@end
