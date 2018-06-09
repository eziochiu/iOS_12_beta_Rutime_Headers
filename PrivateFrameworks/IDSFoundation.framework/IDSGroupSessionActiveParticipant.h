/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGroupSessionActiveParticipant : NSObject {
    NSUUID * _groupUUID;
    bool  _isKnown;
    unsigned long long  _participantIdentifier;
    NSString * _participantURI;
}

@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, readonly) bool isKnown;
@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) NSString *participantURI;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupUUID;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(bool)arg3 participantURI:(id)arg4;
- (bool)isKnown;
- (unsigned long long)participantIdentifier;
- (id)participantURI;

@end
