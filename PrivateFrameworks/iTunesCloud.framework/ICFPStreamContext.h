/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFPStreamContext : NSObject {
    unsigned long long  _accountID;
    struct FPStreamOpaque_ { } * _fpStreamRef;
    NSData * _playerInfoContextRequestData;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly, copy) NSData *playerInfoContextRequestData;

- (void).cxx_destruct;
- (unsigned long long)accountID;
- (void)dealloc;
- (bool)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg1 returningData:(id*)arg2 error:(id*)arg3;
- (bool)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg1 returningData:(id*)arg2 error:(id*)arg3;
- (id)initWithVersion:(unsigned int)arg1 contextID:(unsigned int)arg2 contentInfo:(id)arg3 returningError:(id*)arg4;
- (id)playerInfoContextRequestData;

@end
