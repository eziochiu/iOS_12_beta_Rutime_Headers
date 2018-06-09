/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCChannelMembership : NSObject {
    NSString * _channelID;
    NSString * _draftListID;
    FCInterestToken * _interestToken;
    bool  _isAllowedToSeeDrafts;
    NTPBChannelMembershipRecord * _record;
}

@property (nonatomic, retain) NSString *channelID;
@property (nonatomic, retain) NSString *draftListID;
@property (nonatomic, retain) FCInterestToken *interestToken;
@property (nonatomic) bool isAllowedToSeeDrafts;
@property (nonatomic, retain) NTPBChannelMembershipRecord *record;

- (void).cxx_destruct;
- (id)channelID;
- (id)draftListID;
- (unsigned long long)hash;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;
- (id)interestToken;
- (bool)isAllowedToSeeDrafts;
- (bool)isEqual:(id)arg1;
- (id)record;
- (void)setChannelID:(id)arg1;
- (void)setDraftListID:(id)arg1;
- (void)setInterestToken:(id)arg1;
- (void)setIsAllowedToSeeDrafts:(bool)arg1;
- (void)setRecord:(id)arg1;

@end
