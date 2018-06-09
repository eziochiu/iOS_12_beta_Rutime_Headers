/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCellularLinkMonitor : NSObject {
    NSString * _cellularDataInterfaceName;
    NSHashTable * _cellularLinkDelegates;
    unsigned int  _cellularMTU;
    CoreTelephonyClient * _ctClient;
    <CoreTelephonyClientDataDelegate> * _ctClientDataDelegate;
    struct __CTServerConnection { } * _ctServerConnection;
    NSString * _dataIndicator;
    bool  _dataUsable;
    NSMutableDictionary * _notificationRegInfo;
    unsigned long long  _radioAccessTechnology;
}

@property (readonly) NSString *cellularDataInterfaceName;
@property (readonly) unsigned int cellularMTU;
@property (readonly) bool dataUsable;
@property (readonly) unsigned long long radioAccessTechnology;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_dataContextUsable:(id)arg1 dataStatus:(id)arg2;
- (id)_getCTXPCServiceSubscriptionContext;
- (void)_setupCTServerConnection;
- (bool)_updateCellularDataInterface;
- (bool)_updateCellularMTU;
- (void)_updateDataStatus;
- (bool)_updateRadioAccessTechnology;
- (void)addCellularLinkDelegate:(id)arg1;
- (id)cellularDataInterfaceName;
- (unsigned int)cellularMTU;
- (void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3;
- (bool)dataUsable;
- (void)dealloc;
- (bool)dropIPPackets:(id)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 isRelay:(bool)arg4;
- (id)init;
- (void)processCTConnectionStateChangeNotification:(id)arg1 connectionStatus:(id)arg2;
- (unsigned long long)radioAccessTechnology;
- (void)registerCellularDataStatusNotification:(bool)arg1;
- (void)removeCellularLinkDelegate:(id)arg1;
- (void)removePacketNotificationFilter;
- (void)reset;
- (bool)setPacketNotificationFilter:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 remote:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 uniqueTag:(unsigned int)arg3 callType:(unsigned char)arg4;
- (void)updateProtocolQualityOfService:(bool)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2;

@end
