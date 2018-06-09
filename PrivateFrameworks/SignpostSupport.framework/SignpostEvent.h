/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostEvent : SignpostObject <SignpostSupportLoggingSupportArchiveEvent> {
    bool  __hasTotalFrames;
    unsigned long long  __machContinuousTimestamp;
    unsigned long long  __totalFrameCount;
    unsigned long long  _eventType;
    bool  _isAnimationStart;
    NSString * _metadata;
    NSArray * _metadataSegments;
    unsigned long long  _overridingBeginMachContinuousTime;
    unsigned long long  _overridingEmitMachContinuousTime;
    unsigned long long  _overridingEndMachContinuousTime;
    int  _processID;
    NSString * _processImagePath;
    NSUUID * _processImageUUID;
    NSString * _processName;
    unsigned long long  _processUniqueID;
    unsigned long long  _threadID;
}

@property (nonatomic) bool _hasTotalFrames;
@property (nonatomic, readonly) NSString *_key;
@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (nonatomic) unsigned long long _totalFrameCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimationStart;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic, retain) NSArray *metadataSegments;
@property (nonatomic, readonly) bool overridesBeginTime;
@property (nonatomic, readonly) bool overridesEmitTime;
@property (nonatomic, readonly) bool overridesEndTime;
@property (nonatomic, readonly) bool overridesTime;
@property (nonatomic) unsigned long long overridingBeginMachContinuousTime;
@property (nonatomic, readonly) unsigned long long overridingBeginNanoseconds;
@property (nonatomic) unsigned long long overridingEmitMachContinuousTime;
@property (nonatomic, readonly) unsigned long long overridingEmitNanoseconds;
@property (nonatomic) unsigned long long overridingEndMachContinuousTime;
@property (nonatomic, readonly) unsigned long long overridingEndNanoseconds;
@property (nonatomic) int processID;
@property (nonatomic, retain) NSString *processImagePath;
@property (nonatomic, retain) NSUUID *processImageUUID;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned long long processUniqueID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long threadID;
@property (nonatomic, readonly) unsigned long long timeRecordedMachContinuousTime;
@property (nonatomic, readonly) unsigned long long timeRecordedNanoseconds;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (bool)_hasTotalFrames;
- (id)_key;
- (unsigned long long)_machContinuousTimestamp;
- (bool)_overridesOwnTime;
- (unsigned long long)_resolvedTime;
- (unsigned long long)_totalFrameCount;
- (id)debugDescription;
- (id)descriptionStringForColumn:(unsigned long long)arg1 timeInSeconds:(bool)arg2;
- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)eventType;
- (id)initWithDictionary:(id)arg1;
- (bool)isAnimationStart;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)metadataSegments;
- (bool)overridesBeginTime;
- (bool)overridesEmitTime;
- (bool)overridesEndTime;
- (bool)overridesTime;
- (unsigned long long)overridingBeginMachContinuousTime;
- (unsigned long long)overridingBeginNanoseconds;
- (unsigned long long)overridingEmitMachContinuousTime;
- (unsigned long long)overridingEmitNanoseconds;
- (unsigned long long)overridingEndMachContinuousTime;
- (unsigned long long)overridingEndNanoseconds;
- (int)processID;
- (id)processImagePath;
- (id)processImageUUID;
- (id)processName;
- (unsigned long long)processUniqueID;
- (id)serializeableDictionary;
- (void)setEventType:(unsigned long long)arg1;
- (void)setIsAnimationStart:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataSegments:(id)arg1;
- (void)setOverridingBeginMachContinuousTime:(unsigned long long)arg1;
- (void)setOverridingEmitMachContinuousTime:(unsigned long long)arg1;
- (void)setOverridingEndMachContinuousTime:(unsigned long long)arg1;
- (void)setProcessID:(int)arg1;
- (void)setProcessImagePath:(id)arg1;
- (void)setProcessImageUUID:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setProcessUniqueID:(unsigned long long)arg1;
- (void)setThreadID:(unsigned long long)arg1;
- (void)set_hasTotalFrames:(bool)arg1;
- (void)set_machContinuousTimestamp:(unsigned long long)arg1;
- (void)set_totalFrameCount:(unsigned long long)arg1;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)threadID;
- (unsigned long long)timeRecordedMachContinuousTime;
- (unsigned long long)timeRecordedNanoseconds;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (unsigned long long)_extractValuesFromStr:(const char *)arg1 strlen:(unsigned long long)arg2 startIndex:(unsigned long long)arg3 results:(struct metadata_parsing_results { char *x1; char *x2; char *x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; }*)arg4;
- (id)_parseMetadata:(id)arg1;
- (bool)_processName:(id)arg1 formatterName:(id)arg2 formatType:(id)arg3 value:(id)arg4;
- (id)initWithOSLogEventProxy:(id)arg1;

@end
