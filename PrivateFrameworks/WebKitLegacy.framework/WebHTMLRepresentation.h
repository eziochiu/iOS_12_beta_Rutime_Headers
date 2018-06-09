/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLRepresentation : NSObject <WebDocumentDOM, WebDocumentRepresentation> {
    WebHTMLRepresentationPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedImageMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)DOMDocument;
- (bool)_isDisplayingWebArchive;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (bool)canProvideDocumentSource;
- (bool)canSaveAsWebArchive;
- (id)controlsInForm:(id)arg1;
- (id)currentForm;
- (void)dealloc;
- (id)documentSource;
- (bool)elementDoesAutoComplete:(id)arg1;
- (bool)elementIsPassword:(id)arg1;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (id)formForElement:(id)arg1;
- (id)init;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long*)arg3 resultIsInCellAbove:(bool*)arg4;
- (void)setDataSource:(id)arg1;
- (id)title;

@end
