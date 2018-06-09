/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long packetNumber;
@property (nonatomic, copy) NSArray *packets;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)speechPacket;
+ (id)speechPacketWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)packetNumber;
- (id)packets;
- (bool)requiresResponse;
- (void)setPacketNumber:(long long)arg1;
- (void)setPackets:(id)arg1;

@end
