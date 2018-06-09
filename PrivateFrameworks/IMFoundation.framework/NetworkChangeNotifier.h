/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface NetworkChangeNotifier : NSObject <IMConnectionMonitorDelegate, IMSystemMonitorListener> {
    IMConnectionMonitor * _connectionMonitor;
    bool  _lastPostedNetworkUp;
    NSString * _myIP;
    NSArray * _myIPs;
    struct __SCDynamicStore { } * _store;
}

@property (nonatomic, retain) IMConnectionMonitor *connectionMonitor;
@property (nonatomic, readonly) struct __SCDynamicStore { }*getDynamicStore;
@property (nonatomic, readonly) bool isNetworkUp;
@property (nonatomic) bool lastPostedNetworkUp;
@property (nonatomic, readonly) NSString *myGatewayAddress;
@property (nonatomic, retain) NSString *myIP;
@property (nonatomic, readonly) NSString *myIPAddress;
@property (nonatomic, readonly) NSArray *myIPAddresses;
@property (nonatomic, retain) NSArray *myIPs;
@property (nonatomic) struct __SCDynamicStore { }*store;

+ (void)disableNotifications;
+ (bool)enableNotifications;
+ (id)sharedInstance;

- (void)_clearIPCache;
- (bool)_listenForChanges;
- (id)connectionMonitor;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (struct __SCDynamicStore { }*)getDynamicStore;
- (id)init;
- (bool)isNetworkUp;
- (bool)isPrimaryCellular;
- (bool)lastPostedNetworkUp;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1;
- (int)linkQualityValueForInterface:(id)arg1;
- (int)linkQualityValueForInterfaceType:(unsigned long long)arg1;
- (id)myGatewayAddress;
- (id)myIP;
- (id)myIPAddress;
- (id)myIPAddresses;
- (id)myIPs;
- (id)primaryInterfaceName;
- (void)setConnectionMonitor:(id)arg1;
- (void)setLastPostedNetworkUp:(bool)arg1;
- (void)setMyIP:(id)arg1;
- (void)setMyIPs:(id)arg1;
- (void)setStore:(struct __SCDynamicStore { }*)arg1;
- (struct __SCDynamicStore { }*)store;
- (void)systemDidWake;
- (void)systemWillSleep;

@end
