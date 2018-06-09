/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying> {
    NSMutableArray * _preferences;
}

@property (nonatomic, retain) NSMutableArray *preferences;

+ (Class)preferencesType;

- (void).cxx_destruct;
- (void)addPreferences:(id)arg1;
- (void)clearPreferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preferences;
- (id)preferencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferencesCount;
- (bool)readFrom:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
