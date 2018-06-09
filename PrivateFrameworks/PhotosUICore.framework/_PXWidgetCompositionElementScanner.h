/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow> {
    NSArray * _elements;
    double  _interColumnSpacing;
    long long  _maximumNumberOfColumns;
    double  _referenceWidth;
    long long  _scanLocation;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _scannedRowRange;
    id /* block */  _wantsEdgeToEdgeLayoutBlock;
}

@property (getter=isAtEnd, nonatomic, readonly) bool atEnd;
@property (nonatomic, copy) NSArray *elements;
@property (nonatomic) double interColumnSpacing;
@property (nonatomic) long long maximumNumberOfColumns;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic) double referenceWidth;
@property (nonatomic, copy) id /* block */ wantsEdgeToEdgeLayoutBlock;

- (void).cxx_destruct;
- (bool)_wantsEdgeToEdgeLayoutForElement:(id)arg1;
- (id)elements;
- (void)enumerateElementsUsingBlock:(id /* block */)arg1;
- (double)interColumnSpacing;
- (bool)isAtEnd;
- (long long)maximumNumberOfColumns;
- (long long)numberOfColumns;
- (double)referenceWidth;
- (bool)scanRow:(out id*)arg1;
- (void)setElements:(id)arg1;
- (void)setInterColumnSpacing:(double)arg1;
- (void)setMaximumNumberOfColumns:(long long)arg1;
- (void)setReferenceWidth:(double)arg1;
- (void)setWantsEdgeToEdgeLayoutBlock:(id /* block */)arg1;
- (id /* block */)wantsEdgeToEdgeLayoutBlock;

@end
