/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPCWrapper : NSObject {
    NSUUID * _identifier;
    NEIPC * _ipc;
    NSObject<OS_dispatch_queue> * _ipcQueue;
    NSObject<OS_dispatch_queue> * _sendQueue;
}

@property (readonly) NSUUID *identifier;
@property (readonly) NEIPC *ipc;
@property (readonly) NSObject<OS_dispatch_queue> *ipcQueue;
@property (readonly) NSObject<OS_dispatch_queue> *sendQueue;

+ (void)cancelSharedWrapperForSession:(void*)arg1;
+ (id)sharedWrapperForSession:(void*)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)identifier;
- (id)initWithSession:(void*)arg1 identifier:(id)arg2;
- (id)ipc;
- (id)ipcQueue;
- (id)sendQueue;

@end
