/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDLegactDTController : NSObject <IDSServiceDelegate> {
    IDSService * _dtService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IDSService *dtService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_senderIDFromToken:(id)arg1;
- (void)dealloc;
- (id)dtService;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDtService:(id)arg1;

@end
