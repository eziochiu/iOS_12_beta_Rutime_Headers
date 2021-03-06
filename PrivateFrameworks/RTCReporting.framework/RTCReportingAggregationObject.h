/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {
    id /* block */  _aggregationBlock;
}

- (void)dealloc;
- (id)initWithAggregationBlock:(id /* block */)arg1;
- (void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5;

@end
