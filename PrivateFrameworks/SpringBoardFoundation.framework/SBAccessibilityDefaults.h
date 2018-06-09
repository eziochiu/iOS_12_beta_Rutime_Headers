/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBAccessibilityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool allowReachability;
@property (nonatomic, readonly) bool reallyDisableReachability;

- (void)_bindAndRegisterDefaults;

@end
