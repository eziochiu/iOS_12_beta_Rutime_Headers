/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSessionTaskState : GEOCapturedState {
    long long  _completedSubtaskPointer;
    double  _endTime;
    double  _now;
    unsigned long long  _outgoingPayloadSize;
    long long  _rawPointer;
    int  _requestKind;
    double  _startTime;
    unsigned int  _taskIdentifier;
    long long  _urlTaskPointer;
    long long  _xpcTaskPointer;
}

+ (const char *)decoderType;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
