/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NetworkServiceProxyControlRequestStats : NSObject <NSSecureCoding> {
    long long  _interface_type;
    long long  _protocol_type;
    unsigned int  _request_count;
    int  _request_type;
    NetworkServiceProxyRespTimeBuckets * _response_time_buckets;
    unsigned int  _result_certificate_failure_count;
    unsigned int  _result_connection_reset_count;
    unsigned int  _result_network_unavailable_count;
    unsigned int  _result_response_timeout_count;
    unsigned int  _result_send_failure_count;
    unsigned int  _result_server_unreachable_count;
    unsigned int  _result_success_count;
    unsigned int  _result_unknown_error_count;
}

@property long long interface_type;
@property long long protocol_type;
@property unsigned int request_count;
@property int request_type;
@property (retain) NetworkServiceProxyRespTimeBuckets *response_time_buckets;
@property unsigned int result_certificate_failure_count;
@property unsigned int result_connection_reset_count;
@property unsigned int result_network_unavailable_count;
@property unsigned int result_response_timeout_count;
@property unsigned int result_send_failure_count;
@property unsigned int result_server_unreachable_count;
@property unsigned int result_success_count;
@property unsigned int result_unknown_error_count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)getAWDMetric;
- (void)incrErrorResult:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interface_type;
- (long long)protocol_type;
- (unsigned int)request_count;
- (int)request_type;
- (id)response_time_buckets;
- (unsigned int)result_certificate_failure_count;
- (unsigned int)result_connection_reset_count;
- (unsigned int)result_network_unavailable_count;
- (unsigned int)result_response_timeout_count;
- (unsigned int)result_send_failure_count;
- (unsigned int)result_server_unreachable_count;
- (unsigned int)result_success_count;
- (unsigned int)result_unknown_error_count;
- (void)setInterface_type:(long long)arg1;
- (void)setProtocol_type:(long long)arg1;
- (void)setRequest_count:(unsigned int)arg1;
- (void)setRequest_type:(int)arg1;
- (void)setResponse_time_buckets:(id)arg1;
- (void)setResult_certificate_failure_count:(unsigned int)arg1;
- (void)setResult_connection_reset_count:(unsigned int)arg1;
- (void)setResult_network_unavailable_count:(unsigned int)arg1;
- (void)setResult_response_timeout_count:(unsigned int)arg1;
- (void)setResult_send_failure_count:(unsigned int)arg1;
- (void)setResult_server_unreachable_count:(unsigned int)arg1;
- (void)setResult_success_count:(unsigned int)arg1;
- (void)setResult_unknown_error_count:(unsigned int)arg1;

@end
