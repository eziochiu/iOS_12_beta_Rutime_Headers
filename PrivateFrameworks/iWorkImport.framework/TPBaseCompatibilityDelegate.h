/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)EPUBExportCategories;
- (id)EPUBExportLanguageCodes;
- (id)backwardsCompatibleTypeForType:(id)arg1;
- (Class)exportOptionsControllerClass;
- (id)exportableTypes;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1 path:(id)arg2;
- (id)indexXmlFilename;
- (bool)isExportSupportedForType:(id)arg1 exporterOptions:(id)arg2 documentRoot:(id)arg3;
- (bool)isSageDocumentType:(id)arg1;
- (bool)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)needNewerVersionIndexXmlContentString;
- (id)nestedDocumentFilename;
- (id)newExportableDocumentTypesForFlag:(unsigned long long)arg1;
- (id)unsupportedExportMessageStringForType:(id)arg1;

@end
