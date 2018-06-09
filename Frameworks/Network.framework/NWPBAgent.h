/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWPBAgent : PBCodable <NSCopying> {
    bool  _active;
    NWPBAgentClass * _agentClass;
    NSData * _agentData;
    NSString * _agentDescription;
    NSString * _agentIdentifier;
    struct { 
        unsigned int active : 1; 
        unsigned int networkProvider : 1; 
        unsigned int nexusProvider : 1; 
        unsigned int userActivated : 1; 
        unsigned int voluntary : 1; 
    }  _has;
    bool  _networkProvider;
    bool  _nexusProvider;
    bool  _userActivated;
    bool  _voluntary;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) NWPBAgentClass *agentClass;
@property (nonatomic, retain) NSData *agentData;
@property (nonatomic, retain) NSString *agentDescription;
@property (nonatomic, retain) NSString *agentIdentifier;
@property (nonatomic) bool hasActive;
@property (nonatomic, readonly) bool hasAgentClass;
@property (nonatomic, readonly) bool hasAgentData;
@property (nonatomic, readonly) bool hasAgentDescription;
@property (nonatomic, readonly) bool hasAgentIdentifier;
@property (nonatomic) bool hasNetworkProvider;
@property (nonatomic) bool hasNexusProvider;
@property (nonatomic) bool hasUserActivated;
@property (nonatomic) bool hasVoluntary;
@property (nonatomic) bool networkProvider;
@property (nonatomic) bool nexusProvider;
@property (nonatomic) bool userActivated;
@property (nonatomic) bool voluntary;

- (void).cxx_destruct;
- (bool)active;
- (id)agentClass;
- (id)agentData;
- (id)agentDescription;
- (id)agentIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActive;
- (bool)hasAgentClass;
- (bool)hasAgentData;
- (bool)hasAgentDescription;
- (bool)hasAgentIdentifier;
- (bool)hasNetworkProvider;
- (bool)hasNexusProvider;
- (bool)hasUserActivated;
- (bool)hasVoluntary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)networkProvider;
- (bool)nexusProvider;
- (bool)readFrom:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAgentClass:(id)arg1;
- (void)setAgentData:(id)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentIdentifier:(id)arg1;
- (void)setHasActive:(bool)arg1;
- (void)setHasNetworkProvider:(bool)arg1;
- (void)setHasNexusProvider:(bool)arg1;
- (void)setHasUserActivated:(bool)arg1;
- (void)setHasVoluntary:(bool)arg1;
- (void)setNetworkProvider:(bool)arg1;
- (void)setNexusProvider:(bool)arg1;
- (void)setUserActivated:(bool)arg1;
- (void)setVoluntary:(bool)arg1;
- (bool)userActivated;
- (bool)voluntary;
- (void)writeTo:(id)arg1;

@end
