/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSampleGadgetProvider : PXGadgetProvider {
    bool  _hasLoadedData;
    bool  _includeHorizontal;
    NSArray * _sampleGadgets;
}

@property (nonatomic) bool hasLoadedData;
@property (nonatomic, readonly) bool includeHorizontal;
@property (nonatomic, retain) NSArray *sampleGadgets;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (bool)hasLoadedData;
- (bool)includeHorizontal;
- (id)init;
- (id)initWithHorizontalGadget:(bool)arg1;
- (void)loadDataForGadgets;
- (id)sampleGadgets;
- (void)setHasLoadedData:(bool)arg1;
- (void)setSampleGadgets:(id)arg1;

@end
