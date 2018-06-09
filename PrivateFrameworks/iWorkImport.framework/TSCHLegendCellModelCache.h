/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendCellModelCache : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBadgeFillFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBadgeFrame;
    int  mBadgeType;
    struct CGSize { 
        double width; 
        double height; 
    }  mCellSize;
    double  mEffectiveStrokeWidth;
    double  mEffectiveSymbolStrokeWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLabelFrame;
    NSString * mLabelString;
    int  mLegendCellType;
    int  mLineType;
    TSCHChartSeries * mSeries;
    unsigned long long  mSeriesIndex;
    TSDStroke * mStroke;
    TSDStroke * mSymbolStroke;
    int  mSymbolType;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } badgeFillFrame;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } badgeFrame;
@property (readonly) int badgeType;
@property (readonly) int cellType;
@property (readonly) double effectiveStrokeWidth;
@property (readonly) double effectiveSymbolStrokeWidth;
@property (readonly) id fill;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelFrame;
@property (readonly) NSString *labelString;
@property (readonly) int lineType;
@property (readonly) TSCHChartSeries *series;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) TSDStroke *stroke;
@property (readonly) id symbolFill;
@property (readonly) TSDStroke *symbolStroke;
@property (readonly) int symbolType;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })badgeFillFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })badgeFrame;
- (int)badgeType;
- (int)cellType;
- (void)dealloc;
- (double)effectiveStrokeWidth;
- (double)effectiveSymbolStrokeWidth;
- (id)fill;
- (id)initWithChartModel:(id)arg1 cellType:(int)arg2 seriesIndex:(unsigned long long)arg3 withMetrics:(id)arg4 overrideLabel:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (id)labelString;
- (int)lineType;
- (id)series;
- (unsigned long long)seriesIndex;
- (struct CGSize { double x1; double x2; })size;
- (id)stroke;
- (id)symbolFill;
- (id)symbolStroke;
- (int)symbolType;

@end
