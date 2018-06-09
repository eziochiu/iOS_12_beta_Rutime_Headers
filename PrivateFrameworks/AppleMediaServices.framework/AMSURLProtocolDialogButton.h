/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolDialogButton : AMSDialogButton {
    NSDictionary * _buttonDictionary;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) long long URLType;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSDictionary *buttonDictionary;
@property (nonatomic, readonly) NSString *subtarget;
@property (nonatomic, readonly) AMSURLTaskInfo *taskInfo;

- (void).cxx_destruct;
- (id)URL;
- (long long)URLType;
- (long long)actionType;
- (id)buttonDictionary;
- (id)initWithTitle:(id)arg1 taskInfo:(id)arg2 buttonDictionary:(id)arg3;
- (void)performDefaultAction;
- (id)subtarget;
- (id)taskInfo;

@end
