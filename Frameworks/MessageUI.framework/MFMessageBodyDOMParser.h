/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyDOMParser : MFMessageBodyParser {
    DOMDocument * _document;
}

+ (bool)documentContainsAnyQuotation:(id)arg1;

- (void)_consumeAccumulatedNodes:(id)arg1;
- (void)dealloc;
- (void)extendRange:(id)arg1 toElement:(id)arg2;
- (id)initWithDOMDocument:(id)arg1;
- (Class)messageBodyElementClass;
- (bool)parse;
- (id)rangeForElement:(id)arg1;
- (id)rangeFromElement:(id)arg1 toElement:(id)arg2;

@end
