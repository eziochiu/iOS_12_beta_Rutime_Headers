/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUICloseAssistant : SABaseClientBoundCommand

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)closeAssistant;
+ (id)closeAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;

@end
