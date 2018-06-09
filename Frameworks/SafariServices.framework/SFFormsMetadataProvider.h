/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {
    NSDictionary * _frameHandleToForms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long formCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(id /* block */)arg1;
- (unsigned long long)formCount;
- (id)initWithFrameHandleToFormsDictionary:(id)arg1;

@end
