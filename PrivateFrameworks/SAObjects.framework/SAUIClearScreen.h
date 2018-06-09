/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (nonatomic, retain) SAAceView *initialView;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)clearScreen;
+ (id)clearScreenWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initialView;
- (bool)requiresResponse;
- (void)setInitialView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;

@end
