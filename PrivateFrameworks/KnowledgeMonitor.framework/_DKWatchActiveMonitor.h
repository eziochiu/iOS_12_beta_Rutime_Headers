/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKWatchActiveMonitor : _DKMonitor <IDSServiceDelegatePrivate> {
    bool  _enabled;
    IDSService * _service;
    NSObject<OS_dispatch_queue> * idsServiceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventWithWatchActive:(bool)arg1 deviceID:(id)arg2;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)checkDevices:(id)arg1;
- (id)init;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end