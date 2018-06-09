/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPluginContainerCheck : NSObject {
    id  _contextInfo;
    <WebPluginContainerCheckController> * _controller;
    bool  _done;
    WebPolicyDecisionListener * _listener;
    NSURLRequest * _request;
    id  _resultObject;
    SEL  _resultSelector;
    NSString * _target;
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;

- (id)_actionInformationWithURL:(id)arg1;
- (void)_askPolicyDelegate;
- (void)_continueWithPolicy:(int)arg1;
- (bool)_isForbiddenFileLoad;
- (void)cancel;
- (id)contextInfo;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;
- (void)start;

@end
