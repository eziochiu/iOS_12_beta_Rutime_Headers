/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient> {
    struct CGSize { double x1; double x2; } * _advancements;
    CUICatalog * _catalog;
    double  _elasticWidth;
    struct { 
        unsigned int _isRTL : 1; 
        unsigned int _vAdvance : 1; 
        unsigned int _flipped : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _applicationFrameworkContext : 3; 
        unsigned int _reserved : 25; 
    }  _flags;
    unsigned short * _glyphs;
    NSGraphicsContext * _graphicsContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageBounds;
    double  _leftControlWidth;
    double  _leftSideDelta;
    double  _lineWidth;
    long long  _numRuns;
    long long  _resolvedAlignment;
    long long  _resolvedDirection;
    double  _rightControlWidth;
    void * _runs;
    CUIStyleEffectConfiguration * _styleEffects;
}

@property long long applicationFrameworkContext;
@property (nonatomic, retain) CUICatalog *cuiCatalog;
@property (nonatomic, retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSGraphicsContext *graphicsContext;
@property (readonly) unsigned long long hash;
@property long long resolvedBaseWritingDirection;
@property long long resolvedTextAlignment;
@property (readonly) Class superclass;
@property (getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:, nonatomic) bool usesSimpleTextEffects;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (bool)_isDeallocating;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (bool)_tryRetain;
- (bool)_usesSimpleTextEffects;
- (long long)applicationFrameworkContext;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (double)elasticWidth;
- (void)finalize;
- (void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2;
- (id)graphicsContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (id)initWithRuns:(struct __CFArray { }*)arg1 glyphOrigin:(double)arg2 lineFragmentWidth:(double)arg3 elasticWidth:(double)arg4 usesScreenFonts:(bool)arg5 isRTL:(bool)arg6;
- (bool)isRTL;
- (double)lineFragmentWidth;
- (oneway void)release;
- (long long)resolvedBaseWritingDirection;
- (long long)resolvedTextAlignment;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setCuiCatalog:(id)arg1;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setGraphicsContext:(id)arg1;
- (void)setResolvedBaseWritingDirection:(long long)arg1;
- (void)setResolvedTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeWithBehavior:(long long)arg1 usesFontLeading:(bool)arg2 baselineDelta:(double*)arg3;

@end
