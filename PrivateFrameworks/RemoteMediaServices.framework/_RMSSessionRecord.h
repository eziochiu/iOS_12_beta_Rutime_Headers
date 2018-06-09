/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface _RMSSessionRecord : NSObject {
    RMSPowerAssertion * _powerAssertion;
    int  _refreshCount;
    RMSRunAssertion * _runAssertion;
    id  _session;
    int  _timeout;
}

@property (nonatomic, retain) RMSPowerAssertion *powerAssertion;
@property (nonatomic) int refreshCount;
@property (nonatomic, retain) RMSRunAssertion *runAssertion;
@property (nonatomic, retain) id session;
@property (nonatomic) int timeout;

- (void).cxx_destruct;
- (id)powerAssertion;
- (int)refreshCount;
- (id)runAssertion;
- (id)session;
- (void)setPowerAssertion:(id)arg1;
- (void)setRefreshCount:(int)arg1;
- (void)setRunAssertion:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeout:(int)arg1;
- (int)timeout;

@end
