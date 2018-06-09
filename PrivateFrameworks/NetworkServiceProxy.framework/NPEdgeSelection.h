/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPEdgeSelection : EdgeSelection {
    NSString * _bestEdge;
    unsigned long long  _bestEdgeProbedRTT;
    unsigned long long  _bestEdgeRTT;
    NSString * _nextBestEdge;
    unsigned long long  _nextBestEdgeRTT;
    NSDate * _probeDate;
    NPWaldo * _waldoInfo;
}

@property (retain) NSString *bestEdge;
@property unsigned long long bestEdgeProbedRTT;
@property unsigned long long bestEdgeRTT;
@property (retain) NSString *nextBestEdge;
@property unsigned long long nextBestEdgeRTT;
@property (retain) NSDate *probeDate;
@property (nonatomic) NPWaldo *waldoInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestEdge;
- (unsigned long long)bestEdgeProbedRTT;
- (unsigned long long)bestEdgeRTT;
- (id)copyEdgeSelectionTelemetry;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getBestEdgeFromEdgeSelection;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaldo:(id)arg1 signature:(id)arg2 interfaceType:(id)arg3;
- (id)nextBestEdge;
- (unsigned long long)nextBestEdgeRTT;
- (id)probeDate;
- (void)setBestEdge:(id)arg1;
- (void)setBestEdgeProbedRTT:(unsigned long long)arg1;
- (void)setBestEdgeRTT:(unsigned long long)arg1;
- (void)setNextBestEdge:(id)arg1;
- (void)setNextBestEdgeRTT:(unsigned long long)arg1;
- (void)setProbeDate:(id)arg1;
- (void)setWaldoInfo:(id)arg1;
- (bool)shouldProbeForEdgeSelection:(id)arg1 edgeRank:(long long*)arg2 edgeIndex:(long long*)arg3 bestEdgeLabel:(id*)arg4;
- (void)trainEdgeSelection:(id)arg1 edgeRank:(unsigned long long)arg2 rtt:(unsigned long long)arg3;
- (void)updateEdgeSelection:(unsigned long long)arg1;
- (id)waldoInfo;

@end
