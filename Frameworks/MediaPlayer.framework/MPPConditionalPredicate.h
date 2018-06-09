/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPConditionalPredicate : PBCodable <NSCopying> {
    MPPMediaPredicate * _conditionalPredicate;
    MPPMediaPredicate * _elsePredicate;
    MPPMediaPredicate * _thenPredicate;
}

@property (nonatomic, retain) MPPMediaPredicate *conditionalPredicate;
@property (nonatomic, retain) MPPMediaPredicate *elsePredicate;
@property (nonatomic, readonly) bool hasConditionalPredicate;
@property (nonatomic, readonly) bool hasElsePredicate;
@property (nonatomic, readonly) bool hasThenPredicate;
@property (nonatomic, retain) MPPMediaPredicate *thenPredicate;

- (void).cxx_destruct;
- (id)conditionalPredicate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elsePredicate;
- (bool)hasConditionalPredicate;
- (bool)hasElsePredicate;
- (bool)hasThenPredicate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionalPredicate:(id)arg1;
- (void)setElsePredicate:(id)arg1;
- (void)setThenPredicate:(id)arg1;
- (id)thenPredicate;
- (void)writeTo:(id)arg1;

@end
