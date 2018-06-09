/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource> {
    SXMosaicGalleryLayouter * _layouter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXMosaicGalleryLayouter *layouter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
- (struct CGSize { double x1; double x2; })galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (id)layouter;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (void)setLayouter:(id)arg1;

@end
