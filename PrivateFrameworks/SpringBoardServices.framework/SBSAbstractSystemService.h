/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (nonatomic, readonly) SBSSystemServiceClient *client;

+ (Class)serviceFacilityClientClass;

- (id)client;

@end
