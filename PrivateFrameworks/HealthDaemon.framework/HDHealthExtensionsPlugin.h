/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthExtensionsPlugin : NSObject <HDDiagnosticObject, HDHealthPlugin, HDXPCListenerDelegate> {
    <HDHealthDaemon> * _healthDaemon;
    HDXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, readonly, copy) NSString *pluginIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)healthDaemon;
- (id)initWithHealthDaemon:(id)arg1;
- (id)pluginIdentifier;
- (id)serverWithClient:(id)arg1 error:(id*)arg2;

@end
