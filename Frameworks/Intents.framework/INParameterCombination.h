/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INParameterCombination : NSObject <NSSecureCoding> {
    NSString * _localizationTable;
    bool  _primary;
    NSString * _subtitleFormatString;
    NSString * _subtitleFormatStringLocID;
    bool  _supportsBackgroundExecution;
    NSString * _titleFormatString;
    NSString * _titleFormatStringLocID;
}

@property (nonatomic, copy) NSString *localizationTable;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, copy) NSString *subtitleFormatString;
@property (nonatomic, copy) NSString *subtitleFormatStringLocID;
@property (nonatomic) bool supportsBackgroundExecution;
@property (nonatomic, copy) NSString *titleFormatString;
@property (nonatomic, copy) NSString *titleFormatStringLocID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPrimary;
- (id)localizationTable;
- (void)setLocalizationTable:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setSubtitleFormatString:(id)arg1;
- (void)setSubtitleFormatStringLocID:(id)arg1;
- (void)setSupportsBackgroundExecution:(bool)arg1;
- (void)setTitleFormatString:(id)arg1;
- (void)setTitleFormatStringLocID:(id)arg1;
- (id)subtitleFormatString;
- (id)subtitleFormatStringLocID;
- (bool)supportsBackgroundExecution;
- (id)titleFormatString;
- (id)titleFormatStringLocID;

@end
