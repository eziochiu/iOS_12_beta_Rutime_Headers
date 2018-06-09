/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMetaInfoCardSection : SFCardSection <NSCopying, NSSecureCoding, SFMetaInfoCardSection> {
    SFColor * _backgroundColor;
    SFImage * _badge;
    bool  _canBeHidden;
    NSURL * _contentURL;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int trending : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSURL * _hostPageURL;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    bool  _trending;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, retain) SFImage *badge;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, copy) NSURL *hostPageURL;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool trending;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)badge;
- (bool)canBeHidden;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (bool)hasTrending;
- (id)hostPageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentURL:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHostPageURL:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrending:(bool)arg1;
- (void)setType:(id)arg1;
- (bool)trending;
- (id)type;

@end
