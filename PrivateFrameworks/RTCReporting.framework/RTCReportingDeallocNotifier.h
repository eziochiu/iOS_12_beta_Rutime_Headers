/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface RTCReportingDeallocNotifier : NSObject {
    <RTCReportingDeallocNotifierDelegate> * _delegate;
}

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
