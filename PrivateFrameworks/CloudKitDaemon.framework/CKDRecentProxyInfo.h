/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecentProxyInfo : NSObject {
    unsigned long long  _connectionCount;
    NSMutableSet * _containerIdentifiers;
    NSDate * _lastSeen;
    NSMutableDictionary * _operationStatisticsByClassName;
    NSString * _processName;
}

@property (readonly) unsigned long long connectionCount;
@property (nonatomic, readonly) NSMutableSet *containerIdentifiers;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, readonly) NSMutableDictionary *operationStatisticsByClassName;
@property (nonatomic, readonly) NSString *processName;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (unsigned long long)connectionCount;
- (id)containerIdentifiers;
- (id)initWithProxy:(id)arg1;
- (id)lastSeen;
- (void)mergeProxy:(id)arg1;
- (id)operationStatisticsByClassName;
- (id)processName;

@end