/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalieData : CMLogItem <HDCoreMotionDatum> {
    long long  fActivityType;
    double  fBasalNatalies;
    double  fMets;
    double  fNatalies;
    long long  fRecordId;
    NSUUID * fSourceId;
    double  fStartDate;
}

@property (nonatomic, readonly) long long activityType;
@property (nonatomic, readonly) NSNumber *basalNatalies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSNumber *natalies;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) long long session;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (id)maxNatalieEntries;
+ (bool)supportsSecureCoding;

- (long long)activityType;
- (id)basalNatalies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;
- (id)mets;
- (id)natalies;
- (long long)recordId;
- (long long)session;
- (id)sourceId;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (double)hd_activeNatalies;
- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (long long)hd_recordID;
- (id)hd_sourceID;
- (id)hd_unitForType:(id)arg1;

@end
