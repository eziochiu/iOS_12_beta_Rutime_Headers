/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMLSParser : IKJSObject <IKJSDOMLSParser>

@property (getter=appendAsChildrenAction, readonly) long long ACTION_APPEND_AS_CHILDREN;
@property (getter=insertAfterAction, readonly) long long ACTION_INSERT_AFTER;
@property (getter=insertBeforeAction, readonly) long long ACTION_INSERT_BEFORE;
@property (getter=replaceAction, readonly) long long ACTION_REPLACE;
@property (getter=replaceChildrenAction, readonly) long long ACTION_REPLACE_CHILDREN;

+ (id)_dataFromInput:(id)arg1;

- (long long)appendAsChildrenAction;
- (long long)insertAfterAction;
- (long long)insertBeforeAction;
- (id)parse:(id)arg1;
- (id)parseWithContext:(id)arg1 :(id)arg2 :(long long)arg3;
- (long long)replaceAction;
- (long long)replaceChildrenAction;

@end
