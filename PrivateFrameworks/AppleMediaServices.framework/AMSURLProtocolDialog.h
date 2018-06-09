/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolDialog : NSObject <AMSURLProtocolDialogHandling> {
    NSDictionary * _dialogDictionary;
    NSString * _logKey;
    NSURL * _redirectURL;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, readonly) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dialogDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, readonly) NSString *message;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSURLTaskInfo *taskInfo;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)buttons;
- (id)dialogDictionary;
- (id)initWithDialogDictionary:(id)arg1 taskInfo:(id)arg2;
- (id)logKey;
- (id)message;
- (id)runDialog;
- (void)setLogKey:(id)arg1;
- (id)taskInfo;
- (id)title;

@end
