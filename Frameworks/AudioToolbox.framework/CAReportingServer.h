/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray * _clients;
    NSDictionary * _defaults;
    CAReportingDriverUtility * _driverUtility;
    NSXPCListener * _listener;
    bool  _reportingEnabled;
}

@property (retain) NSMutableArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDictionary *defaults;
@property (readonly, copy) NSString *description;
@property (retain) CAReportingDriverUtility *driverUtility;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property bool reportingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CAReportingDefaults;
- (id)clients;
- (id)defaults;
- (id)driverUtility;
- (id)findReportingSessionForID:(long long)arg1;
- (id)init;
- (void)listenForDefaultsNotification;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)reportingEnabled;
- (void)setClients:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDriverUtility:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setReportingEnabled:(bool)arg1;
- (void)startListening;

@end
