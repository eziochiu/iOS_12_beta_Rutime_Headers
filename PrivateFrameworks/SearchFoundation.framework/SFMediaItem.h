/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFMediaItem : NSObject <NSCopying, NSSecureCoding, SFMediaItem> {
    NSArray * _buyOptions;
    NSString * _contentAdvisory;
    SFImage * _contentAdvisoryImage;
    SFImage * _overlayImage;
    SFPunchout * _punchout;
    SFImage * _reviewGlyph;
    NSString * _reviewText;
    NSArray * _subtitleCustomLineBreaking;
    SFText * _subtitleText;
    SFImage * _thumbnail;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *buyOptions;
@property (nonatomic, copy) NSString *contentAdvisory;
@property (nonatomic, retain) SFImage *contentAdvisoryImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFImage *overlayImage;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic, retain) SFImage *reviewGlyph;
@property (nonatomic, copy) NSString *reviewText;
@property (nonatomic, copy) NSArray *subtitleCustomLineBreaking;
@property (nonatomic, retain) SFText *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buyOptions;
- (id)contentAdvisory;
- (id)contentAdvisoryImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)overlayImage;
- (id)punchout;
- (id)reviewGlyph;
- (id)reviewText;
- (void)setBuyOptions:(id)arg1;
- (void)setContentAdvisory:(id)arg1;
- (void)setContentAdvisoryImage:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setReviewGlyph:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setSubtitleCustomLineBreaking:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitleCustomLineBreaking;
- (id)subtitleText;
- (id)thumbnail;
- (id)title;

@end
