/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding> {
    PSYActivityInfo * _activityInfo;
    double  _activityProgress;
    unsigned long long  _activityState;
    NSError * _error;
    bool  _finishedSending;
    long long  _interruptionCount;
    bool  _sawADropout;
    unsigned long long  _startDropoutCount;
}

@property (nonatomic, readonly) PSYActivityInfo *activityInfo;
@property (nonatomic, readonly) double activityProgress;
@property (nonatomic, readonly) unsigned long long activityState;
@property (nonatomic, readonly) NSError *error;
@property (getter=isFinishedSending, nonatomic, readonly) bool finishedSending;
@property (nonatomic, readonly) long long interruptionCount;
@property (nonatomic, readonly) bool sawADropout;
@property (nonatomic, readonly) unsigned long long startDropoutCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityInfo;
- (double)activityProgress;
- (unsigned long long)activityState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithActivityInfo:(id)arg1 progress:(double)arg2 error:(id)arg3 state:(unsigned long long)arg4 finishedSending:(bool)arg5 interruptionCount:(long long)arg6 startDropoutCount:(unsigned long long)arg7 sawADropout:(bool)arg8;
- (id)initWithCoder:(id)arg1;
- (long long)interruptionCount;
- (bool)isEqual:(id)arg1;
- (bool)isFinishedSending;
- (bool)sawADropout;
- (unsigned long long)startDropoutCount;
- (id)syncSessionActivityByUpdatingProgress:(double)arg1;

@end
