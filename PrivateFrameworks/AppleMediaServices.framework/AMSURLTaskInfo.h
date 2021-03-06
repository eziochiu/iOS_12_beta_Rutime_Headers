/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLTaskInfo : NSObject {
    id /* block */  _completionBlock;
    NSMutableData * _data;
    NSError * _error;
    NSURLSessionTaskMetrics * _metrics;
    AMSURLRequestProperties * _properties;
    AMSURLAction * _receivedAction;
    NSURLResponse * _response;
    NSURLSessionTask * _task;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURLSessionTaskMetrics *metrics;
@property (nonatomic, retain) AMSURLRequestProperties *properties;
@property (nonatomic, retain) AMSURLAction *receivedAction;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic, retain) NSURLSessionTask *task;

+ (id)createTaskInfoForTask:(id)arg1;
+ (void)removeTaskInfoForTask:(id)arg1;
+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (id)taskInfoForTask:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)data;
- (id)error;
- (id)initWithTask:(id)arg1;
- (id)metrics;
- (id)properties;
- (id)receivedAction;
- (id)response;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setReceivedAction:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
