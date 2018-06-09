/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPHistoryReplicaMergeOptions : NSObject <MSPReplicaMergeOptions> {
    NSDate * _earliestKnownSyncDate;
    long long  _modificationDatePolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *earliestKnownSyncDate;
@property (readonly) unsigned long long hash;
@property (readonly) long long modificationDatePolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)earliestKnownSyncDate;
- (id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2;
- (long long)modificationDatePolicy;

@end