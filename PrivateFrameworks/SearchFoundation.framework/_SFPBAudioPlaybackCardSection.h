/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBAudioPlaybackCardSection : PBCodable <NSSecureCoding, _SFPBAudioPlaybackCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    _SFPBRichText * _detailText;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _playCommands;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    int  _state;
    NSArray * _stopCommands;
    _SFPBRichText * _subtitle;
    _SFPBImage * _thumbnail;
    _SFPBRichText * _title;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBRichText *detailText;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *playCommands;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int state;
@property (nonatomic, copy) NSArray *stopCommands;
@property (nonatomic, retain) _SFPBRichText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBImage *thumbnail;
@property (nonatomic, retain) _SFPBRichText *title;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPlayCommands:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)addStopCommands:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearPlayCommands;
- (void)clearPunchoutOptions;
- (void)clearStopCommands;
- (id)detailText;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)playCommands;
- (id)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetailText:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPlayCommands:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setState:(int)arg1;
- (void)setStopCommands:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (int)state;
- (id)stopCommands;
- (id)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
- (id)subtitle;
- (id)thumbnail;
- (id)title;
- (id)type;
- (void)writeTo:(id)arg1;

@end
