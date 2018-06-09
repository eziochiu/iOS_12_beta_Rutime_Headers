/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISMachineDataSyncOperation : ISOperation {
    unsigned long long  _accountID;
    bool  _allowsBootstrapCellularData;
    bool  _hidesServerDrivenDialogs;
    NSData * _inputData;
    long long  _protocolVersion;
    NSString * _syncState;
    NSString * _userAgent;
}

@property bool allowsBootstrapCellularData;
@property bool hidesServerDrivenDialogs;
@property long long protocolVersion;
@property (readonly) NSString *syncState;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (id)_newSyncOperationWithClientData:(id)arg1 machineIDData:(id)arg2;
- (bool)allowsBootstrapCellularData;
- (bool)hidesServerDrivenDialogs;
- (id)initWithAccountIdentifier:(unsigned long long)arg1 syncData:(id)arg2;
- (long long)protocolVersion;
- (void)run;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setHidesServerDrivenDialogs:(bool)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)setUserAgent:(id)arg1;
- (id)syncState;
- (id)userAgent;

@end
