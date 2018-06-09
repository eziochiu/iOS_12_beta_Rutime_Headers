/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGroupSessionParticipantUpdate : NSObject {
    NSData * _clientContextData;
    NSUUID * _groupUUID;
    NSArray * _members;
    NSData * _participantData;
    NSString * _participantDestinationID;
    NSDictionary * _participantIDs;
    unsigned long long  _participantIdentifier;
    unsigned long long  _participantUpdateType;
    NSUUID * _relaySessionID;
}

@property (nonatomic, readonly) NSData *clientContextData;
@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, readonly) NSArray *members;
@property (nonatomic, readonly) NSData *participantData;
@property (nonatomic, readonly) NSString *participantDestinationID;
@property (nonatomic, readonly) NSDictionary *participantIDs;
@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) unsigned long long participantUpdateType;
@property (nonatomic, readonly) NSUUID *relaySessionID;

- (void).cxx_destruct;
- (id)clientContextData;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupUUID;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 participantDestinationID:(id)arg3 participantUpdateType:(unsigned long long)arg4 participantData:(id)arg5 clientContextData:(id)arg6 members:(id)arg7 participantIDs:(id)arg8 relaySessionID:(id)arg9;
- (id)members;
- (id)participantData;
- (id)participantDestinationID;
- (id)participantIDs;
- (unsigned long long)participantIdentifier;
- (unsigned long long)participantUpdateType;
- (id)relaySessionID;

@end
