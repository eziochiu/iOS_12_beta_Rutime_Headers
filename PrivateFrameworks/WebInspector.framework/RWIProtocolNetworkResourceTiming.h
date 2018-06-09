/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (nonatomic) double connectEnd;
@property (nonatomic) double connectStart;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) double requestStart;
@property (nonatomic) double responseStart;
@property (nonatomic) double secureConnectionStart;
@property (nonatomic) double startTime;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (double)connectEnd;
- (double)connectStart;
- (double)domainLookupEnd;
- (double)domainLookupStart;
- (id)initWithStartTime:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8;
- (double)requestStart;
- (double)responseStart;
- (double)secureConnectionStart;
- (void)setConnectEnd:(double)arg1;
- (void)setConnectStart:(double)arg1;
- (void)setDomainLookupEnd:(double)arg1;
- (void)setDomainLookupStart:(double)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseStart:(double)arg1;
- (void)setSecureConnectionStart:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_networkResourceTimingFromData:(id)arg1 referenceStartDate:(id)arg2;
+ (id)safe_initWithStartTime:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8;

@end
