/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLHandleIntentActionImplementation : WFLActionImplementation {
    INCExtensionConnection * _connection;
}

@property (nonatomic, retain) INCExtensionConnection *connection;

+ (void)continueActionInApp:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (id)appNotInstalledErrorForIntent:(id)arg1 underlyingError:(id)arg2;
- (void)cancelRunning;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (id)connection;
- (id)createExtensionConnectionForIntent:(id)arg1;
- (id)errorWithCode:(long long)arg1 localizedDescription:(id)arg2 localizedTitle:(id)arg3 underlyingError:(id)arg4 intentResponse:(id)arg5;
- (void)finishRunningByContinuingInApp;
- (void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)logDebugInformation:(id)arg1;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)run;
- (void)setConnection:(id)arg1;

@end
