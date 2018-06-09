/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLElement : DOMElement

@property (copy) NSString *accessKey;
@property (readonly) DOMHTMLCollection *children;
@property (copy) NSString *contentEditable;
@property (copy) NSString *dir;
@property (copy) NSString *idName;
@property (copy) NSString *innerText;
@property (readonly) bool isContentEditable;
@property (copy) NSString *lang;
@property (copy) NSString *outerText;
@property int tabIndex;
@property (copy) NSString *title;
@property (readonly, copy) NSString *titleDisplayString;

- (void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4;
- (id)accessKey;
- (id)autocapitalize;
- (bool)autocorrect;
- (id)children;
- (void)click;
- (id)contentEditable;
- (id)dir;
- (bool)draggable;
- (bool)hidden;
- (id)idName;
- (id)innerText;
- (id)insertAdjacentElement:(id)arg1 element:(id)arg2;
- (void)insertAdjacentHTML:(id)arg1 html:(id)arg2;
- (void)insertAdjacentText:(id)arg1 text:(id)arg2;
- (bool)isContentEditable;
- (id)lang;
- (id)outerText;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)setAccessKey:(id)arg1;
- (void)setAutocapitalize:(id)arg1;
- (void)setAutocorrect:(bool)arg1;
- (void)setContentEditable:(id)arg1;
- (void)setDir:(id)arg1;
- (void)setDraggable:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIdName:(id)arg1;
- (void)setInnerText:(id)arg1;
- (void)setLang:(id)arg1;
- (void)setOuterText:(id)arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForIOSCaret:(bool)arg3;
- (void)setSpellcheck:(bool)arg1;
- (void)setTabIndex:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTranslate:(bool)arg1;
- (void)setWebkitdropzone:(id)arg1;
- (bool)spellcheck;
- (int)structuralComplexityContribution;
- (int)tabIndex;
- (id)title;
- (id)titleDisplayString;
- (bool)translate;
- (id)webkitdropzone;

@end
