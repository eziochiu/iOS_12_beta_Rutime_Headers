/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSMutableArray * _currentResidentDevices;
    bool  _firstFetchComplete;
    HMDHome * _home;
    bool  _pendingRequestDataFromResident;
    HMDSharedHomeUpdateSession * _pendingRequestDataFromResidentSession;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *currentResidentDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstFetchComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) bool pendingRequestDataFromResident;
@property (nonatomic, retain) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_evaluateNeedForSync;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1;
- (void)_requestDataFromResident:(id)arg1 currentUser:(id)arg2;
- (void)_startRequestForDataSync;
- (void)_updateResidents;
- (void)configureWithHome:(id)arg1;
- (id)currentResidentDevices;
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (bool)firstFetchComplete;
- (void)handleHomeDataFetchedNotification:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (bool)pendingRequestDataFromResident;
- (id)pendingRequestDataFromResidentSession;
- (void)pendingRequestFromResidentChanged;
- (id)propertyQueue;
- (void)receivedHomeDataFromSourceVersion:(id)arg1;
- (void)reevaluateNeedForSync;
- (void)registerForMessages;
- (void)requestDataSync;
- (void)residentsChanged:(id)arg1;
- (void)setCurrentResidentDevices:(id)arg1;
- (void)setFirstFetchComplete:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setPendingRequestDataFromResident:(bool)arg1;
- (void)setPendingRequestDataFromResidentSession:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end