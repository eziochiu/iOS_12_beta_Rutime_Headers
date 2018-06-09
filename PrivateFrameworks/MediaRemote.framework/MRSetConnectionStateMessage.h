/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int state;

- (unsigned long long)encryptionType;
- (id)initWithConnectionState:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned long long)type;

@end
