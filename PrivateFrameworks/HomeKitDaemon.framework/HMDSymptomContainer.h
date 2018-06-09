/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSymptomContainer : NSObject {
    NSSet * _broadcastedSymptoms;
    <HMDAccessorySymptomsDelegate> * _delegate;
    NSSet * _localSymptoms;
}

@property (nonatomic, copy) NSSet *broadcastedSymptoms;
@property (nonatomic) <HMDAccessorySymptomsDelegate> *delegate;
@property (nonatomic, copy) NSSet *localSymptoms;

- (void).cxx_destruct;
- (id)broadcastedSymptoms;
- (id)delegate;
- (id)init;
- (id)localSymptoms;
- (void)setBroadcastedSymptoms:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalSymptoms:(id)arg1;

@end
