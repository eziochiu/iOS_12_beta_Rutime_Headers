/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionPacketAccumulator : NSObject {
    unsigned long long  _currentLength;
    NSMutableOrderedSet * _packets;
}

- (void).cxx_destruct;
- (id)init;
- (id)mergePacket:(id)arg1;

@end
