/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityEventLogging : NSObject {
    NSMutableSet * _logEvents;
    long long  _logLevel;
}

@property long long logLevel;

+ (void)initialize;
+ (id)sharedEventLogger;

- (void)beginEvent:(id)arg1;
- (id)createCustomEventTrackingID:(id)arg1;
- (id)createEventTrackingID:(int)arg1;
- (void)dealloc;
- (void)debug:(id)arg1 message:(id)arg2;
- (void)diagnostic:(id)arg1 message:(id)arg2;
- (void)endEvent:(id)arg1;
- (void)error:(id)arg1 message:(id)arg2;
- (void)fatal:(id)arg1 message:(id)arg2;
- (id)incompleteEvents;
- (void)info:(id)arg1 message:(id)arg2;
- (id)init;
- (void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3;
- (void)logEventData:(id)arg1 message:(id)arg2;
- (long long)logLevel;
- (void)setLogLevel:(long long)arg1;
- (void)warning:(id)arg1 message:(id)arg2;

@end
