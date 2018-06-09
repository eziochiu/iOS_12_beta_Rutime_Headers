/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFUserNotification : NSObject {
    NSString * _bundleID;
    struct __CFUserNotification { } * _cfNotification;
    struct __CFRunLoopSource { } * _cfRunloopSource;
    id /* block */  _completionBlock;
    NSString * _domain;
}

@property (nonatomic, copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 appBundleID:(id)arg2;
- (void)scheduleWithCompletionBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;

@end
