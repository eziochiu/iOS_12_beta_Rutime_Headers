/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STRestrictionsPINController : PSRestrictionsPINController

@property (nonatomic) <STRestrictionsPINControllerDelegate> *pinDelegate;

- (id)pinInstructionsPrompt;
- (void)setPIN:(id)arg1;
- (bool)validatePIN:(id)arg1;

@end
