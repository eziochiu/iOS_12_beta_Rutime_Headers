/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NanoPhoneVoicemailTranscript : PBCodable <NSCopying> {
    NSString * _transcriptionString;
    long long  _voicemailNumber;
}

@property (nonatomic, readonly) bool hasTranscriptionString;
@property (nonatomic, retain) NSString *transcriptionString;
@property (nonatomic) long long voicemailNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTranscriptionString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTranscriptionString:(id)arg1;
- (void)setVoicemailNumber:(long long)arg1;
- (id)transcriptionString;
- (long long)voicemailNumber;
- (void)writeTo:(id)arg1;

@end
