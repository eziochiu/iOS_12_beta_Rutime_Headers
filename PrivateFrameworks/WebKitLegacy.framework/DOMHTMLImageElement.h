/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLImageElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteImageURL;
@property (copy) NSString *align;
@property (copy) NSString *alt;
@property (readonly, copy) NSString *altDisplayString;
@property (copy) NSString *border;
@property (readonly) bool complete;
@property int height;
@property int hspace;
@property bool isMap;
@property (copy) NSString *longDesc;
@property (copy) NSString *lowsrc;
@property (copy) NSString *name;
@property (readonly) int naturalHeight;
@property (readonly) int naturalWidth;
@property (copy) NSString *src;
@property (copy) NSString *useMap;
@property int vspace;
@property int width;
@property (readonly) int x;
@property (readonly) int y;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)absoluteImageURL;
- (id)align;
- (id)alt;
- (id)altDisplayString;
- (id)border;
- (bool)complete;
- (id)crossOrigin;
- (id)currentSrc;
- (id)dataRepresentation:(bool)arg1;
- (int)height;
- (int)hspace;
- (bool)isMap;
- (id)longDesc;
- (id)lowsrc;
- (id)mimeType;
- (id)name;
- (int)naturalHeight;
- (int)naturalWidth;
- (void)setAlign:(id)arg1;
- (void)setAlt:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setCrossOrigin:(id)arg1;
- (void)setHeight:(int)arg1;
- (void)setHspace:(int)arg1;
- (void)setIsMap:(bool)arg1;
- (void)setLongDesc:(id)arg1;
- (void)setLowsrc:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSizes:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setSrcset:(id)arg1;
- (void)setUseMap:(id)arg1;
- (void)setVspace:(int)arg1;
- (void)setWidth:(int)arg1;
- (id)sizes;
- (id)src;
- (id)srcset;
- (id)useMap;
- (int)vspace;
- (int)width;
- (int)x;
- (int)y;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_edgeToEdgeImageAttachmentStyle;

- (void)mf_applyEdgeToEdgeStyleWithViewportWidth:(double)arg1;
- (void)mf_constrainImageToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)mf_isEdgeToEdgeFormatted;
- (bool)mf_shouldFormatEdgeToEdge;
- (void)mf_unconstrainImageSize;
- (void)recursivelyRemoveMailAttributes;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)alwaysAttemptToShowTapHighlight;
- (bool)showsTapHighlight;

@end
