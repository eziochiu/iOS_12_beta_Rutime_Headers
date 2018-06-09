/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties {
    TSCH3DTransform * mChartTransform;
    TSCH3DTransform * mElementsTransform;
    TSCH3DLabelResources * mLabels;
    TSCH3DArray2D * mLightingModels;
}

@property (nonatomic, retain) TSCH3DTransform *chartTransform;
@property (nonatomic, retain) TSCH3DTransform *elementsTransform;
@property (nonatomic, retain) TSCH3DLabelResources *labels;
@property (nonatomic, retain) TSCH3DArray2D *lightingModels;

- (id)chartTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)elementsTransform;
- (id)labels;
- (id)lightingModels;
- (id)renderingLightingModelForSeries:(id)arg1;
- (void)setChartTransform:(id)arg1;
- (void)setElementsTransform:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLightingModels:(id)arg1;

@end
