/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDaemonJob : NSObject {
    NSObject<OS_xpc_object> * _connection;
    PLXPCTransaction * _transaction;
    NSObject<OS_xpc_object> * _xpcReply;
}

@property (nonatomic, readonly) bool clientWantsReply;
@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly, retain) NSError *replyError;
@property (nonatomic, readonly) bool replyIsError;
@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;

+ (void)runDaemonSideWithXPCEvent:(id)arg1 connection:(id)arg2;

- (void)archiveXPCToDisk:(id)arg1;
- (bool)clientWantsReply;
- (id)connection;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)replyError;
- (bool)replyIsError;
- (void)run;
- (void)runDaemonSide;
- (void)sendToAssetsd;
- (void)sendToAssetsdWithReply;
- (void)setXpcReply:(id)arg1;
- (bool)shouldArchiveXPCToDisk;
- (bool)shouldRunOnDaemonSerialQueue;
- (id)xpcReply;

@end
