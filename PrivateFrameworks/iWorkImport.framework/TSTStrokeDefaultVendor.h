/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeDefaultVendor : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _bodySideBorderColumnRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _bottomBorderRowRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _footerRowSeparatorRowRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _headerColumnSeparatorColumnRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _headerRowSeparatorRowRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _headerSideBorderColumnRange;
    bool  _isValid;
    <TSTTableStrokeProviding> * _strokeProvider;
    NSPointerArray * _strokeTypeToLayerMap;
    <TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> * _tableProvider;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _topBorderRowRange;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } bodySideBorderColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } bottomBorderRowRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } footerRowSeparatorRowRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } headerColumnSeparatorColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } headerRowSeparatorRowRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } headerSideBorderColumnRange;
@property (nonatomic) bool isValid;
@property (nonatomic) <TSTTableStrokeProviding> *strokeProvider;
@property (nonatomic, retain) NSPointerArray *strokeTypeToLayerMap;
@property (nonatomic) <TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> *tableProvider;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } topBorderRowRange;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })bodySideBorderColumnRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })bottomBorderRowRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })footerRowSeparatorRowRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })headerColumnSeparatorColumnRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })headerRowSeparatorRowRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })headerSideBorderColumnRange;
- (id)initWithStrokeProvider:(id)arg1 tableProvider:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (bool)p_headerColumnSeparatorColumnRangeIsValid;
- (bool)p_headerRowSeparatorRowRangeIsValid;
- (int)p_strokeTypeForColumn:(unsigned int)arg1;
- (int)p_strokeTypeForRow:(unsigned int)arg1;
- (void)p_updateStrokeLayer:(id)arg1 forColumnStrokeType:(int)arg2;
- (void)p_updateStrokeLayer:(id)arg1 forRowStrokeType:(int)arg2;
- (void)setBodySideBorderColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setBottomBorderRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFooterRowSeparatorRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setHeaderColumnSeparatorColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setHeaderRowSeparatorRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setHeaderSideBorderColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsValid:(bool)arg1;
- (void)setStrokeProvider:(id)arg1;
- (void)setStrokeTypeToLayerMap:(id)arg1;
- (void)setTableProvider:(id)arg1;
- (void)setTopBorderRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)strokeLayerForColumn:(unsigned int)arg1;
- (id)strokeLayerForRow:(unsigned int)arg1;
- (id)strokeLayerForStrokeType:(int)arg1;
- (id)strokeProvider;
- (id)strokeTypeToLayerMap;
- (id)tableProvider;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })topBorderRowRange;
- (int)validateChangeDescriptors:(id)arg1;
- (bool)validateGeometry;

@end
