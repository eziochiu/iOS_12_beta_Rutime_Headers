/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceAvailabilityJob : PLDaemonJob {
    NSArray * _cancelledRequestIdentifiers;
    NSMutableArray * _requests;
}

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)cancelAll;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (bool)shouldRunOnDaemonSerialQueue;

@end
