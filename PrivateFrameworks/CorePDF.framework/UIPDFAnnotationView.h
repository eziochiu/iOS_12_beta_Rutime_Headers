/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotationView : UIView {
    UIPDFAnnotation * _annotation;
}

@property (nonatomic) UIPDFAnnotation *annotation;

- (id)annotation;
- (void)setAnnotation:(id)arg1;

@end
