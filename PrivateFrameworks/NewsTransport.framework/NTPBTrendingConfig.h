/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTrendingConfig : PBCodable <NSCopying> {
    NSString * _fallbackLanguageTag;
    NSMutableArray * _languageConfigs;
}

@property (nonatomic, retain) NSString *fallbackLanguageTag;
@property (nonatomic, readonly) bool hasFallbackLanguageTag;
@property (nonatomic, retain) NSMutableArray *languageConfigs;

+ (Class)languageConfigsType;

- (void).cxx_destruct;
- (void)addLanguageConfigs:(id)arg1;
- (void)clearLanguageConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fallbackLanguageTag;
- (bool)hasFallbackLanguageTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageConfigs;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfigsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFallbackLanguageTag:(id)arg1;
- (void)setLanguageConfigs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
