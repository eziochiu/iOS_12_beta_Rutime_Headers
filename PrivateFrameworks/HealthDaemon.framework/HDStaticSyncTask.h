/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStaticSyncTask : NSObject {
    unsigned long long  _options;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _storeIdentifier;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSUUID *storeIdentifier;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3;
- (unsigned long long)options;
- (id)profile;
- (id)queue;
- (id)runWithCompletion:(id /* block */)arg1;
- (id)storeIdentifier;

@end
