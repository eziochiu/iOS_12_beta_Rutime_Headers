/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASendCommands : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *commands;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)sendCommands;
+ (id)sendCommandsWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCommands:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)_siriui_applyUserInfoDictionary:(id)arg1;

@end
