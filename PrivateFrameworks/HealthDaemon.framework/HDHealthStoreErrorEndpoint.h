/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)initWithClient:(id)arg1 daemon:(id)arg2 error:(id)arg3;
- (void)remote_serverForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setError:(id)arg1;

@end
