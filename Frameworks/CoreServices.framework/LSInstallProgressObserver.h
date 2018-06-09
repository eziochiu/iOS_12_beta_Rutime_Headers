/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSInstallProgressObserver : NSObject <LSInstallProgressProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lsPing:(id)arg1 reply:(id /* block */)arg2;
- (void)addObserver;
- (id)connection;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)installationFailedForApplication:(id)arg1 reply:(id /* block */)arg2;
- (void)removeObserver;
- (void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(bool)arg3;
- (void)setConnection:(id)arg1;

@end
