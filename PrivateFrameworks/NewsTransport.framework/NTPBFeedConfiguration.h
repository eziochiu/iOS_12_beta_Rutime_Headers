/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedConfiguration : PBCodable <NSCopying> {
    NSString * _freeAFeedID;
    NSString * _freeBFeedID;
    NSString * _freeCFeedID;
    NSString * _paidAFeedID;
    NSString * _paidBFeedID;
    NSString * _paidCFeedID;
}

@property (nonatomic, retain) NSString *freeAFeedID;
@property (nonatomic, retain) NSString *freeBFeedID;
@property (nonatomic, retain) NSString *freeCFeedID;
@property (nonatomic, readonly) bool hasFreeAFeedID;
@property (nonatomic, readonly) bool hasFreeBFeedID;
@property (nonatomic, readonly) bool hasFreeCFeedID;
@property (nonatomic, readonly) bool hasPaidAFeedID;
@property (nonatomic, readonly) bool hasPaidBFeedID;
@property (nonatomic, readonly) bool hasPaidCFeedID;
@property (nonatomic, retain) NSString *paidAFeedID;
@property (nonatomic, retain) NSString *paidBFeedID;
@property (nonatomic, retain) NSString *paidCFeedID;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)freeAFeedID;
- (id)freeBFeedID;
- (id)freeCFeedID;
- (bool)hasFreeAFeedID;
- (bool)hasFreeBFeedID;
- (bool)hasFreeCFeedID;
- (bool)hasPaidAFeedID;
- (bool)hasPaidBFeedID;
- (bool)hasPaidCFeedID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paidAFeedID;
- (id)paidBFeedID;
- (id)paidCFeedID;
- (bool)readFrom:(id)arg1;
- (void)setFreeAFeedID:(id)arg1;
- (void)setFreeBFeedID:(id)arg1;
- (void)setFreeCFeedID:(id)arg1;
- (void)setPaidAFeedID:(id)arg1;
- (void)setPaidBFeedID:(id)arg1;
- (void)setPaidCFeedID:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)feedConfigurationFromDict:(id)arg1;
+ (id)feedConfigurationFromJSON:(id)arg1;

- (id)feedIDForBin:(long long)arg1 paid:(bool)arg2;

@end
