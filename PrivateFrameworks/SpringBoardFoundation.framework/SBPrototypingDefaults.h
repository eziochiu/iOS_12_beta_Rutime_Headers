/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBPrototypingDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool allowPrototypeSettings;
@property (nonatomic) bool prototypeSettingsNeedsMigration;

- (void)_bindAndRegisterDefaults;

@end
