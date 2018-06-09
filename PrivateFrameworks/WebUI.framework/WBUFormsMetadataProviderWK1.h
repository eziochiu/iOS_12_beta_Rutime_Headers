/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormsMetadataProviderWK1 : NSObject <WBSFormsMetadataProvider> {
    NSArray * _framesForAllForms;
    NSArray * _metadataForAllForms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long formCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2;

- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(id /* block */)arg1;
- (unsigned long long)formCount;
- (id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2;

@end
