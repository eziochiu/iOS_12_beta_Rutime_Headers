/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncPeerInfo : NSObject {
    _DKSyncPeer * _peer;
    long long  _transports;
    NSString * _transportsString;
    NSUUID * _uuid;
}

@property (nonatomic, retain) _DKSyncPeer *peer;
@property (nonatomic) long long transports;
@property (nonatomic, retain) NSString *transportsString;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)peer;
- (void)setPeer:(id)arg1;
- (void)setTransports:(long long)arg1;
- (void)setTransportsString:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)transports;
- (id)transportsString;
- (id)uuid;

@end