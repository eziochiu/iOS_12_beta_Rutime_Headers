/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSEnhancedLoggingStateSnapshot : NSObject <NSCopying> {
    unsigned long long  _consent;
    NSUserDefaults * _defaults;
    NSDate * _endDate;
    NSDictionary * _metadata;
    NSArray * _queue;
    NSDate * _startDate;
    unsigned long long  _status;
}

@property (nonatomic) unsigned long long consent;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, readonly) NSDateComponents *durationRemaining;
@property (nonatomic, readonly) NSArray *encodedQueue;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly) bool needsFollowup;
@property (nonatomic, retain) NSArray *queue;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long status;

+ (id)consentToString:(unsigned long long)arg1;
+ (id)statusToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)JSONObject;
- (unsigned long long)consent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodeQueue:(id)arg1;
- (id)defaults;
- (id)description;
- (id)dictionaryRepresentationPretty:(bool)arg1;
- (id)durationRemaining;
- (id)encodedQueue;
- (id)endDate;
- (id)init;
- (id)metadata;
- (bool)needsFollowup;
- (id)queue;
- (void)refreshConsent;
- (void)refreshDates;
- (void)refreshKeyPaths:(id)arg1;
- (void)refreshMetadata;
- (void)refreshQueue;
- (void)refreshStatus;
- (void)setConsent:(unsigned long long)arg1;
- (void)setDefaults:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)status;

@end
