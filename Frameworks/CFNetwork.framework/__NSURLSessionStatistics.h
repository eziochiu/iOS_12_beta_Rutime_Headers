/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLSessionStatistics : NSObject {
    NSArray * _externallyVisibleConnectionUUIDs;
    NSUUID * _externallyVisibleNwActivity;
    void * report;
}

@property (nonatomic, readonly) unsigned int awdMetricID;
@property (nonatomic, readonly) PBCodable *awdReport;
@property (nonatomic, readonly) NSArray *connectionUUIDS;
@property (retain) NSArray *externallyVisibleConnectionUUIDs;
@property (retain) NSUUID *externallyVisibleNwActivity;
@property (nonatomic, readonly) NSUUID *nwActivity;

+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned long long x7; unsigned char x8[16]; int x9; bool x10; unsigned long long x11; struct { int x_12_1_1; long long x_12_1_2; bool x_12_1_3; bool x_12_1_4; unsigned long long x_12_1_5; unsigned long long x_12_1_6; unsigned long long x_12_1_7; unsigned long long x_12_1_8; unsigned long long x_12_1_9; unsigned long long x_12_1_10; unsigned char x_12_1_11[16]; } x12[0]; }*)createCFNetworkTaskMetrics_s:(id)arg1;
+ (void)fillCFNetworkTransactionMetricStruct:(struct { int x1; long long x2; bool x3; bool x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned char x11[16]; }*)arg1 from:(id)arg2 forTaskUUID:(unsigned char)arg3;
+ (int)getNetworkProtocol:(id)arg1;
+ (int)getTaskType:(id)arg1;
+ (void)reportMetricsToSymptoms:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (id)connectionUUIDS;
- (void)dealloc;
- (id)externallyVisibleConnectionUUIDs;
- (id)externallyVisibleNwActivity;
- (id)initWithCFNetworkReport:(void*)arg1 length:(long long)arg2;
- (id)nwActivity;
- (void)setExternallyVisibleConnectionUUIDs:(id)arg1;
- (void)setExternallyVisibleNwActivity:(id)arg1;

@end
