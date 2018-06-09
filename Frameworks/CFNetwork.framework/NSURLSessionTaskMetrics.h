/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTaskMetrics : NSObject

@property unsigned long long redirectCount;
@property (copy) NSDateInterval *taskInterval;
@property (copy) NSArray *transactionMetrics;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (id)_initWithTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNoInit;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_clientMetrics;
- (id)_geo_remoteAddressAndPort;

@end