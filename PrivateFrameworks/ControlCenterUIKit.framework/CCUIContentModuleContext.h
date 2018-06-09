/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIContentModuleContext : NSObject {
    <CCUIContentModuleContextDelegate> * _delegate;
    NSString * _moduleIdentifier;
}

@property (nonatomic) <CCUIContentModuleContextDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *moduleIdentifier;

+ (id)_sharedOpenAppService;
+ (id)_sharedOpenApplicationOptions;
+ (bool)areAnimationsPermitted;
+ (void)initialize;
+ (void)performWithoutAnimationWhileHidden:(id /* block */)arg1;
+ (void)setAnimationsPermitted:(bool)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissControlCenter;
- (void)dismissModule;
- (void)enqueueStatusUpdate:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1;
- (id)moduleIdentifier;
- (void)openApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)arg1;
- (void)requestExpandModule;
- (void)setDelegate:(id)arg1;

@end
