/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentTraitsProvider : NSObject <SXComponentTraitsProvider> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1;
- (unsigned long long)traitsForComponent:(id)arg1;

@end
