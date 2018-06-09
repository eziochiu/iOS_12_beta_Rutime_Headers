/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property bool noHref;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)absoluteLinkURL;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuadWithOwner:(id)arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)accessKey;
- (id)alt;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (id)coords;
- (id)hashName;
- (id)host;
- (id)hostname;
- (id)href;
- (bool)noHref;
- (id)origin;
- (id)pathname;
- (id)ping;
- (id)port;
- (id)protocol;
- (id)rel;
- (id)relList;
- (id)search;
- (void)setAccessKey:(id)arg1;
- (void)setAlt:(id)arg1;
- (void)setCoords:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setNoHref:(bool)arg1;
- (void)setPing:(id)arg1;
- (void)setRel:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)shape;
- (id)target;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)absoluteQuadsAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
