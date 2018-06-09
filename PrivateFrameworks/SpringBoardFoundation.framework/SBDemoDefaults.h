/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBDemoDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isStoreDemoApplicationLockEnabled, nonatomic, readonly) bool storeDemoApplicationLockEnabled;
@property (nonatomic, readonly) bool usesStoreDemoPlugin;

- (void)_bindAndRegisterDefaults;

@end
