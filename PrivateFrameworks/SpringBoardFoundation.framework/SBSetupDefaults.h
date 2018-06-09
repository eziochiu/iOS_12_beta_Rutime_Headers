/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBSetupDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool inSetupModeForActivationChange;

- (void)_bindAndRegisterDefaults;

@end
