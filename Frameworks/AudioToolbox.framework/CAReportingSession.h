/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingSession : NSObject {
    NSMutableArray * _aggregatedPayloadData;
    NSMutableDictionary * _defaults;
    struct NSMutableDictionary { Class x1; } * _driverSnapShot;
    long long  _reporterID;
    NSObject * _reportingAgentToken;
    RTCReporting * _reportingSession;
    NSString * _serviceName;
    unsigned short  _serviceType;
    NSMutableDictionary * _sessionInfo;
    NSObject<OS_dispatch_queue> * _sessionReportingQueue;
    bool  _started;
}

@property (retain) NSMutableArray *aggregatedPayloadData;
@property (retain) NSMutableDictionary *defaults;
@property (retain) NSMutableDictionary *driverSnapShot;
@property long long reporterID;
@property (retain) NSObject *reportingAgentToken;
@property (retain) RTCReporting *reportingSession;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic) unsigned short serviceType;
@property (retain) NSMutableDictionary *sessionInfo;
@property (retain) NSObject<OS_dispatch_queue> *sessionReportingQueue;
@property bool started;

+ (void)sendSingleMessage:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 serviceType:(unsigned short)arg4 defaults:(id)arg5 reply:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)aggregatedPayloadData;
- (id)createSummaryEventForSession;
- (void)dealloc;
- (id)defaults;
- (struct NSMutableDictionary { Class x1; }*)driverSnapShot;
- (void)end;
- (void)endSync:(bool)arg1;
- (id)initWithID:(long long)arg1;
- (long long)reporterID;
- (id)reportingAgentToken;
- (id)reportingSession;
- (void)sendMessage:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 reply:(id /* block */)arg4;
- (id)serviceName;
- (unsigned short)serviceType;
- (id)sessionInfo;
- (id)sessionReportingQueue;
- (void)setAggregatedPayloadData:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDriverSnapShot:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setReporterID:(long long)arg1;
- (void)setReportingAgentToken:(id)arg1;
- (void)setReportingSession:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceType:(unsigned short)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setSessionReportingQueue:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)start;
- (void)startSync:(bool)arg1;
- (bool)started;
- (void)updateDefaults:(id)arg1;

@end
