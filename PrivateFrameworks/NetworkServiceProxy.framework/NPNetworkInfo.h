/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPNetworkInfo : NSObject <NSSecureCoding> {
    NSArray * _currentLatencyMap;
    NSArray * _edgeLatencies;
    NPEdgeSelection * _edgeSelection;
    bool  _isProbeInProgress;
    unsigned int  _lastFailureReason;
    NSDate * _lastUsed;
    NSDate * _lastVisited;
    NSDate * _probeRateLimit;
}

@property (retain) NSArray *currentLatencyMap;
@property (retain) NSArray *edgeLatencies;
@property (retain) NPEdgeSelection *edgeSelection;
@property bool isProbeInProgress;
@property unsigned int lastFailureReason;
@property (retain) NSDate *lastUsed;
@property (readonly) NSString *lastUsedDesc;
@property (retain) NSDate *lastVisited;
@property (readonly) NSString *lastVisitedDesc;
@property (retain) NSDate *probeRateLimit;

+ (long long)failureReasonToFallbackReason:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareLastVisited:(id)arg1;
- (id)currentLatencyMap;
- (id)edgeLatencies;
- (id)edgeSelection;
- (void)encodeWithCoder:(id)arg1;
- (void)handleTFOFailedForAddressFamily:(unsigned char)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(struct networkParameters { bool x1; bool x2; bool x3; }*)arg3 requireUniqueEdges:(bool)arg4;
- (bool)isProbeInProgress;
- (unsigned int)lastFailureReason;
- (id)lastUsed;
- (id)lastUsedDesc;
- (id)lastVisited;
- (id)lastVisitedDesc;
- (void)mergeNewLatencies:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)probeRateLimit;
- (void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(struct networkParameters { bool x1; bool x2; bool x3; }*)arg3;
- (void)resortEdgeLatenciesUsingComparator:(id /* block */)arg1;
- (void)setCurrentLatencyMap:(id)arg1;
- (void)setEdgeLatencies:(id)arg1;
- (void)setEdgeSelection:(id)arg1;
- (void)setIsProbeInProgress:(bool)arg1;
- (void)setLastFailureReason:(unsigned int)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setLastVisited:(id)arg1;
- (void)setProbeRateLimit:(id)arg1;

@end
