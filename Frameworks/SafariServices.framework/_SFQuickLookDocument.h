/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFQuickLookDocument : NSObject {
    LSDocumentProxy * _documentProxy;
    <_SFQuickLookDocumentSource> * _documentSource;
    NSString * _fileName;
    NSString * _mimeType;
    bool  _needsQuickLookDocumentView;
    NSString * _savedPath;
    NSString * _savedPathWithProperExtension;
    bool  _shouldDeleteSavedPath;
    bool  _shouldDeleteSavedPathWithProperExtension;
    NSURL * _sourceURL;
    NSString * _uti;
}

@property (nonatomic, retain) LSDocumentProxy *documentProxy;
@property (nonatomic) <_SFQuickLookDocumentSource> *documentSource;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, readonly, copy) NSString *inferredUTI;
@property (nonatomic, readonly, copy) NSString *localizedType;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, readonly) bool needsQuickLookDocumentView;
@property (nonatomic, copy) NSString *savedPath;
@property (nonatomic, copy) NSString *savedPathWithProperExtension;
@property (nonatomic, readonly, copy) NSURL *savedURLWithProperExtension;
@property (nonatomic, readonly) bool shouldUnzipByUIDocumentInteractionController;
@property (nonatomic, retain) NSURL *sourceURL;
@property (nonatomic, copy) NSString *uti;

+ (bool)_hasSuitableApplicationForOpeningDocument:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteSavedPathIfNecessary;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)arg1;
- (void)dealloc;
- (id)documentProxy;
- (id)documentSource;
- (id)fileName;
- (id)inferredUTI;
- (id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(bool)arg4;
- (id)localizedType;
- (id)mimeType;
- (bool)needsQuickLookDocumentView;
- (void)saveToFileIfNeeded;
- (id)savedPath;
- (id)savedPathWithProperExtension;
- (id)savedURLWithProperExtension;
- (void)setDocumentProxy:(id)arg1;
- (void)setDocumentSource:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileNameForPDFDocument:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setSavedPath:(id)arg1;
- (void)setSavedPath:(id)arg1 shouldDelete:(bool)arg2;
- (void)setSavedPathWithProperExtension:(id)arg1;
- (void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(bool)arg2;
- (void)setSourceURL:(id)arg1;
- (void)setUti:(id)arg1;
- (bool)shouldUnzipByUIDocumentInteractionController;
- (id)sourceURL;
- (id)uti;

@end
