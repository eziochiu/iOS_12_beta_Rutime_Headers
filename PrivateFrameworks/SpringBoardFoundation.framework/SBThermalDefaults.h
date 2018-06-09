/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBThermalDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool wasConnectedToWiFiWhenBrickedForThermalConditions;

- (void)_bindAndRegisterDefaults;

@end
