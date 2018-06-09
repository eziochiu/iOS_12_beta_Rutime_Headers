/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLHandleIntentAction : WFLAction {
    bool  _forceExecutionOnPhone;
    INIntent * _intent;
}

@property (nonatomic, readonly) bool forceExecutionOnPhone;
@property (nonatomic, readonly) INIntent *intent;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)continueInAppWithCompletionHandler:(id /* block */)arg1;
- (bool)forceExecutionOnPhone;
- (Class)implementationClass;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 forceExecutionOnPhone:(bool)arg2;
- (id)intent;
- (bool)isEqual:(id)arg1;

@end
