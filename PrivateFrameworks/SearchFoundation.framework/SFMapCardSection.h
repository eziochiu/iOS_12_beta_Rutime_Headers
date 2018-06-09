/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMapCardSection : SFCardSection <NSCopying, NSSecureCoding, SFMapCardSection> {
    SFColor * _backgroundColor;
    SFMapRegion * _boundingMapRegion;
    bool  _canBeHidden;
    NSString * _footnote;
    NSString * _footnoteLabel;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int interactive : 1; 
        unsigned int sizeFormat : 1; 
        unsigned int pinBehavior : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _interactive;
    SFLatLng * _location;
    int  _pinBehavior;
    SFColor * _pinColor;
    NSArray * _pins;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    int  _sizeFormat;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, retain) SFMapRegion *boundingMapRegion;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *footnoteLabel;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool interactive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFLatLng *location;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic) int pinBehavior;
@property (nonatomic, retain) SFColor *pinColor;
@property (nonatomic, copy) NSArray *pins;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int sizeFormat;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)boundingMapRegion;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (id)footnoteLabel;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasInteractive;
- (bool)hasPinBehavior;
- (bool)hasSeparatorStyle;
- (bool)hasSizeFormat;
- (bool)hasTopPadding;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)interactive;
- (id)jsonData;
- (id)location;
- (int)pinBehavior;
- (id)pinColor;
- (id)pins;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBoundingMapRegion:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPins:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSizeFormat:(int)arg1;
- (void)setType:(id)arg1;
- (int)sizeFormat;
- (id)type;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (int)_crk_leadingCardSectionSeparatorStyle;
- (int)_crk_trailingCardSectionSeparatorStyle;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end
