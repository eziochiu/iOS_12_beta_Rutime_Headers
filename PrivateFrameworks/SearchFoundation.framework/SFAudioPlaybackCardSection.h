/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFAudioPlaybackCardSection : SFCardSection <NSCopying, NSSecureCoding, SFAudioPlaybackCardSection> {
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    SFRichText * _detailText;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int state : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _playCommands;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    int  _state;
    NSArray * _stopCommands;
    SFRichText * _subtitle;
    SFImage * _thumbnail;
    SFRichText * _title;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SFRichText *detailText;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *playCommands;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int state;
@property (nonatomic, copy) NSArray *stopCommands;
@property (nonatomic, retain) SFRichText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFRichText *title;
@property (nonatomic, copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailText;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasSeparatorStyle;
- (bool)hasState;
- (bool)hasTopPadding;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)playCommands;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
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
- (id)subtitle;
- (id)thumbnail;
- (id)title;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end
