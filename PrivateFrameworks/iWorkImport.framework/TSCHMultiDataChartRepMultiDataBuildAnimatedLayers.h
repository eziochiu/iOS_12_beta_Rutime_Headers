/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject {
    CALayer * backgroundLayer;
    CALayer * dataSetNameLayer;
    NSArray * elementLayers;
    CALayer * legendLayer;
    NSArray * referenceLineLayers;
}

@property (nonatomic, retain) CALayer *backgroundLayer;
@property (nonatomic, retain) CALayer *dataSetNameLayer;
@property (nonatomic, copy) NSArray *elementLayers;
@property (nonatomic, retain) CALayer *legendLayer;
@property (nonatomic, copy) NSArray *referenceLineLayers;

+ (id)animatedLayers;

- (id)allBackgroundFadingLayers;
- (id)backgroundLayer;
- (id)dataSetNameLayer;
- (void)dealloc;
- (id)elementFadingLayers;
- (id)elementLayers;
- (id)layersAlreadyHaveProperTransforms;
- (id)layersRequiringGeometryTransformsBackgroundOnly:(bool)arg1;
- (id)legendLayer;
- (id)referenceLineLayers;
- (void)setBackgroundLayer:(id)arg1;
- (void)setDataSetNameLayer:(id)arg1;
- (void)setElementLayers:(id)arg1;
- (void)setLegendLayer:(id)arg1;
- (void)setReferenceLineLayers:(id)arg1;

@end
