/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionRequest : NSObject {
    INWatchdogTimer * _contextTimer;
    NSError * _error;
    NSExtension * _extension;
    NSArray * _extensionInputItems;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _requestIdentifier;
    NSOperationQueue * _requestOperationQueue;
    bool  _requiresTCC;
}

@property (nonatomic, retain) NSError *_error;
@property (nonatomic, retain) NSExtension *_extension;
@property (nonatomic, retain) NSArray *extensionInputItems;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool requiresTCC;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_error;
- (id)_extension;
- (id)_extensionContextHost;
- (id)_requestOperationQueue;
- (void)_resetContextTimer;
- (void)_resetExtensionContextHostWithCompletion:(id /* block */)arg1;
- (void)_scheduleContextTimer;
- (id)extensionInputItems;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)requiresTCC;
- (void)reset;
- (void)setExtensionInputItems:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresTCC:(bool)arg1;
- (void)set_error:(id)arg1;
- (void)set_extension:(id)arg1;
- (void)startRequestForIntent:(id)arg1 completion:(id /* block */)arg2;

@end
