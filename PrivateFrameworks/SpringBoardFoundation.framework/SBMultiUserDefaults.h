/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBMultiUserDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool disablesInternalDebugBlockingTasksUI;
@property (nonatomic, readonly) bool forceLoginWindow;

- (void)_bindAndRegisterDefaults;

@end
