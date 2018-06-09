/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityContainerMonitor : NSObject {
    PFUbiquityContainerIdentifier * _containerIdentifier;
    int  _containerState;
    <NSObject><NSCopying><NSCoding> * _currentIdentityToken;
    bool  _hasScheduledCheckBlock;
    NSString * _identityTokenOverride;
    NSString * _localPeerID;
    int  _monitorState;
    NSObject<OS_dispatch_queue> * _processingQueue;
    int  _scheduleSpinLock;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (nonatomic, readonly) PFUbiquityContainerIdentifier *containerIdentifier;
@property (nonatomic) int containerState;
@property (nonatomic, readonly) <NSObject><NSCopying><NSCoding> *currentIdentityToken;
@property (nonatomic) int monitorState;

- (void)_applicationResumed:(id)arg1;
- (void)checkStoresAndContainer:(id)arg1;
- (void)containerDeleteDetected:(id)arg1;
- (id)containerIdentifier;
- (int)containerState;
- (id)currentIdentityToken;
- (void)dealloc;
- (id)description;
- (void)didChangeContainerIdentifier:(unsigned long long)arg1;
- (void)didChangeContainerState;
- (void)didChangeMonitorState;
- (id)init;
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (int)monitorState;
- (void)scheduleCheckBlock:(id)arg1;
- (void)setContainerIdentifier:(id)arg1 transitionType:(unsigned long long)arg2;
- (void)setContainerState:(int)arg1;
- (void)setMonitorState:(int)arg1;
- (bool)startMonitor:(id*)arg1;
- (void)stopMonitor;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)willChangeContainerIdentifier:(unsigned long long)arg1;
- (void)willChangeContainerState;
- (void)willChangeMonitorState;

@end
