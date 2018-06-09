/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback {
    NSDictionary * _networkTimingData;
    long long  _responseSize;
    long long  _statusCode;
}

@property (nonatomic, copy) NSDictionary *networkTimingData;
@property (nonatomic) long long responseSize;
@property (nonatomic) long long statusCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 networkTimingData:(id)arg4;
- (id)networkTimingData;
- (long long)responseSize;
- (void)setNetworkTimingData:(id)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(long long)arg1;
- (long long)statusCode;

@end
