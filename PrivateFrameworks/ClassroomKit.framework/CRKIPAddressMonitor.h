/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIPAddressMonitor : NSObject {
    <CRKIPAddressMonitorDelegate> * _delegate;
    int  mNetworkChangeNotificationToken;
}

@property (nonatomic, readonly) unsigned int address;
@property (nonatomic, readonly, copy) NSString *addressString;
@property (nonatomic) <CRKIPAddressMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned int)address;
- (id)addressString;
- (void)dealloc;
- (id)delegate;
- (void)delegateNetworkDidChange;
- (id)init;
- (void)networkDidChange;
- (void)setDelegate:(id)arg1;

@end
