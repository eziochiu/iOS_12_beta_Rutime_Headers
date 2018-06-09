/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAnalyticsReportingContainer : NSObject <SXAnalyticsReportingContainer> {
    <SXAnalyticsReporting> * _analyticsReporting;
}

@property (nonatomic, readonly) <SXAnalyticsReporting> *analyticsReporting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsReporting;
- (void)registerAnalyticsReporting:(id)arg1;

@end