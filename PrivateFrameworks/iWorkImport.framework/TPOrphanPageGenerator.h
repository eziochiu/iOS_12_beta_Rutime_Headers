/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPOrphanPageGenerator : NSObject <TPPageGenerator> {
    TPDocumentRoot * _documentRoot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;

@end
