/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIrisVideoController : NSObject <CAMNebulaDaemonIrisClientProtocol> {
    NSMutableArray * __jobsToBeSent;
    NSObject<OS_dispatch_queue> * __mutexQueue;
    CAMNebulaDaemonProxyManager * __nebulaDaemonProxyManager;
    NSMutableDictionary * __pendingJobs;
    <CAMIrisVideoControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableArray *_jobsToBeSent;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (nonatomic, readonly) NSMutableDictionary *_pendingJobs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMIrisVideoControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_jobsToBeSent;
- (id)_mutexQueue;
- (id)_nebulaDaemonProxyManager;
- (void)_notifyDelegateOfVideoLocalPersistenceResult:(id)arg1 forVideoPersistenceUUID:(id)arg2;
- (id)_pendingJobs;
- (void)_submitJob:(id)arg1;
- (id)delegate;
- (id)initWithNebulaDaemonProxyManager:(id)arg1 delegate:(id)arg2;
- (bool)isWaitingOnNebuladForRequest:(id)arg1;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;

@end
