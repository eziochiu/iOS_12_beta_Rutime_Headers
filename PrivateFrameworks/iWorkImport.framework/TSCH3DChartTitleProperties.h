/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTitleProperties : NSObject {
    TSCH3DChartTitlePositioner * mCachedPositioner;
    bool  mHidden;
    TSCHChartInfo * mInfo;
    TSCH3DLabelResources * mLabels;
}

@property (nonatomic, retain) TSCH3DChartTitlePositioner *cachedPositioner;
@property (nonatomic, readonly) TSCHChartInfo *chartInfo;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) TSCH3DLabelResources *labels;

+ (id)propertiesWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2;

- (id)cachedPositioner;
- (id)chartInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hidden;
- (id)initWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2;
- (id)labels;
- (void)setCachedPositioner:(id)arg1;
- (void)setHidden:(bool)arg1;

@end
