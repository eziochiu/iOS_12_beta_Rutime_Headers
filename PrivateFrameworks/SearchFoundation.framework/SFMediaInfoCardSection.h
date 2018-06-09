/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMediaInfoCardSection : SFCardSection <NSCopying, NSSecureCoding, SFMediaInfoCardSection> {
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _details;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int isMediaContainer : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isMediaContainer;
    SFMediaItem * _mediaItem;
    NSArray * _offers;
    SFActionItem * _playAction;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    SFRichText * _specialOfferButtonLabel;
    NSString * _type;
    NSString * _watchListButtonLabel;
    NSString * _watchListConfirmationText;
    NSString * _watchListContinuationText;
    NSString * _watchListIdentifier;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *details;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isMediaContainer;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFMediaItem *mediaItem;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, retain) SFActionItem *playAction;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic, retain) SFRichText *specialOfferButtonLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *watchListButtonLabel;
@property (nonatomic, copy) NSString *watchListConfirmationText;
@property (nonatomic, copy) NSString *watchListContinuationText;
@property (nonatomic, copy) NSString *watchListIdentifier;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)details;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasIsMediaContainer;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isMediaContainer;
- (id)jsonData;
- (id)mediaItem;
- (id)offers;
- (id)playAction;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPlayAction:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSpecialOfferButtonLabel:(id)arg1;
- (void)setType:(id)arg1;
- (void)setWatchListButtonLabel:(id)arg1;
- (void)setWatchListConfirmationText:(id)arg1;
- (void)setWatchListContinuationText:(id)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (id)specialOfferButtonLabel;
- (id)type;
- (id)watchListButtonLabel;
- (id)watchListConfirmationText;
- (id)watchListContinuationText;
- (id)watchListIdentifier;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end