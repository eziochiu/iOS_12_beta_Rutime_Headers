/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAKPerfState : NSObject {
    bool  _mostRecentSampleIsPET;
    SATimestamp * _mostRecentSampleTimestamp;
    unsigned long long  _onCore;
    struct ktrace_session { } * _session;
}

@property bool mostRecentSampleIsPET;
@property (retain) SATimestamp *mostRecentSampleTimestamp;
@property (readonly) struct ktrace_session { }*session;

+ (id)kperfStateWithSession:(struct ktrace_session { }*)arg1;

- (void).cxx_destruct;
- (id)initWithSession:(struct ktrace_session { }*)arg1;
- (bool)isNextSampleisOnCoreForCpu:(unsigned int)arg1;
- (bool)mostRecentSampleIsPET;
- (id)mostRecentSampleTimestamp;
- (void)nextSampleForCpu:(unsigned int)arg1 isOnCore:(bool)arg2;
- (struct ktrace_session { }*)session;
- (void)setMostRecentSampleIsPET:(bool)arg1;
- (void)setMostRecentSampleTimestamp:(id)arg1;

@end
