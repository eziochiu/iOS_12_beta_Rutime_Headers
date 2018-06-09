/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
 */

@interface STYSignpostsMonitor : NSObject {
    unsigned int  _eventCount;
    NSDate * _lastTailspinRequest;
    NSDate * _lastTailspinRequestForDelayedNotifications;
    SignpostSupportObjectExtractor * _notificationExtractor;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_queue> * _spObjectProcessingQueue;
    unsigned int  _timeToReconnectWithDiagnosticd;
}

@property unsigned int eventCount;
@property (retain) NSDate *lastTailspinRequest;
@property (retain) NSDate *lastTailspinRequestForDelayedNotifications;
@property (retain) SignpostSupportObjectExtractor *notificationExtractor;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSObject<OS_dispatch_queue> *spObjectProcessingQueue;
@property unsigned int timeToReconnectWithDiagnosticd;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (unsigned int)eventCount;
- (id)initPrivate;
- (id)lastTailspinRequest;
- (id)lastTailspinRequestForDelayedNotifications;
- (bool)monitorSignposts:(bool)arg1;
- (id)notificationExtractor;
- (void)notificationStreamTerminated:(id)arg1 unmatchedIntervalStarts:(id)arg2;
- (void)perfProblemDetected:(id)arg1;
- (void)processInterval:(id)arg1;
- (id)processingQueue;
- (void)setEventCount:(unsigned int)arg1;
- (void)setLastTailspinRequest:(id)arg1;
- (void)setLastTailspinRequestForDelayedNotifications:(id)arg1;
- (void)setNotificationExtractor:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setSpObjectProcessingQueue:(id)arg1;
- (void)setTimeToReconnectWithDiagnosticd:(unsigned int)arg1;
- (void)setupNotificationPipeline;
- (id)spObjectProcessingQueue;
- (bool)startListeningForNotifications;
- (void)stopMonitoringSignposts;
- (unsigned int)timeToReconnectWithDiagnosticd;

@end
