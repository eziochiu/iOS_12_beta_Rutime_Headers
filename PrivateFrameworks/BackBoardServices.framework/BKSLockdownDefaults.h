/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSLockdownDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) bool tetheredDisplayPortMode;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
