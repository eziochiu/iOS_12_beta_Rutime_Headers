/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantIntentHandler : _INExtension {
    NSMutableArray * _recentIntentHandlers;
}

- (void).cxx_destruct;
- (id)currentApplicationContext;
- (id)existingHandlerForIntentIdentifier:(id)arg1;
- (id)handlerForIntent:(id)arg1;
- (id)init;
- (void)updateRecentlyUsedHandlersWithHandler:(id)arg1;

@end
