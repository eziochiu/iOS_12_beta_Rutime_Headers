/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayActivityNetworkRequestOperation : WLKNetworkRequestOperation {
    UWLMessageWireEnvelope * _playActivityProto;
}

+ (id)playActivityURL;

- (void).cxx_destruct;
- (id)_requestPropertiesWithServerRouteKey:(id)arg1 queryParameters:(id)arg2 additionalHeaderFields:(id)arg3;
- (id)initWithMessageEnvelope:(id)arg1;
- (id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3;
- (id)nextExpectedReportMillis;

@end
