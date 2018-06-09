/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeRequestJob : PLDaemonJob {
    PLAssetsdClientServiceSender * _clientSender;
    id /* block */  _completionHandler;
    NSOrderedSet * _deletes;
    NSOrderedSet * _inserts;
    NSOrderedSet * _updates;
    NSObject<OS_xpc_object> * _xpcDeletes;
    NSObject<OS_xpc_object> * _xpcInserts;
    NSObject<OS_xpc_object> * _xpcUpdates;
}

@property (nonatomic, retain) PLAssetsdClientServiceSender *clientSender;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSOrderedSet *deletes;
@property (nonatomic, copy) NSOrderedSet *inserts;
@property (nonatomic, copy) NSOrderedSet *updates;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcDeletes;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcInserts;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcUpdates;

+ (void)_addChangeRequests:(id)arg1 toXPCDict:(id)arg2 withKey:(const char *)arg3;
+ (void)applyPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)clientSender;
- (id /* block */)completionHandler;
- (long long)daemonOperation;
- (id)deletes;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)inserts;
- (void)run;
- (void)runDaemonSide;
- (void)setClientSender:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeletes:(id)arg1;
- (void)setInserts:(id)arg1;
- (void)setUpdates:(id)arg1;
- (void)setXpcDeletes:(id)arg1;
- (void)setXpcInserts:(id)arg1;
- (void)setXpcUpdates:(id)arg1;
- (id)updates;
- (id)xpcDeletes;
- (id)xpcInserts;
- (id)xpcUpdates;

@end
