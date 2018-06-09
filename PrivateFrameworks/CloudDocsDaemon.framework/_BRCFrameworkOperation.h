/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {
    bool  _ignoreMissingRemoteClientProxy;
    NSObject<BROperationClient> * _remoteClientProxy;
    bool  _startedFinish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreMissingRemoteClientProxy;
@property (nonatomic, retain) NSObject<BROperationClient> *remoteClientProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionAdditionalStringWithContext:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)ignoreMissingRemoteClientProxy;
- (oneway void)invalidate;
- (id)remoteClientProxy;
- (void)setIgnoreMissingRemoteClientProxy:(bool)arg1;
- (void)setRemoteClientProxy:(id)arg1;
- (void)start;

@end
