/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPendingRemotePersistenceWrapper : NSObject {
    id /* block */  _completionHandler;
    NSDate * _creationDate;
    NSMutableDictionary * _job;
    CAMCaptureRequest * _request;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSMutableDictionary *job;
@property (nonatomic, readonly) CAMCaptureRequest *request;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)creationDate;
- (id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)job;
- (id)request;
- (void)setCompletionHandler:(id /* block */)arg1;

@end