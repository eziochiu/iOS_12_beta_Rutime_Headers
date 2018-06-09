/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXInsertComponentLayout : NSObject <SXComponentLayout> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _columnRange;
    struct _SXComponentContentInset { 
        bool all; 
        bool left; 
        bool top; 
        bool right; 
        bool bottom; 
    }  _contentInset;
    unsigned long long  _horizontalContentAlignment;
    unsigned long long  _ignoreDocumentGutter;
    unsigned long long  _ignoreDocumentMargin;
    <SXEdgeSpacing> * _margin;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _maximumContentWidth;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _minimumHeight;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _suggestedHeight;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } columnRange;
@property (nonatomic, readonly) struct _SXComponentContentInset { bool x1; bool x2; bool x3; bool x4; bool x5; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long horizontalContentAlignment;
@property (nonatomic, readonly) unsigned long long ignoreDocumentGutter;
@property (nonatomic) unsigned long long ignoreDocumentMargin;
@property (nonatomic, retain) <SXEdgeSpacing> *margin;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } maximumContentWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } minimumHeight;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } suggestedHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (struct _SXComponentContentInset { bool x1; bool x2; bool x3; bool x4; bool x5; })contentInset;
- (unsigned long long)horizontalContentAlignment;
- (unsigned long long)ignoreDocumentGutter;
- (unsigned long long)ignoreDocumentMargin;
- (id)initWithColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)margin;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })maximumContentWidth;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })minimumHeight;
- (void)setIgnoreDocumentMargin:(unsigned long long)arg1;
- (void)setMargin:(id)arg1;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })suggestedHeight;

@end