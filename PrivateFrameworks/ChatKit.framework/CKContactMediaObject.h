/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContactMediaObject : CKCardMediaObject {
    UIImage * _vCardImage;
    bool  _vCardParsingFailed;
    CNContactVCardSummary * _vCardSummary;
}

@property (nonatomic, retain) UIImage *vCardImage;
@property (nonatomic) bool vCardParsingFailed;
@property (nonatomic, retain) CNContactVCardSummary *vCardSummary;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bbSize;
- (Class)coloredBalloonViewClass;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)icon;
- (int)mediaType;
- (void)setVCardImage:(id)arg1;
- (void)setVCardParsingFailed:(bool)arg1;
- (void)setVCardSummary:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)vCardImage;
- (id)vCardImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)vCardParsingFailed;
- (id)vCardSummary;

@end
