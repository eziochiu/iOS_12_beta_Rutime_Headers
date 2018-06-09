/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSConnection : NSObject {
    _IDSConnection * _internal;
}

@property (nonatomic, readonly) _IDSConnection *_internal;
@property (nonatomic, readonly) IDSAccount *account;
@property (nonatomic, readonly) bool isActive;

+ (id)_connectionWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(bool)arg3;

- (void).cxx_destruct;
- (id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(bool)arg3;
- (id)_internal;
- (id)account;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 commands:(id)arg2;
- (bool)isActive;
- (void)removeDelegate:(id)arg1;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;

@end
